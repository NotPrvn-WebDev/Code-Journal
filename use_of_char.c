//Usage of Character for a single character, word and a sentence
#include<stdio.h>
 int main(){

    char a;
    char word[200];
    char sentence[2000];

    printf("Enter a value");
    scanf("%c",&a);

    printf("Enter a word");
    scanf("%s",&word);

    printf("Enter a sentence");
    scanf(" %[^\n]s",&sentence);

    printf("\n a is: %c \n the word is: %s \n the sentence is: %s",a,word,sentence);
    return 0;
 }