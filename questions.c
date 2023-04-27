#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer1 = get_string("What´s your name?" );
    string answer2 = get_string("what´s your last name?" );
    printf("hello, %s %s \n", answer1, answer2);
}
