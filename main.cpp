#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void kullanici(int kullaniciSecimi){
    cout << endl;
    cout << "\t\t";
    cout << "\t\t Sizin seciminiz: ";
    switch (kullaniciSecimi) {
        case 1:
            cout<<"Tas"<<endl;
            break;
        case 2:
            cout<<"Kagit"<<endl;
            break;
        case 3:
            cout<<"Makas"<<endl;
            break;
        default:
            break;
    }
}

void bilgisayar(int bilgisayarSecimi){
    cout << endl;
    cout << "\t\t";
    cout << "\t\t Bilgisayarin secimi: ";
    switch (bilgisayarSecimi) {
        case 1:
            cout<<"Tas"<<endl;
            break;
        case 2:
            cout<<"Kagit"<<endl;
            break;
        case 3:
            cout<<"Makas"<<endl;
            break;
        default:
            break;
    }
}

int main(){
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << "\t Tas-Kagit-Makas Oyununa Hos Geldiniz" << endl;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << "\t\t 1 - Tas" << endl << "\t\t\t\t" << "\t\t 2 - Kagit" << endl << "\t\t\t\t" << "\t\t 3 - Makas" << endl << "\t\t\t\t" << endl;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;

    while(true){
        cout << endl;
        cout << "\t\t";
        cout << "\t\t Seciminizi yapiniz: ";
        cout << "\t\t\t\t";

        int kullaniciSecimi;
        cin>>kullaniciSecimi;
        if (kullaniciSecimi!=1 && kullaniciSecimi!=2 && kullaniciSecimi!=3){
            cout << endl;
            cout << "\t\t";
            cout << "\t\t Gecerli bir secim yapin!";
            cout << "\t\t\t\t";
            cout << endl;
            continue;
        }
        kullanici(kullaniciSecimi);

        srand(time(0));
        int bilgisayarSecimi=rand()%3+1;
        bilgisayar(bilgisayarSecimi);

        if (kullaniciSecimi==bilgisayarSecimi){
            cout << endl;
            cout << "\t\t\t\t";
            for(int i = 0; i < 50; i++){
                cout << "-";
            }
            cout << endl;
            cout << "\t\t";
            cout << "\t\t Berabere!";
            cout << endl;
            cout << "\t\t\t\t";
            for(int i = 0; i < 50; i++){
                cout << "-";
            }
            cout << endl;
        } else if ((kullaniciSecimi==1 && bilgisayarSecimi==3)||(kullaniciSecimi==2 && bilgisayarSecimi==1)||(kullaniciSecimi==3 && bilgisayarSecimi==2)){
            cout << endl;
            cout << "\t\t\t\t";
            for(int i = 0; i < 50; i++){
                cout << "-";
            }
            cout << endl;
            cout << "\t\t";
            cout << "\t\t KAZANDINIZ!";
            cout << endl;
            cout << "\t\t\t\t";
            for(int i = 0; i < 50; i++){
                cout << "-";
            }
            cout << endl;
        } else{
            cout << endl;
            cout << "\t\t\t\t";
            for(int i = 0; i < 50; i++){
                cout << "-";
            }
            cout << endl;
            cout << "\t\t";
            cout << "\t\t Kaybettiniz!";
            cout << endl;
            cout << "\t\t\t\t";
            for(int i = 0; i < 50; i++){
                cout << "-";
            }
            cout << endl;
        }

        cout << endl;
        cout << "\t\t";
        cout << "\t\t Tekrardan oynamak ister misiniz?\n"<<endl<<"\t\t\t\t"<<" 1= Evet\t 2= Hayir\t"<<endl;
        int tekrarOyna;
        cin>>tekrarOyna;
        if (tekrarOyna!=1){
            cout << endl;
            cout << "\t\t\t\t";
            cout << "\t\t Oyun bitti." << endl;
            cout << "\t\t\t\t";
            for(int i = 0; i < 50; i++){
                cout << "-";
            }
            cout << endl;
            break;
        }
    }
    return 0;
}
