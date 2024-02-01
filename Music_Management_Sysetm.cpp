#include <iostream>
using namespace std;

class music {
public:
    music() {}
} m;

class Indian : public music {
public:
    void Arijit_Singh();
    void Shaan();
    void Atif_Aslam();
    void Asha_Bhosale();
    void Aziz_Mohammad();
} I;

void Indian::Arijit_Singh() {
    cout << "Tum hi ho" << endl;
    cout << "Raabta" << endl;
    // ... (other songs)
}

void Indian::Atif_Aslam() {
    cout << "Tera Hone Laga Hoon " << endl;
    cout << "Tu Jaane Na " << endl;
    // ... (other songs)
}

void Indian::Aziz_Mohammad() {
    cout << "Aate Aate Teri Yaad " << endl;
    cout << "Imli ka Boota" << endl;
    // ... (other songs)
}

void Indian::Asha_Bhosale() {
    cout << "Radha Kaise na jale" << endl;
    cout << "Kitabe bahut si" << endl;
    // ... (other songs)
}

void Indian::Shaan() {
    cout << "Chand Sifarish" << endl;
    cout << "Aal izz well" << endl;
    // ... (other songs)
}

class Global : public music {
public:
    void Selena();
    void Taylor_Swift();
    void Charlie_Puth();
    void Camila_Cabello();
    void Imagine_Dragons();
} G;

void Global::Selena() {
    cout << "Lose you to love me" << endl;
    cout << "Wolves" << endl;
    // ... (other songs)
}

void Global::Taylor_Swift() {
    cout << "Shake it off" << endl;
    cout << "Love story" << endl;
    // ... (other songs)
}

void Global::Charlie_Puth() {
    cout << "We dont talk anymore " << endl;
    cout << "Left and right" << endl;
    // ... (other songs)
}

void Global::Camila_Cabello() {
    cout << "Liar" << endl;
    cout << "Shameless" << endl;
    // ... (other songs)
}

void Global::Imagine_Dragons() {
    cout << "Thunder" << endl;
    cout << "Believer" << endl;
    // ... (other songs)
}

class KPop : public music {
public:
    void BTS();
    void Blackpink();
    void NCT();
    void EXO();
    void TWICE();
} K;

void KPop::BTS() {
    cout << "Permission to Dance" << endl;
    cout << "Butter" << endl;
    // ... (other songs)
}

void KPop::Blackpink() {
    cout << "Pink Venom" << endl;
    cout << "Shut down" << endl;
    // ... (other songs)
}

void KPop::NCT() {
    cout << "2 Baddies" << endl;
    cout << "Fire stuck" << endl;
    // ... (other songs)
}

void KPop::EXO() {
    cout << "Love shot" << endl;
    cout << "Growl" << endl;
    // ... (other songs)
}

void KPop::TWICE() {
    cout << "Talk that talk" << endl;
    cout << "The feels" << endl;
    // ... (other songs)
}

int main() {
    cout << "*\n";
    cout << "| MUSIC STORE MANAGEMENT SYSTEM |\n";
    cout << "*\n";
    int ch;
    char continueChoice;

    do {
        cout << "\n1. Indian";
        cout << "\n2. Global";
        cout << "\n3. KPop";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                char ch1;
                do {
                    cout << "\nA. Arijit Singh";
                    cout << "\nB. Asha Bhosale";
                    cout << "\nC. Atif Aslam";
                    cout << "\nD. Shaan";
                    cout << "\nE. Aziz Mohammad";

                    cout << "\nEnter your choice:";
                    cin >> ch1;

                    switch (ch1) {
                        case 'A': I.Arijit_Singh(); break;
                        case 'B': I.Asha_Bhosale(); break;
                        case 'C': I.Atif_Aslam(); break;
                        case 'D': I.Shaan(); break;
                        case 'E': I.Aziz_Mohammad(); break;
                        default: cout << "The Input is Invalid!";
                    }
                } while (ch1 == 1);
                break;

            case 2:
                char ch2;
                do {
                    cout << "\nA. Selena";
                    cout << "\nB. Taylor Swift";
                    cout << "\nC. Charlie Puth";
                    cout << "\nD. Camila Cabello";
                    cout << "\nE. Imagine Dragon";
                    cout << "\nEnter your choice:";
                    cin >> ch2;

                    switch (ch2) {
                        case 'A': G.Selena(); break;
                        case 'B': G.Taylor_Swift(); break;
                        case 'C': G.Charlie_Puth(); break;
                        case 'D': G.Camila_Cabello(); break;
                        case 'E': G.Imagine_Dragons(); break;
                        default: cout << "The Input is Invalid!";
                    }
                } while (ch2 == 1);
                break;

            case 3:
                char ch3;
                do {
                    cout << "\nA. BTS";
                    cout << "\nB. NCT";
                    cout << "\nC. TWICE";
                    cout << "\nD. EXO";
                    cout << "\nE. Blackpink";
                    cout << "\nEnter your choice:";
                    cin >> ch3;

                    switch (ch3) {
                        case 'A': K.BTS(); break;
                        case 'B': K.NCT(); break;
                        case 'C': K.TWICE(); break;
                        case 'D': K.EXO(); break;
                        case 'E': K.Blackpink(); break;
                        default: cout << "The Input is Invalid!";
                    }
                } while (ch3 == 1);
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> continueChoice;

    } while (continueChoice == 'y' || continueChoice == 'Y');

    cout << "Exiting the program. Goodbye!\n";

    return 0;
}
