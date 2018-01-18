#include <iostream>
#include <string>
using namespace std;

class Speciesular
{
private:
	string namaular;
	string namailmiah;
    string habitatular;
    string warnasisikular;
    string jenisular;
    int panjangular;
    int panjangtaring;
    
public:
    Speciesular (string namaular, string namailmiah, string habitatular, string warnasisikular, string jenisular, 
	int panjangular, int panjangtaring)
    {
    	Speciesular::namaular 		= namaular;
    	Speciesular::namailmiah 			= namailmiah;
        Speciesular::habitatular 		= habitatular;
        Speciesular::warnasisikular 	= warnasisikular;
        Speciesular::jenisular 		= jenisular;
        Speciesular::panjangular 			= panjangular;
        Speciesular::panjangtaring 		= panjangtaring;
    }
    
void Output (void)
    {
    	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    	cout << "+++++++++++++++++++++++++++++++++SPECIES ULAR++++++++++++++++++++++++++++++++++"<< endl;
        cout << "Nama ular           	: " << namaular << endl;
        cout << "Nama Ilmiah           	: " << namailmiah << endl;
        cout << "Habitat ular       	: " << habitatular << endl;
        cout << "Warna sisik ular     	: " << warnasisikular << endl;
        cout << "Jenis ular      	: " << jenisular << endl;
        cout << "panjang ular      	: " << panjangular << " Meter" << endl;
        cout << "panjang taring  	: " << panjangtaring << " CM" <<endl;
        cout << endl;
    };
};

int main()
    { 
	Speciesular ularA("ular sumur","Oxyuranus microlepidotus", "benua australia", 
	"hitam biru","cobra", 2, 5);
	
Speciesular ularB("ular tanah","Pseudonaja textilis", "benua eropa", 
	"coklat","berderik", 1.7, 4);

    ularA.Output();
    ularB.Output();
    return 0;
}

