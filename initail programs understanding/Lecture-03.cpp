#include<iostream>
using namespace std;

int main(){
	
	
//	PROGRAM 01-> 
	// 1 2 3 4
	// 1 2 3 4
	// 1 2 3 4
	
//	int i = 1;
//	while(i<=4){
//		int j = 1;
//		
//		while(j<=4){
//			cout<<" "<<j<<" ";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}

//	PROGRAM 02-> 

//cout<<"PATTREN 02"<<endl;
// 3 2 1
// 3 2 1

//int a = 0;
//while(a<4){
//	int b = 3;
//	while(b>=0){
//		cout<<" "<<b<<" ";
//		b--;
//	}
//	cout<<endl;
//	a++;
//}


//	PROGRAM 03->
// 1 2 3 4 5
// 6 7 8 9 10 ...

//int count=1;
//int i = 0;
//
//while(i<30){
//	
//	
//	int j = 0;
//	while(j<3){
//		cout<<" "<<count;
//		count++;
//		j++;
//	}
//	i++;
//	cout<<endl;
//} 




//	PROGRAM 04->

// *
// **
// ***

//int size;
//char ch;
//cout<<"Enter Size: "<<endl;
//cin>>size;
//cout<<"Enter Symbol: "<<endl;
//cin>>ch;
//int i=0;
//while(i<size){
//	int j = 0;
//	while(j <= i){
//		cout<<" "<<"*";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}



//	PROGRAM 05->
// 1
// 2 2
// 3 3 3
//int size;
//cout<<"Enter Size: "<<endl;
//cin>>size;
//int i=0;
//while(i<size){
//	int j = 0;
//	while(j <= i){
//		cout<<" "<<i+1;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}



//	PROGRAM 06-> 
// 1
// 2 3
// 4 5 6
//int count=1;
//int i = 0;
//
//while(i<10){
//	
//	
//	int j = 0;
//	while(j<=i){
//		cout<<" "<<count;
//		count++;
//		j++;
//	}
//	i++;
//	cout<<endl;
//} 



//	PROGRAM 07-> 
// A A A
// B B B
// C C C

//int size;
//cout<<"Enter Number Of Lenght: "<<endl;
//cin>>size;
//
//int i=size;
//char ch = 'A';
//while(i>0){
//	int j = 0;
//	while(j<size){
//		cout<<" "<<ch;
//		j++;
//	}
//	cout<<endl;
//	ch++;
//	i--;
//}

//	PROGRAM 08-> 
// A B C D
// A B C D
// A B C D


//int n;
//cout<<"Enter Number Of Lenght: "<<endl;
//cin>>n;
//
//int size = n;
//while(size>0){
//	int j = 0;
//    char ch= 'A';
//	while(j<n){
//		cout<<" "<<ch;
//		ch++;
//		j++;
//	}
//	cout<<endl;
//	size--;
//}


//	PROGRAM 09-> 
// A B C D
// B C D E
// C D E F
//int n;
//cout<<"Enter Number Of Lenght: "<<endl;
//cin>>n;
//
//int size = n;
//char ch = 'A';
//while(size>0){
//	int j = 0;
//    char print = ch;
//	while(j<n){
//		cout<<" "<<print;
//		print++;
//		j++;
//	}
//	cout<<endl;
//	ch++;
//	size--;
//}

//	PROGRAM 10-> 
// A
// B B
// C C C
//int n; // 3
//cout<<"Enter Number Of Lenght: "<<endl;
//cin>>n; // 3
//
////int size = n; // 3
//char ch = 'A';
//int i = n;
//int start = 0;
//while(start < n){
//	
//	int j = 0;
//	while(j<=start){
//		cout<<" "<<ch;
//		j++;
//	}
//	ch++;
//	cout<<endl;
//	
//	start++; // 2 1 0 
//}

//	PROGRAM 11-> 
//        *
//      * *
//    * * *
//  * * * *

//int row = 1;
//while(row <= n){
//	int space = n-row;
//	while(space){
//		cout<<"  ";
//		space--;
//	}
//	int col=1;
//	while(col <= row){
//		cout<<" *";
//		col++;
//	}
//	cout<<endl;
//	row++;
//
//}


//	PROGRAM 11->    
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
//int n;
//cin>>n;
//int row = 1;
//
//while(row <= n ){
//	
//	// PRINT KARO SPACE!
//	int space = n-row;
//	while(space){
//		cout<<"_";
//		space--;
//	}
//	
//	
//	
//	// PRINT 1st TRAIANGLE!
//	int j = 1;
//	while(j<=row){
//		cout<<j;
//		j++;
//	}
//	
//	
//	// PRINT 2nd TRIANGLE!
//	int start = row-1;
//	while(start){
//		cout<<start;
//		start--;
//	}
//	
//	
//	
//	cout<<endl;
//	row++;
//	
//}


return 0;
}

