#include <iostream>
#include "MystringS1.h"

using namespace std;
void Section14ChallengeS1()
{
    cout << boolalpha << endl;
    MystringS1 a{ "frank" };
    MystringS1 b{ "frank" };
    cout << (a == b) << endl;         // true
    cout << (a != b) << endl;           // false

    b = "george";
    cout << (a == b) << endl;         // false
    cout << (a != b) << endl;          // true
    cout << (a < b) << endl;         // true
    cout << (a > b) << endl;          // false

    MystringS1 s1{ "FRANK" };
    s1 = -s1;
    cout << s1 << endl;             // frank              

    s1 = s1 + "*****";
    cout << s1 << endl;             // frank*****       

    s1 += "-----";                      // frank*****-----
    cout << s1 << endl;

    MystringS1 s2{ "12345" };
    s1 = s2 * 3;
    cout << s1 << endl;           // 123451234512345

    MystringS1 s3{ "abcdef" };
    s3 *= 5;
    cout << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef

    MystringS1 repeat_string;
    int repeat_times;
    cout << "Enter a string to repeat: " << endl;
    cin >> repeat_string;
    cout << "How many times would you like it repeated? " << endl;
    cin >> repeat_times;
    repeat_string *= repeat_times;
    cout << "The resulting string is: " << repeat_string << endl;

    cout << (repeat_string * 12) << endl;

    repeat_string = "RepeatMe";
    cout << (repeat_string + repeat_string + repeat_string) << endl;

    repeat_string += (repeat_string * 3);
    cout << repeat_string << endl;

    repeat_string = "RepeatMe";
    repeat_string += (repeat_string + repeat_string + repeat_string);


    MystringS1 s = "Frank";
    ++s;
    cout << s << endl;                  // FRANK

    s = -s;
    cout << s << endl;                  // frank
    MystringS1 result;
    result = ++s;
    cout << s << endl;                  // FRANK
    cout << result << endl;           // FRANK

    s = "Frank";
    s++;
    cout << s << endl;                  // FRANK

    s = -s;
    cout << s << endl;                  // frank
    result = s++;
    cout << s << endl;                  // FRANK
    cout << result << endl;           // frank
}