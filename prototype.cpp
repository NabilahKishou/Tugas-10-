#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	int random,input;
	srand(time(0));
	random = rand()% 3;
	
	cout<<"Permainan Batu, Gunting, Kertas."<<endl<<endl;
	cout<<"Pilihan :"<<endl<<"1. Batu"<<endl<<"2. Gunting"<<endl<<"3. Kertas"<<endl<<endl;
	cout<<"Masukkan angka pilihanmu: ";
	cin >> input;
	if (input== 1){
		cout<<"pilihanmu adalah Batu"<<endl;
		if (random== 1){
			cout<<"pilihan komputer : Batu"<<endl;
			cout<<"Kamu seimbang";
		}
		if (random == 2){
			cout<<"pilihan komputer : Kertas"<<endl;
			cout<<"Kamu Kalah";
		}
		if (random == 3){
			cout<<"pilihan komputer : Gunting"<<endl;
			cout<<"Kamu Menang";
		}
	}
	if (input== 2){
		cout<<"pilihanmu adalah Gunting"<<endl;
		if(random == 1){
			cout<<"pilihan komputer : Batu"<<endl;
			cout<<"Kamu Kalah";
		}
		if(random == 2){
			cout<<"pilihan komputer : Gunting"<<endl;
			cout<<"Kamu Seimbang";
		}
		if(random == 3){
			cout<<"pilihan komputer : Kertas"<<endl;
			cout<<"Kamu Menang";
		}
	}
	if (input== 3){
		cout<<"Pilihanmu adalah Kertas"<<endl;
		if(random == 1){
			cout<<"pilihan komputer : Batu"<<endl;
			cout<<"Kamu Menang";
		}
		if (random == 2){
			cout<<"pilihan komputer : Gunting"<<endl;
			cout<<"Kamu Kalah";
		}
		if (random == 3){
			cout <<"pilihan komputer : Kertas"<<endl;
			cout<<"Kamu Seimbang";
		}
	}
}
