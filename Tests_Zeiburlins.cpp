#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main (){
	int x, pareizs = 0;
	string atbilde;
	
	//1 jautajums
	cout<<"Ja katram masiva elementam ir tikai viens indekss, kas nodrosina pieeju tam, tad masivu sauc par?\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) Viendimensiju "<<endl; 
    cout<<"b) Divdimensiju "<<endl;
    cout<<"c) Trisdimensiju "<<endl;
    cout<<"d) Cetrdimensiju "<<endl;
	cin>>atbilde;
		if(atbilde == "a" || atbilde == "A" && atbilde.length()<2)
		{
	 	cout<<"Tava atbilde ir pareiza!(+1)"<<endl;
	 	pareizs++;
		}
    	else
    	cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    	
    //2 jautajums
    cout<<"Ka pareizi definet masivu?\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) <datu tips> <mainigais>[<elementu skaits>] "<<endl; 
    cout<< "b) <mainigais>[<elementu skaits>];"<<endl;
    cout<<"c) <datu tips> <mainigais>[<elementu skaits>]; "<<endl;
    cout<<"d) <datu tips>[<elementu skaits>];"<<endl;
	cin>>atbilde;
        if(atbilde == "c" || atbilde == "C" && atbilde.length()<2)
        {
        cout<<"Tava atbilde ir pareiza!(+1)" <<endl;
        pareizs++;
        }
        else           
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    
    //3 jautajums
    cout<<"Elementi masiva ir sakartoti?\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) ka velas lietotajs "<<endl; 
    cout<<"b) ar indeksu augosa seciba "<<endl;
    cout<<"c) ar indeksu dilstosa seciba "<<endl;
    cout<<"d) nejausa seciba "<<endl;
    cin>>atbilde;
    	if(atbilde == "b" || atbilde == "B" && atbilde.length()<2)
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else           
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
        
    //4 jautajums
    cout<<"Kas tiks izvadits ekrana ja: \nA[10];\n A[0]=10; \ncout<<A[0]<<" ";\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) 0 "<<endl; 
    cout<<"b) nekas " <<endl;
    cout<<"c) 1 "<<endl;
    cout<<"d) 10 "<<endl;
    	
}
