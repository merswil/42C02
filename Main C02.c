
#include<stdio.h>

int	main(void)
{
	char A[] = "Hive!";
	char B[10];
	
	ft_strcpy(B, A);
	printf("%s", B);
	return (0);
}





#include<stdio.h>

int	main(void)
{
	char A[] = "Hive is a place to be!";
	char B[10];
	int C = 8;
	
	
	printf("%s", ft_strncpy(B, A, C));
	return 0;
}








#include<stdio.h>

int	main(void)
{
	char A[] = "HELLO";
	char B[] = "PAUL";
	char C[5] = "Hive";
	char D[7] = "hello2";
	
	printf("%d",ft_str_is_alpha(A));
	printf("%d",ft_str_is_alpha(B));
	printf("%d",ft_str_is_alpha(C));
	printf("%d",ft_str_is_alpha(D));
	return 0;
}









#include<stdio.h>

  int main() 
  {
	char A[] = "hey boy";
	char B[] = "hello 12";
	char C[] = "12345";
	printf("%i", ft_str_is_numeric(A));
	printf("%i", ft_str_is_numeric(B));
	printf("%i", ft_str_is_numeric(C));
	return 0;
 }
 







#include<stdio.h>

  int main() 
  {
	char A[] = "hey boy";
	char B[] = "hello 12";
	char C[] = "12345";
	printf("%i", ft_str_is_numeric(A));
	printf("%i", ft_str_is_numeric(B));
	printf("%i", ft_str_is_numeric(C));
	return 0;
 }
 
 
 
 
  
 
 
#include<stdio.h>


 int main() 
  {
	char A[] = "hey boy";
	char B[] = "hello12";
	char C[] = "12345";
	char D[] = "";
	printf("%d", ft_str_is_lowercase(A));
	printf("%d", ft_str_is_lowercase(B));
	printf("%d", ft_str_is_lowercase(C));
	printf("%d", ft_str_is_lowercase(D));
	return 0;
 }
 
 
 
 
 
 
 
 
 #include<stdio.h>


 int main() 
  {
	char A[] = "ABCD";
	char B[] = "hello12";
	char C[] = "12345";
	char D[] = "";
	printf("%d", ft_str_is_uppercase(A));
	printf("%d", ft_str_is_uppercase(B));
	printf("%d", ft_str_is_uppercase(C));
	printf("%d", ft_str_is_uppercase(D));
	return 0;
 }
 
 
 
 
 
 
 
 #include<stdio.h>


 int main() 
  {
	char A[] = "ABCD*&^%$";
	char B[] = "hello12";
	char C[] = "12345";
	char D[] = "  ";
	char E[] = "";
	printf("%d", ft_str_is_printable(A));
	printf("%d", ft_str_is_printable(B));
	printf("%d", ft_str_is_printable(C));
	printf("%d", ft_str_is_printable(D));
	return 0;
 }
 
 
 
 
 
 
 
 
 #include<stdio.h>


int main() 
 {
	char A[] = "abcd*&^%$";
	char B[] = "hello12";
	char C[] = "12345";
	char D[] = "  ";
	char E[] = "";
	printf("%s", ft_strupcase(A));
	printf("%s", ft_strupcase(B));
	printf("%s", ft_strupcase(C));
	printf("%s", ft_strupcase(D));
	return 0;
 }
 
 
 
 
 
 
 
 #include<stdio.h>


 int main() 
  {
	char A[] = "ABCD*&^%$";
	char B[] = "hello12";
	char C[] = "12345";
	char D[] = "  ";
	char E[] = "";
	printf("%s", ft_strlowcase(A));
	printf("%s", ft_strlowcase(B));
	printf("%s", ft_strlowcase(C));
	printf("%s", ft_strlowcase(D));
	return 0;
 }
 
 
 
 
 
 
 
 
 #include<stdio.h>


int main() 
  {
	char A[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s", ft_strcapitalize(A));

	return 0;
 }
 
 
 
 
 
 
 
 
