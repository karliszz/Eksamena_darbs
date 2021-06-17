#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main (){
	int x, pareizs = 0;
	string atbilde;
	string atbilde2;
	string atbilde3;
	string atbilde4;
	string atbilde5;
	string atbilde6;
	string atbilde7;
	string atbilde8;
	string atbilde9;
	string atbilde10;
	
	//1 jautajums
	cout<<"Jautajums Nr.1 \nJa katram masiva elementam ir tikai viens indekss, kas nodrosina pieeju tam, tad masivu sauc par?\nAtbildi ar a, b, c vai d burtiem."<<endl;
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
    	else{
    	cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    }
    cout<<"========================================================================================\n";
    
    //2 jautajums
    cout<<"Jautajums Nr.2 \nKa pareizi definet masivu?\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) <datu tips> <mainigais>[<elementu skaits>] "<<endl; 
    cout<< "b) <mainigais>[<elementu skaits>];"<<endl;
    cout<<"c) <datu tips> <mainigais>[<elementu skaits>]; "<<endl;
    cout<<"d) <datu tips>[<elementu skaits>];"<<endl;
	cin>>atbilde2;
        if(atbilde2 == "c" || atbilde2 == "C" && atbilde2.length()<2)
        {
        cout<<"Tava atbilde ir pareiza!(+1)" <<endl;
        pareizs++;
        }
        else{       
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    }
    cout<<"========================================================================================\n";
    
    //3 jautajums
    cout<<"Jautajums Nr.3 \nElementi masiva ir sakartoti?\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) ka velas lietotajs "<<endl; 
    cout<<"b) ar indeksu augosa seciba "<<endl;
    cout<<"c) ar indeksu dilstosa seciba "<<endl;
    cout<<"d) nejausa seciba "<<endl;
    cin>>atbilde3;
    	if(atbilde3 == "b" || atbilde3 == "B" && atbilde3.length()<2)
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else{           
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    }
    cout<<"========================================================================================\n";    
	
    //4 jautajums
    cout<<"Jautajums Nr.4 \nKas tiks izvadits ekrana ja: \nA[10];\n A[0]=10; \ncout<<A[0]<<" ";\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) 0 "<<endl; 
    cout<<"b) nekas " <<endl;
    cout<<"c) 1 "<<endl;
    cout<<"d) 10 "<<endl;
    cin>>atbilde4;
    	if(atbilde4 == "d" || atbilde4 == "D" && atbilde4.length()<2)
        {
       	cout<<"Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else{       
        cout << "Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    }
    cout<<"========================================================================================\n";
    
    //5 jautajums
    cout<<"Jautajums Nr.5 \nMasiva datu tipi var but?\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) tikai int "<<endl; 
    cout<<"b) int, double "<<endl;
    cout<<"c) tikai char "<<endl;
    cout<<"d) int, double, char, string, bool "<<endl;
    cin>>atbilde5;
    	if(atbilde5 == "d" || atbilde5 == "D" && atbilde5.length()<2)
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else{          
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    }
    cout<<"========================================================================================\n";
    
    //6 jautajums
    cout<<"Jautajums Nr.6 \nKurs masivs tiek pareizi definets?\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) int diena[11]; "<<endl; 
    cout<<"b) int 11[diena] "<<endl;
    cout<<"c) char A[int] "<<endl;
    cout<<"d) int diena[11] "<<endl;
    cin>>atbilde6;
    	if(atbilde6 == "a" || atbilde6 == "A" && atbilde6.length()<2)
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else{
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;	
		}           
    cout<<"========================================================================================\n";
	    
    //7 jautajums 
    cout<<"Jautajums Nr.7 \nKas tiks izdrukats ja: \nint vecums[5] = {11, 56, 69, 77, 28}; \nvecums[2]; \ncout<<vecums[2]<<" "; \n}\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) 69 "<<endl; 
    cout<<"b) 77"<<endl;
    cout<<"c) 28"<<endl;
    cout<<"d) 11"<<endl;
    cin>>atbilde7;
    	if(atbilde7 == "a" || atbilde7 == "A" && atbilde7.length()<2)
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else{           
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    }
    cout<<"========================================================================================\n";
    
    //8 jautajums
    cout<<"Jautajums Nr.8 \nCik masivu var but viena koda?\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) 1 "<<endl; 
    cout<<"b) 13 "<<endl;
    cout<<"c) tik, cik izveido lietotajs "<<endl;
    cout<<"d) 2 "<<endl;
    cin>>atbilde8;
    	if(atbilde8 == "c" || atbilde8 == "C" && atbilde8.length()<2)
        {
        cout << "Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else{        
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    }
     cout<<"========================================================================================\n";
	    
    //9 jautajums
    cout<<"Jautajums Nr.9 \nKas tiks izvadits ekrana ja: \nint A [10];\nfor(i=0; i<10; i++){\nA[i]=3+i;\ncout<<A[i]<<" ";\n}\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) 12 11 10 9 8 7 6 5 4 3 "<<endl; 
    cout<<"b) 3 4 5 6 7 8 9 10 11 12 "<<endl;
    cout<<"c) 1 2 3 4 5 6 7 8 9 10 "<<endl;
    cout<<"d) kluda, jo i netiek definets "<<endl;
    cin>>atbilde9;
    	if(atbilde9 == "d" || atbilde == "D" && atbilde9.length()<2)
        {
      	cout<<"Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else{           
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    }
    cout<<"========================================================================================\n";
    
    //10 jautajums
    cout<<"Jautajums Nr.10 \nAr kadu skaitli sakas masiva indeks?\nAtbildi ar a, b, c vai d burtiem."<<endl;
    cout<<"a) 0 "<<endl; 
    cout<<"b) 1 "<<endl;
    cout<<"c) 2 "<<endl;
    cout<<"d) 3 "<<endl;
    cin>>atbilde10;
    	if(atbilde10 == "a" || atbilde10 == "A" && atbilde10.length()<2)
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl;
        pareizs++;
        }
        else{ 
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl;
    }
        cout<<"========================================================================================\n";
        //Rezultatu izvade   
		cout<<"No 10 iespejamiem punktiem jus esat ieguvis "<<pareizs<<" punktus!"<<endl;
        cout<<"Uz siem jautajumiem jus atbildejat nepareizi: "<<endl;
        cout<<endl;
        
        if(atbilde == "a" || atbilde == "A" && atbilde.length()<2){
		cout<<"";
	}else{
		cout<<"Jautajums Nr.1 \nJa katram masiva elementam ir tikai viens indekss, kas nodrosina pieeju tam, tad masivu sauc par?"<<endl<<endl;
	}
