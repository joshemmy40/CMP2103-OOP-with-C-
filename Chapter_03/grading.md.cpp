# Test Grading Program
 1. Introduction

This C++ program is designed to grade a test taken by **eight students**. The test contains **ten questions**, and each question has a correct answer stored in an answer key.

The students' answers are stored in a **two-dimensional array**, while the correct answers are stored in a **one-dimensional array**. The program compares each student's answer with the corresponding correct answer and counts the number of questions answered correctly.

Finally, the program displays the score obtained by each student out of 10.

2. Libraries Used

The program begins with:
#include <iostream>
#include <vector>
The `iostream` library is used for input and output operations, particularly for displaying the students' scores using `cout`.
The `vector` library is included in the program, although it is not actually used because the program stores the answers using ordinary arrays.
The statement:
using namespace std;
allows the program to use standard C++ objects such as `cout` without writing `std::` before them.


 3. Defining the Number of Students and Questions

The program defines two constants:
const int STUDENTS = 8;
const int QUESTIONS = 10;
`STUDENTS` stores the number of students, which is 8.

`QUESTIONS` stores the number of questions, which is 10.

Using constants makes the program easier to understand and modify.
 4. Storing the Correct Answers

The correct answers are stored in a one-dimensional character array:

char CorrectAnswers[10] = {
    'D', 'B', 'D', 'C', 'C',
    'D', 'A', 'E', 'A', 'D'
};


Each position in the array represents one question.

For example:

* `CorrectAnswers[0]` is `D`
* `CorrectAnswers[1]` is `B`
* `CorrectAnswers[2]` is `D`
* `CorrectAnswers[9]` is `D`

Therefore, the array contains the correct answer for all ten questions.
 5. Storing Students' Answers

The answers provided by the eight students are stored in a two-dimensional array:
char StudentAnswers[8][10]
The first dimension represents the students, while the second dimension represents the questions.
For example:
StudentAnswers[0][0]
represents Student 1's answer to Question 1.

Similarly:
StudentAnswers[7][9]
represents Student 8's answer to Question 10.

The array therefore contains:

8 students multiply by 10 questions = 80 answers

 6. Grading the Students

The program uses two nested `for` loops to grade the students.

The outer loop is:
for (int i = 0; i < STUDENTS; i++)
This loop goes through all eight students.

For every student, the variable:
int correctCount = 0;
is initialized to zero. This variable keeps track of the number of correct answers for that particular student.

The inner loop is:
for (int j = 0; j < QUESTIONS; j++)
This loop goes through all ten questions for the current student.
 7. Comparing Answers

Inside the inner loop, the program compares the student's answer with the correct answer:
if (StudentAnswers[i][j] == CorrectAnswers[j])




