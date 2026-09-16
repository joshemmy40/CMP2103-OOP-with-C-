Chapter 04 
- Credit Card Validator
ObjectiveTo develop a C++ program that validates a credit card number by checking its prefix and extracting card information.
Problem DescriptionThe program reads a credit card number as a string, converts it into a vector of integers, and then checks if its starting digits (prefix) match known card vendors (Visa, MasterCard, Amex, Discover).
How The Code Works
1.Reading the Card Number - readCardNumber()This function prompts the user to enter a card number. It reads the number as a string to avoid overflow (card numbers are 13-16 digits). Each character is converted to an integer using digit - '0' and stored in a vector<int>.
2.Getting Prefix - getPrefix(number, k)This function returns the first k digits of the card. For example, if the card is 4242424242424242 and k=3, it returns 424. It builds the prefix using k_prefix = k_prefix * 10 + number[i].
3. Getting Size - getSize(number)Returns the total number of digits using number.size(). A valid credit card must have 13 to 16 digits.
4. Checking Prefix - prefixMatched(number)Checks if the card starts with a valid vendor prefix:4 = Visa5 = MasterCard37 = American Express6 = Discover
Returns 1 for true and 0 for false.
5. Main FunctionThe main function calls readCardNumber(), then prints the prefix using getPrefix(number, 3) and prints whether the prefix matched using prefixMatched(number).The commented parts in the code are for the full Luhn Algorithm validation which includes sumOfDoubleEvenPlace(), getDigit(), sumOfOddPlace(), and isValid() to check if (sum of evens + sum of odds) % 10 == 0.Concepts UsedVectors and StringsFunctionsLoopsType ConversionBoolean LogicSample RunEnter number: 
4242424242424242
Prefix: 424
Matched: 1Matched 1 means valid Visa prefix, 0 means invalid.Test Cards4242424242424242 - Valid
5555555555554444 - ValidFilecreditcard.cpp