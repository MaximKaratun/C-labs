//В книге на одной странице помещается K строк. Таким образом, на 1-й странице печатаются строки с 1-й по K-ю, на второй — с (K+1)-й по (2∙K)-ю и т.д. 
//Напишите программу, которая по номеру строки в тексте определяет номер страницы, на которой будет напечатана эта строка, и порядковый номер этой строки на странице.
//Входные данные
//Вводятся два числа: K — количество строк, которое печатается на странице, и N — номер строки (1≤K≤200, 1≤N≤20000).
//Выходные данные
//Выведите два числа — номер страницы, на которой будет напечатана эта строка, и номер строки на странице.

#include <iostream>
#include<math.h>
using namespace std;
int str,nc,k,n;						


int main (){
	setlocale (LC_ALL,"Russian");
	cout <<"Введите количество строк на странице ";
	cin>>k;
	cout<<"Введите номер строки из текста ";
	cin>>n;
	if( k>200){								//проверка условий
		cout<<"Введены не верные данные  "<<endl;
		if(n>20000){
			cout<<"Введены не верные данные  "<<endl;
			if(k<1){
				cout<<"Введены не верные данные  "<<endl;
				if(n<1){
					cout<<"Введены не верные данные  "<<endl;
				}
			}
		}
	}
	else{
		str=n/k;
		nc=n%k;
		if (nc==0){
			nc=k;
		}
		else {
			str=str+1;
		}
		cout<<"Номер страницы "<<str<<endl;
		cout<<"Номер строки на странице "<<nc<<endl;
	}
	system("pause");
	return 0;
}