#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

// Calculate distance between two points
double distanceBetween(Point a, Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main() {

    // Center point of the buffers
    Point center;

    cout << "Enter the center point (x y): ";
    cin >> center.x >> center.y;

    // Enter buffer sizes
    int numberOfBuffers;
    cout << "Enter number of buffers: ";
    cin >> numberOfBuffers;

    vector<double> buffers(numberOfBuffers);

    cout << "Enter the buffer sizes:\n";
    for (int i = 0; i < numberOfBuffers; i++) {
        cout << "Buffer " << i + 1 << ": ";
        cin >> buffers[i];
    }

    // Enter points to be analysed
    int numberOfPoints;
    cout << "Enter number of points: ";
    cin >> numberOfPoints;

    vector<Point> points(numberOfPoints);

    cout << "Enter the coordinates of the points:\n";

    for (int i = 0; i < numberOfPoints; i++) {
        cout << "Point " << i + 1 << " (x y): ";
        cin >> points[i].x >> points[i].y;
    }

    // Check points against each buffer
    cout << "\n===== BUFFER ANALYSIS =====\n";
    cout << "Center: (" << center.x << ", "
         << center.y << ")\n";

    for (int i = 0; i < numberOfBuffers; i++) {

        cout << "\nBuffer " << i + 1
             << " (radius = " << buffers[i] << "):\n";

        bool found = false;

        for (int j = 0; j < numberOfPoints; j++) {

            double distance = distanceBetween(center, points[j]);

            if (distance <= buffers[i]) {
                cout << "Point " << j + 1
                     << " (" << points[j].x
                     << ", " << points[j].y
                     << ")"
                     << " - Distance = "
                     << distance << endl;

                found = true;
            }
        }

        if (!found) {
            cout << "No points found within this buffer.\n";
        }
    }

    return 0;
}