if(atbilde2 == "c" || atbilde2 == "C" && atbilde2.length()<2){
	cout<<"";
}else{
	cout<<"Jautajums Nr.2 \nKa pareizi definet masivu?"<<endl<<endl;
}
if(atbilde3 == "b" || atbilde3 == "B" && atbilde3.length()<2){
	cout<<"";
}else{
	cout<<"Jautajums Nr.3 \nElementi masiva ir sakartoti?"<<endl<<endl;
}
if(atbilde4 == "d" || atbilde4 == "D" && atbilde4.length()<2){
	cout<<"";
}else{
	cout<<"Jautajums Nr.4 \nKas tiks izvadits ekrana ja: \nA[10];\n A[0]=10; \ncout<<A[0]<<" ";"<<endl<<endl;
}
if(atbilde5 == "d" || atbilde5 == "D" && atbilde5.length()<2){
	cout<<"";
}else{
	cout<<"Jautajums Nr.5 \nMasiva datu tipi var but?"<<endl<<endl;
}
if(atbilde6 == "a" || atbilde6 == "A" && atbilde6.length()<2){
	cout<<"";
}else{
	cout<<"Jautajums Nr.6 \nKurs masivs tiek pareizi definets?"<<endl <<endl;
}
if(atbilde7 == "a" || atbilde7 == "A" && atbilde7.length()<2){
	cout<<"";
}else{
	cout<<"Jautajums Nr.7 \nKas tiks izdrukats ja: \nint vecums[5] = {11, 56, 69, 77, 28}; \nvecums[2]; \ncout<<vecums[2]<<" "; \n}"<<endl << endl;
}

}
