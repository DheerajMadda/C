#include<stdio.h>
#include<string.h>
int main()
{
	char str1[15]="Its a cat";
	char str2[15]=" named tom";
	char str3[30];  //String concat result
	char str4[15]="Its a cat";  //for string compairing
	char strrev[15]="Mandy";     //String reverse 

//Length of Strings
	int i=0,j=0;
	while(str1[i] !='\0')
	i++;
	while(str2[j] !='\0')
	j++;
	printf("Length of str1=%d\nLength of str2=%d\n",i,j);

//Concatenation of Strings
	int m,n,k;
	for(m=0;m<i;m++)
	str3[m]=str1[m];
	for(n=i,k=0;k<j;n++,k++)
	str3[n]=str2[k];
        str3[n] = '\0';
	printf("%s\n",str3);

//Comparison of Strings
	 int c = 0;
         while(str1[c] == str4[c])
	 {
           if (str1[c] == '\0' || str4[c] == '\0')
           break;
           c++;
         }
         if (str1[c] == '\0' && str4[c] == '\0')
      	 printf("Strings are same\n");
         else
         printf("Strings are Different\n");

//Reversing String in memory
	int h,g=5;
	char temp;
	for(h=0;h<g/2;h++)
	{
	temp=strrev[h];
	strrev[h]=strrev[4-h];
	strrev[4-h]=temp;
	}
	printf("String Reverse in memory:%s\n",strrev);

//Finding occurance in given string

	char character,word[50];
   	int in,freq=0,flag=0;
 
        printf("Enter character:\n");
        scanf("%c", &character);
        printf("Now enter the word:\n");
        scanf("%s", word);
        printf("Positions of '%c' in %s is at index: ", character, word);
        for(in=0; in<strlen(word); in++)
        {
      	  if (word[in] == character)
          {
            flag = 1;
            printf("%d  ", in + 1);
            freq++;
          }
       }
       if (flag)
       printf("\nCharacter '%c' occured for %d times.\n", character, freq);
       else
       printf("None\n");

	return 0;
}
