/*A library management system is being developed to handle book requests from users. The system has a feature where users can input the title of a book they want to borrow.



However, due to a specific request, the system needs to accept book titles that do not contain the letter 'o'. If the letter 'o' is present in the title, the system should truncate the title up to the occurrence of the letter 'o' and only accept the portion before it.

Input format :
The input consists of a string of characters, representing the book.

Output format :
The output should display the accepted string according to the given condition in the problem statement.*/

#include <stdio.h>

int main()
{
    char str[250];
    scanf("%[^o]s", str);
    printf("Accepted String: %s", str);
    return 0;
}
