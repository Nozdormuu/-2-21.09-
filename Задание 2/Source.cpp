#include"linked_list.h"
using namespace std;
//\brief функция возвращает целую часть квадратного корня из целого числа с
//\details если число было больше 0 - вернет целую часть корня, иначе - 0
int My_Sqrt(int c)
{   
	if(c>=0)
	{
		for (int i = 0; i < c; i++)
		{
			if ((i * i) >= c)
			{
				if (c % 2 == 0)
					return i;
				else
					return i - 1;
			}
		}
		
		
	}
	return 0;

}

// \brief возвращает наибольший префикс из массива слов
// @params принимает массив слов strs и его размер(количество слов в нем)
 const char* LongestCommonPrefix(char** strs, int strSize) {
	     char* str = strs[0];
		 int i, j;
	     if (strSize == 0) return "";
		     for (i = 1; i < strSize; i++) 
			 {
			         j = 0;
					 while (str[j] && strs[i][j] && str[j] == strs[i][j]) 
						 j++;
						 str[j] = '\0';
					 
		     }
	    return str;
		
	}



int main() {
	Linked_list l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	l1.push_back(120);
	l1.Print();
	l1.delete_el(3);
	l1.Print();
	l1.find_el(2);
	

	

	return 0;

}