#include<iostream>
#include<locale>
using namespace std;
int main() {
    setlocale(LC_ALL, "Turkish");
    int satir;
    cout<<"Lütfen satir sayınızı giriniz : ";
    cin>>satir;
    for(int i=0;i<=satir;i++){
    	for(int l=1;l<=i;l++){
    		cout<<"*";
    		
		}
		cout<<"\n";
	}

    return 0;
}
