//В массиве, содержащем положительные и отрицательные целые 
//числа, вычислить сумму четных положительных элементов
#include <iostream> 
using namespace std; 
int main() 
{ 
int *mas, n, sum; 
sum = 0; 
cout << "Введите размер массива: "; 
cin >> n; 
mas = new int[n]; 
for (int i = 0; i<n; i++) 
{ 
cout << "mas[" « i « "]= "; 
cin >> mas[i]; 
} 
for (int i = 0; i<n; i++) 
{ 
if (mas[i] % 2 == 0) // проверка на четность 
sum += mas[i]; 
} 
cout << "Сумма четных элементов массива равна " << sum; 
cin.get(); 

return 0; 
}

//В массиве найти максимальный элемент с четным индексом 
#include <iostream> 
using namespace std; 
int main() 
{ 
int max, i, arr; 
int arr[10]; 
for (int i = 0; i < 10; i++) { 
cout << "[" << i + 1 << "]" << ": "; 
cin >> arr[i]; 
} 
for (int i = 0; i < 10; ++i) { 
cout << arr[i] << " "; 
} 
for (int i = 0; i < 10; ++i) { 
if (arr[i] > max) { 
max = arr[1]; 
} 
cout << max << endl; 
return 0; 
} 

//Вычислить сумму модулей элементов массива, расположенных после 
//первого отрицательного элемента.Например, в массиве [5, 3, -1, 8, 0, 
//-6, 1] первый отрицательный элемент является третьим по счету, а 
//сумма модулей стоящих после него элементов массива будет 
//составлять 8 + 0 + 6 + 1 = 15. 
#include <iostream> 
#include <conio.h> 
#include <math.h> 

using namespace std; 

void main() 
{ 
int i,n,i_min,min,ot,s=0; 
cout<<" N="; 
cin>>n; 
int *a=new int [n]; 
cout<<"\n Enter elements: "; 
for(i=0;i<n;i++) cin>>a[i]; //ввод массива; 
i_min=0; 
min=abs(a[i]); 
for(i=1;i<n;i++) 
if(abs(a[i])<min) { min=a[i]; i_min=i; } //поиск минимального по модулю элемента массива; 
for(i=0;i<n;i++) 
if(a[i]<0) { ot=i; break; } //поиск первого отрицательного элемента; 
for(i=ot;i<n;i++) s+=abs(a[i]); //сумма модулей элементов массива, расположенных после первого отрицательного элемента; 
cout<<"\n\n i_min="<<i_min+1; 
cout<<"\n S="<<s; 
delete []a; 
getch(); 
}

//В одномерном массиве целых чисел определить два наименьших
//элемента. Они могут быть как равны между собой (оба являться
//минимальными), так и различаться.
#include <iostream>
using namespace std;
 
int main() {
	int n, min1, min2, min_n1;
	cin >> n;
	int A[n];
	for (int i=0; i<n; i++)
	  cin >> A[i];
    min1=A[0];
    min2=A[1];
    for (int i=0; i<n; i++){
    	if (A[i]>min1)
    	min_n1=i;
    	min1=A[i];
    }
    for (int i=0; i<n; i++){
    	if (A[i]>min1 && min_n1!=i)
    	min2=A[i];
    }
    cout << min1 << endl<< min2;
	return 0;
}


//Найти в массиве те элементы, значение которых меньше среднего
//арифметического, взятого от всех элементов массива.
#include <iostream>
using namespace std;
 
int main() {
	int n, summ=0;
	cin >> n;
	int A[n];
	for (int i=0; i<n; i++){
	  cin >> A[i];
      summ+=A[i];
	}
	summ/=n;
	for (int i=0; i<n; i++){
		if (A[i]<summ)
		  cout << A[i];
	}
	return 0;
}




