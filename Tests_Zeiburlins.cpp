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
    cin>>atbilde;
    	if(atbilde == "d" || atbilde == "D" && atbilde.length()<2)
        {
       	cout<<"Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else           
        cout << "Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    
    //5 jautajums
    cout<<"Masiva datu tipi var but?\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) tikai int "<<endl; 
    cout<<"b) int, double "<<endl;
    cout<<"c) tikai char "<<endl;
    cout<<"d) int, double, char, string, bool "<<endl;
    cin>>atbilde;
    	if(atbilde == "d" || atbilde == "D" && atbilde.length()<2)
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else           
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    	
    //6 jautajums
    cout<<"Kurs masivs tiek pareizi definets?\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) int diena[11]; "<<endl; 
    cout<<"b) int 11[diena] "<<endl;
    cout<<"c) char A[int] "<<endl;
    cout<<"d) int diena[11] "<<endl;
    cin>>atbilde;
    	if(atbilde == "a" || atbilde == "A" && atbilde.length()<2)
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else           
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
        
    //7 jautajums 
    cout<<"Kas tiks izdrukats ja: \nint vecums[5] = {11, 56, 69, 77, 28}; \nvecums[2]; \ncout<<vecums[2]<<" "; \n}\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) 69 "<<endl; 
    cout<<"b) 77"<<endl;
    cout<<"c) 28"<<endl;
    cout<<"d) 11"<<endl;
    cin>>atbilde;
    	if(atbilde == "a" || atbilde == "A" && atbilde.length()<2)
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else           
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    
    //8 jautajums
    cout<<"Cik masivu var but viena koda?\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) 1 "<<endl; 
    cout<<"b) 13 "<<endl;
    cout<<"c) tik, cik izveido lietotajs "<<endl;
    cout<<"d) 2 "<<endl;
    cin>>atbilde;
    	if(atbilde == "c" || atbilde == "C" && atbilde.length()<2)
        {
        cout << "Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else           
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
        
}
