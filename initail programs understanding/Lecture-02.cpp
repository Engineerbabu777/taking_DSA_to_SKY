#include<iostream>
using namespace std;

int main(){

//int opt;
//
//cout<<"ENTER YOUR OPTIONS NEGATIVE OR POSITIVE: "<<endl;
//cin>>opt;
//
//if(opt < 0){
//	cout<<"ITS NEGATIVE NUMBER!";
//}else{
//	cout<<"ITS POSITIVE NUMBER!";
//}



//char choice;
//cin>> choice;
//
//if(choice >= '0' && choice <= '9'){
//	cout<<"Numeric!"<<endl;
//}else if(choice >= 'A' && choice <= 'Z'){
//	cout<<"Big!"<<endl;
//}else{
//	cout<<"Small!"<<endl;
//}

//int amount;
//cout<<"How much u have? "<<endl;
//cin>>amount;
//cout<<endl;
//while(amount != 0){
//	int iHave;
//	cout<<"Again Buying amount: !"<<endl;
//	cin>>iHave;
//	cout<<endl;
//	
//	if((amount - iHave) <= 0){
//		cout<<"Not I enough amount!"<<endl;
//	}
//	
//	amount -= iHave;
//	cout<<"Brought!!"<<endl;
//}


int i = 0;

while(i<4){
	int j = 0;
	
	while(j<4){
		cout<<j;
		j++;
	}
	cout<<endl;
	i++;
}

return 0;
}

