#include<iostream>
#include<iomanip> 
using namespace std;

int main()
{
	double l, ir, p, in, tt ,s;
	cout << "Enter initial loan: ";
	cin >> l;
	cout << "Enter interest rate per year (%): ";
	cin >> ir;
	cout << "Enter amount you can pay per year: ";
	cin >> p;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
    int i=0;
    while(l>0)
    {
        cout << fixed << setprecision(2); 
        i++;
        cout << setw(13) << left << i;
        cout << setw(13) << left << l;
        in=(l*ir)/100;
        l += in;
        cout << setw(13) << left << in;
        tt = l;
        cout << setw(13) << left << tt;
        if(p-tt>=0){
            s += p;
            p = tt;
        }
        cout << setw(13) << left << p;
        if(p-tt==0){
            p += s;
        }
        l -= p;
        if(l<=0){
            l=0;
        }
        cout << setw(13) << left << l;
	    cout << "\n";	
    }
	return 0;
}