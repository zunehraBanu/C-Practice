/*56. Write a C++ program to show the manipulation of a string.
Sample Output:
Show the manipulation of a string:
-------------------------------------
The string:: welcome, w3resource
The length of the string:: 19
The char at index 1 of the string:: e
The char at index 1 of the string [using array ]:: e
Is the string empty:: 0
Retrieve the sub-string from 3rd position for 4 characters:: come
The sub-string replace by 'went':: welwent, w3resource
Append a string 'end' at last of the string:: welwent, w3resource end
Append a string 'end' at last of the string using operator:: welwent, w3resource end end
The string 'insert' inserting at 3rd position of the string:: wel insert went, w3resource end
The new string is:: wel insert went, w3resource end
Input a sentence:: The quick brown fox jumps over the lazy dog.
The quick brown fox jumps over the lazy dog.*/

#include <iostream>
using namespace std;
int main()
{
    /*we create a std::string object named text and then use text.length() to determine the length of the string. This function returns an integer representing the number of characters in the string. It is a method that can be used to determine the length or the number of characters in a C++ string object. It is commonly used with the Standard Library string class (std::string) to find the length of a string.*/

    /*In C++, you can use text.at(index)[here text is variable name of a string] to access a specific character in a string at the given index. The indexing in C++ starts from 0, so text.at(1) would access the character at the second position in the string. Using text.at(index) is a safe way to access characters in a string because it performs bounds checking and will throw an std::out_of_range exception if the index is out of bounds (e.g., if you try to access an index that doesn't exist in the string). If you don't want bounds checking and are sure that the index is within the valid range, you can also use the subscript operator, like text[1], to achieve the same result.*/

    /*In C++, you can use the subscript operator ([]) to access a specific character in a string at the given index. The indexing in C++ starts from 0, so text[1] [important: here text is variable name of string] would access the character at the second position in the string.Using text[1] is a common and convenient way to access characters in a string when you are confident that the index is within the valid range. However, please note that the subscript operator does not perform bounds checking, so it's your responsibility to ensure that the index is valid to avoid accessing memory out of bounds. If you need bounds checking, you can use text.at(index)*/

    /*In C++, text.empty() is a method used to check whether a string is empty. It is a member function of the C++ Standard Library string class (std::string). You can use it to determine if a string contains no characters (i.e., it has a length of 0). */

    /*n C++, txt.substr(pos, len) is a method used to extract a substring from a given string txt. The pos parameter specifies the starting position (or index) from which you want to extract the substring, and the len parameter specifies the length of the substring you want to extract.*/

    /*In C++, text.replace() [text is variable of a string] is a method used to replace a portion of a string with another string. It is a member function of the C++ Standard Library string class (std::string). The replace() method allows you to specify the position to start replacing characters, the number of characters to replace, and the string that you want to replace them with. text.replace(pos, count, new_string)
    pos: The starting position in the string where the replacement should begin.
    count: The number of characters to be replaced, starting from the position pos.
    new_string: The string that will replace the specified portion of the original string.
    The replace() method can be used to perform various string replacement operations, allowing you to update or modify specific parts of a string.*/

    /*In C++, you can use the append() method to add or concatenate a string to an existing string. It's a member function of the C++ Standard Library std::string class. Here's the basic syntax of text.append() text.append(other_string);
    text: The original string to which you want to add or concatenate another string.
    other_string: The string you want to append or concatenate to the original string.
    You can use append() to combine strings together, and it's equivalent to using the + operator for string concatenation.*/

    /*In C++, you can concatenate two strings using the + operator. */

    /*In C++, you can use the insert() method to insert characters or another string into an existing string at a specified position. The insert() method is a member function of the std::string class. Here's the basic syntax of text.insert(): text.insert(pos, str_to_insert);
    text: The original string in which you want to insert another string.
    pos: The position (index) where you want to insert the new string.
    str_to_insert: The string that you want to insert into the original string.*/

    /*In C++, getline() is a function used for reading a line of text from an input stream, such as standard input (e.g., the keyboard) or a file. It is often used to read a line of text as a string, including any spaces or newline characters. The most commonly used version of getline() is part of the C++ Standard Library and is designed for working with string input. For example, if you input "Hello, this is a sample input," the program will output: You entered: Hello, this is a sample input
    getline() is a useful function for reading entire lines of text, and it's often used for input in C++ programs, especially when dealing with user input or text files.*/
    string text = "welcome, w3resource";
    cout << "Show the manipulation of a string:" << endl;
    cout << "-------------------------------------" << endl;
    cout << "The string:: " << text << endl;
    cout << "The length of the string:: " << text.length() << endl;
    cout << "The char at index 1 of the string:: " << text.at(1) << endl;
    cout << "The char at index 1 of the string [using array ]:: " << text[1] << endl;
    cout << "Is the string empty:: " << text.empty() << endl;
    cout << "Retrieve the sub-string from 3rd position for 4 characters:: " << text.substr(3, 4) << endl;
    cout << "The sub-string replace by 'went':: " << text.replace(3, 4, "went") << endl;
    cout << "Append a string 'end' at last of the string:: " << text.append(" end") << endl;
    cout << "Append a string 'end' at last of the string using operator:: " << text + " end" << endl;
    cout << "The string 'insert' inserting at 3rd position of the string:: " << text.insert(3, " insert ") << endl;
    cout << "The new string is:: " << text << endl;
    cout << "Input a sentence:: ";
    getline(cin, text);
    cout << text << endl;
    return 0;
}