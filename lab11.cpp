int main()
{

    Stack <int> s1;
    int c;
    int x;
    cout<<"Main copiat din laboratorul cu stive din primele laboratoare";
    cout<<"\n Am incercat fara meniu dar nu imi merge(poate din cauza codeblocks)";


    while(1)
    {
        cout << endl;
        cout<<" 1. \nPush\n"<<endl;
        cout<<" 2. \nPop\n"<<endl;
        cout<<" 3. \nAfisare Stiva\n"<<endl;
        cout<<" 4. \nPrimul element al stivei\n"<<endl;
        cout<<" 5. \nAre elemente stiva?\n"<<endl;
        cout<<" 9. \nIesire din stiva\n"<<endl;
        cout<<" \n Alegeti o optiune\n"<<endl;
        cin >> c;
        cout << endl;


        switch(c)
        {
        case 1:
            cout <<" \n1.Push\n"<<endl;
            cout << "\nAti ales sa introduceti un nou element in stiva\n";
            cout<<" \n Pentru a introduce mai multe elemente selectati de mai multe ori optiunea 1 de Push";
            cout << "Introduceti elementul : ";
            cin >> x;
            s1.push(x);
            break;
        case 2:
            cout << "\n2.Pop\n";
            cout << "\nAti ales sa eliminam un element din stiva\n";
            cout<<" Petru a elimina mai multe elemente din stiva selectatti de mai multe ori optiunea 2 de Pop";
            cout<<"Mai intai vom verifica daca se poate elimina un element din stiva";
            if(s1.isEmpty())
            {
                cout << "Nu se poate elimina niciun element din stiva.Introduceti alta optiune!\n";
                break;

            s1.pop();
            case 3:
            cout << "\n 3. Afisare stiva\n";
            cout<<"\n Ati ales sa se afiseze stiva";
            if(s1.isEmpty())
            {
                cout << "Stiva nu are niciun element in ea\n";
                break;
            }
            for(int i=s1.v.size()-1; i>=0; i--)
            {
                cout << s1.v[i] << endl;
            }
            break;
        case 4:
            cout << "\n4.Primul element alt stivei\n";
            cout<< "\nMai intai verificam daca exista vreun element al stivei";
            if(s1.isEmpty())
            {
                cout << "\nStiva nu are niciun element.Introduceti alta optiune";
                break;
            }
            cout << "Primul element este : ";
            cout << s1.top();
            break;
        case 5:
            cout << "\nExista elemente in stiva?\n";
            if(s1.isEmpty())
            {
                cout << "\nNu , nu exista.";
            }
            else
            {
                cout << "\n Da,exista elemente in stiva\n";
            }

            break;

        case 9:
            cout << "Ati ales sa inchideti programul. \n";
            return 0;
        default:
            cout << "\nReintroduceti optiunea de la 1-6 sau 9 pentru a iesi" << endl;
            getch();
        }
    }


}
return 0;
}
