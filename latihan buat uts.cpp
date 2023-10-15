#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void menu1()
{
	double angka, hasil,i;
	cout<<"Menu faktorial"<<endl;
	cout<<"Masukan nilai n: ";cin>>angka;

  	hasil = 1;
  	for(i=1;i<=angka;i++) 
	{
    	hasil = hasil * i;
  	}
  	cout << angka << "! = " << hasil<<endl;
}

void menu2()
{
	int nilai, a, b;
	double sum = 1;
	cout<<"Masukan nilai n: ";cin>>nilai;
		
	for(a=1;a<nilai;a++){
		int bil=0;
		for(b=1;b<=a;b++){
			if(a%b==0){
				bil++;
			}
		}
		if (bil==2)
		sum *= a;
		cout<<a<<" ";
	}
	cout<<endl;
	cout<<"Hasil perkalian: "<<sum<<endl;
}

void menu3()
{
	double x1, y1, x2, y2, jarak;
    double skala = 1.0; 
   	cout<<"Menu no 1"<<endl;

   	cout << "Masukkan koordinat x1: ";cin >> x1;
   	cout << "Masukkan koordinat y1: ";cin >> y1;

   	cout << "Masukkan koordinat x2: ";cin >> x2;
   	cout << "Masukkan koordinat y2: ";cin >> y2;
   
   	jarak = skala * sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    cout << "Jarak antara kedua kota adalah " << jarak << " satuan." << endl;
}

void menu4()
{
	int b1, b2, b3, b4, max;
	cout<<"Menu nomor 3"<<endl;
	cout<<"Masukan Bilangan 1: ";cin>>b1;
	cout<<"Masukan Bilangan 2: ";cin>>b2;
	cout<<"Masukan Bilangan 3: ";cin>>b3;
	cout<<"Masukan Bilangan 4: ";cin>>b4;
	
	if(b1>b2 && b1>b3 && b1>b4) max = b1;
	else if(b2>b1 && b2>b3 && b2>b4) max = b2;
	else if(b3>b1 && b3>b2 && b3>b4) max = b3;
	else max = b4;
	
	cout<<"Nilai max bilangan diatas adalah: "<<max<<endl;
}

void menu5()
{
	double A, B, C, D;
	cout<<"Masukan Nilai A: ";cin>>A;
	cout<<"Masukan Nilai B: ";cin>>B;
	cout<<"Masukan Nilai C: ";cin>>C;
	
	D = pow(B,2) - 4 * A * C;
	
	cout<<"Nilai Diskriminan: "<<D<<endl;
}

void menu6()
{
	double A, B, sisimiring;
	cout<<"Masukan panjang sisi A: ";cin>>A;
	cout<<"Masukan panjang sisi B: ";cin>>B;
	
	sisimiring = sqrt(pow(A,2)+pow(B,2));
	
	cout<<"Sisi Miring segitiga siku siku: "<<sisimiring<<endl;
}

void menu7()
{
	int suhu;
	cout<<"Menu pilihan 4"<<endl;
	cout<<"Masukan suhu: ";cin>>suhu;
	
	if (suhu<15){
		cout<<"Dingin"<<endl;
	}
	else if(suhu>=15 && suhu<25){
		cout<<"sejuk"<<endl;
	}
	else if(suhu>=25 && suhu<30){
		cout<<"Hangat"<<endl;
	}
	else if(suhu>=30 && suhu<35){
		cout<<"Panas"<<endl;
	}
	else if(suhu>=35 && suhu<40){
		cout<<"Sangat Panas"<<endl;
	}
	else if(suhu>40){
		cout<<"Tidak Terdefinisi"<<endl;
	}
	else{
		cout<<"Masukan yang benar"<<endl;
	}
}

//rumus pythagoras
float rumus1(int a, int b)
{
    float hasil;
    hasil = sqrt(pow(a, 2) + pow(b, 2));
    return hasil;
}

float rumus2(int a, int b, int c)
{
    float hasil;
    hasil = pow(b, 2) - (4 * a * c);
    return sqrt(hasil);
}

void menu8()
{
    int a, b, c;
    cout << "Masukan nilai a: ";
    cin >> a;
    cout << "Masukan nilai b: ";
    cin >> b;
    cout << "Masukan nilai c: ";
    cin >> c;

    if (rumus2(a, b, c) > 0)
    {
        cout << rumus2(a, b, c) << endl;
    }
    else
    {
        cout << "Tidak terdevinisi" << endl;
    }
    cout << endl;
    rumus1(a, b);
}

