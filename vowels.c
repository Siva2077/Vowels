#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	int lowercase_vowels, uppercase_vowels;
	printf("Enter the Alphabet:  ");
	scanf("%c",&c);
	
	lowercase_vowels=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	uppercase_vowels=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(!isalpha(c))
	{
		printf("Ｔｈｅ Ｃｈａｒａｃｔｅｒ %c ｉｓ ｎｏｔ ａｎ Ａｌｐｈａｂｅｔ！ Ｅｒｒｏｒ！\n",c);
	}
	else if(lowercase_vowels||uppercase_vowels)
	{
		printf("Ｔｈｅ Ａｌｐｈａｂｅｔ %c ｉｓ ａ Ｖｏｗｅｌ\n",c);
	}
	else
	{
		printf("𝕋𝕙𝕖 𝔸𝕝𝕡𝕙𝕒𝕓𝕖𝕥 %c 𝕚𝕤 𝕒 ℂ𝕠𝕟𝕤𝕠𝕟𝕒𝕟𝕥\n",c);
	}
	return 0;
}