void menu9()
{
    int n = 6;
    int dataBelumTerurut[] = {1, 5, 3, 5, 2, 4};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (dataBelumTerurut[j] > dataBelumTerurut[j + 1])
            {
                int temp = dataBelumTerurut[j];
                dataBelumTerurut[j] = dataBelumTerurut[j + 1];
                dataBelumTerurut[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dataBelumTerurut[i] << endl;
    }
}

void menu10()
{
    int n;
    cout << "Masukan nilai n: ";
    cin >> n;
    int data[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Masukan nilai: ";
        cin >> data[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << endl;
    }
}

void menu11()
{
    int n;
    cout << "Masukan nilai n: ";
    cin >> n;
    int data[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Masukan nilai: ";
        cin >> data[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (data[j] < data[j + 1])
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << endl;
    }
}

void menu12()
{
    int n;
    cout << "Masukan nilai n: ";
    cin >> n;
    char data[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Masukan Huruf: ";
        cin >> data[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << endl;
    }
}

void menu13()
{
    int n;
    cout << "Masukan nilai n: ";
    cin >> n;
    char data[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Masukan Huruf: ";
        cin >> data[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (data[j] < data[j + 1])
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << endl;
    }
}

void menu14()
{
    int split, length;
    cout << " Masukkan panjang array: ";
    cin >> length;
    cout << " Masukkan split: ";
    cin >> split;
    int arr1[length];
    for (int i = 0; i < length; i++)
    {
        cout << " Data ke-" << i + 1 << " : ";
        cin >> arr1[i];
    }
    int arr2[length - split];
    for (int i = split; i < length; i++)
    {
        arr2[i - split] = arr1[i];
    }
    cout << " Array 1: ";
    for (int i = 0; i < split; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << " Array 2: ";
    for (int i = 0; i < length - split; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
}

void menu16()
{
	exit(0);
}

void Err()
{
	cout<<"Pilihan Anda Salah, Pilih Yang Benar!!!"<<endl;
}

int main(){
	int pil;
	string nama, nim;
	awal:
	cout<<"Masukan Nama: ";cin>>nama;
	cout<<"Masukan NIM: ";cin>>nim;
	system("cls");
	do{
		cout<<"Selamat datang "<<nama<<" dengan nim "<<nim<<endl;
		cout<<"Daftar Menu"<<endl;
		cout<<"1. Faktorial"<<endl;
		cout<<"2. Mengkalikan deret bilangan prima"<<endl;
		cout<<"3. Koordinat Kartesius"<<endl;
		cout<<"4. Menentukan nilai max 4 bilangan"<<endl;
		cout<<"5. Menentukan nilai diskriminan"<<endl;
		cout<<"6. Menghitung nilai sisi miring segitiga siku-siku"<<endl;
		cout<<"7. Menentukan suhu"<<endl;
		cout<<"8. Menghitung rumus pytagoras" << endl;
        cout<<"9. Data terurut" << endl;
        cout<<"10. Data Dinamis" << endl;
        cout<<"11. Sorting terbalik" << endl;
        cout<<"12. Data Dinamis huruf" << endl;
        cout<<"13. Data Dinamis huruf terbalik" << endl;
        cout<<"14. Split array" << endl;
		cout<<"15. Mulai Dari Awal? "<<endl;
		cout<<"16. Exit "<<endl;
		cout<<"Masukan pilihan: ";cin>>pil;
		system("cls");
		
		if(pil==1)
		{
			menu1();
		}
		else if(pil==2)
		{
			menu2();
		}
		else if(pil==3)
		{
			menu3();
		}
		else if(pil==4)
		{
			menu4();
		}
		else if(pil==5)
		{
			menu5();
		}
		else if(pil==6)
		{
			menu6();
		}
		else if(pil==7)
		{
			menu7();
		}
		else if(pil==8)
		{
			menu8();
		}
		else if(pil==9)
		{
			menu9();
		}
		else if(pil==10)
		{
			menu10();
		}
		else if(pil==11)
		{
			menu11();
		}
		else if(pil==12)
		{
			menu12();
		}
		else if(pil==13)
		{
			menu13();
		}
		else if(pil==14)
		{
			menu14();
		}
		else if(pil==15)
		{
			goto awal;
		}
		else if(pil==16)
		{
			menu16();
		}
		else 
		{
			Err();
		}
	}
	while(pil>=1);
}
