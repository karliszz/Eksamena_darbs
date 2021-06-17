#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main (){
	int x, pareizs = 0; //define mainigos
	string atbilde;  //define mainigo atbildei
	string atbilde2;  //define mainigo atbildei
	string atbilde3;  //define mainigo atbildei
	string atbilde4;  //define mainigo atbildei
	string atbilde5;  //define mainigo atbildei
	string atbilde6;  //define mainigo atbildei
	string atbilde7;  //define mainigo atbildei
	string atbilde8;  //define mainigo atbildei
	string atbilde9;  //define mainigo atbildei
	string atbilde10;  //define mainigo atbildei
	
	//1 jautajums
	cout<<"Jautajums Nr.1 \nJa katram masiva elementam ir tikai viens indekss, kas nodrosina pieeju tam, tad masivu sauc par?\nAtbildi ar a, b, c vai d burtiem."<<endl;  //izvada jautajumu
    cout<<"a) Viendimensiju "<<endl; //izvada atbilzu variantu
    cout<<"b) Divdimensiju "<<endl; //izvada atbilzu variantu
    cout<<"c) Trisdimensiju "<<endl;//izvada atbilzu variantu
    cout<<"d) Cetrdimensiju "<<endl;//izvada atbilzu variantu
	cin>>atbilde; //registre ievadito atbildi
		if(atbilde == "a" || atbilde == "A" && atbilde.length()<2)//parbauda vai ir ievadits a, A un vai ir ievadits tikkai viens burts
		{
	 	cout<<"Tava atbilde ir pareiza!(+1)"<<endl; //izvada pazinojumu kad atbilde ir pareiza
	 	pareizs++; //ja atbilde ir pareiza mainigajam pareizs tiek pieskaitits +1 pukts
		}
    	else{ 
    	cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl; //izvada pazinojumu kad atbilde ir nepareiza
    }
    cout<<"========================================================================================\n"; //izvada atstarpi ar simboliem nakamaja rinda
    
    //2 jautajums
    cout<<"Jautajums Nr.2 \nKa pareizi definet masivu?\nAtbildi ar a, b, c vai d burtiem."<<endl;//izvada jautajumu
    cout<<"a) <datu tips> <mainigais>[<elementu skaits>] "<<endl; //izvada atbilzu variantu
    cout<< "b) <mainigais>[<elementu skaits>];"<<endl;//izvada atbilzu variantu
    cout<<"c) <datu tips> <mainigais>[<elementu skaits>]; "<<endl;//izvada atbilzu variantu
    cout<<"d) <datu tips>[<elementu skaits>];"<<endl;//izvada atbilzu variantu
	cin>>atbilde2;//registre ievadito atbildi
        if(atbilde2 == "c" || atbilde2 == "C" && atbilde2.length()<2)//parbauda vai ir ievadits c, C un vai ir ievadits tikkai viens burts
        {
        cout<<"Tava atbilde ir pareiza!(+1)" <<endl; //izvada pazinojumu kad atbilde ir pareiza
        pareizs++; //ja atbilde ir pareiza mainigajam pareizs tiek pieskaitits +1 pukts
        }
        else{       
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl; //izvada pazinojumu kad atbilde ir nepareiza
    }
    cout<<"========================================================================================\n"; //izvada atstarpi ar simboliem nakamaja rinda
    
    //3 jautajums
    cout<<"Jautajums Nr.3 \nElementi masiva ir sakartoti?\nAtbildi ar a, b, c vai d burtiem."<<endl;//izvada jautajumu
    cout<<"a) ka velas lietotajs "<<endl; //izvada atbilzu variantu
    cout<<"b) ar indeksu augosa seciba "<<endl;//izvada atbilzu variantu
    cout<<"c) ar indeksu dilstosa seciba "<<endl;//izvada atbilzu variantu
    cout<<"d) nejausa seciba "<<endl;//izvada atbilzu variantu
    cin>>atbilde3;//registre ievadito atbildi
    	if(atbilde3 == "b" || atbilde3 == "B" && atbilde3.length()<2)//parbauda vai ir ievadits b, B un vai ir ievadits tikkai viens burts
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl; //izvada pazinojumu kad atbilde ir pareiza
        pareizs++; //ja atbilde ir pareiza mainigajam pareizs tiek pieskaitits +1 pukts
        }
        else{           
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl; //izvada pazinojumu kad atbilde ir nepareiza
    }
    cout<<"========================================================================================\n";    //izvada atstarpi ar simboliem nakamaja rinda 
	
    //4 jautajums
    cout<<"Jautajums Nr.4 \nKas tiks izvadits ekrana ja: \nA[10];\n A[0]=10; \ncout<<A[0]<<" ";\nAtbildi ar a, b, c vai d burtiem."<<endl;//izvada jautajumu
    cout<<"a) 0 "<<endl; //izvada atbilzu variantu
    cout<<"b) nekas " <<endl;//izvada atbilzu variantu
    cout<<"c) 1 "<<endl;//izvada atbilzu variantu
    cout<<"d) 10 "<<endl;//izvada atbilzu variantu
    cin>>atbilde4;//registre ievadito atbildi
    	if(atbilde4 == "d" || atbilde4 == "D" && atbilde4.length()<2)//parbauda vai ir ievadits d, D un vai ir ievadits tikkai viens burts
        {
       	cout<<"Tava atbilde ir pareiza!(+1)"<<endl; //izvada pazinojumu kad atbilde ir pareiza
        pareizs++; //ja atbilde ir pareiza mainigajam pareizs tiek pieskaitits +1 pukts
        }
        else{       
        cout << "Diemzel tava atbilde ir nepareiza!(+0)"<<endl; //izvada pazinojumu kad atbilde ir nepareiza
    }
    cout<<"========================================================================================\n"; //izvada atstarpi ar simboliem nakamaja rinda
    
    //5 jautajums
    cout<<"Jautajums Nr.5 \nMasiva datu tipi var but?\nAtbildi ar a, b, c vai d burtiem."<<endl;//izvada jautajumu
    cout<<"a) tikai int "<<endl; //izvada atbilzu variantu
    cout<<"b) int, double "<<endl;//izvada atbilzu variantu
    cout<<"c) tikai char "<<endl;//izvada atbilzu variantu
    cout<<"d) int, double, char, string, bool "<<endl;//izvada atbilzu variantu
    cin>>atbilde5;//registre ievadito atbildi
    	if(atbilde5 == "d" || atbilde5 == "D" && atbilde5.length()<2)//parbauda vai ir ievadits d, D un vai ir ievadits tikkai viens burts
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl; //izvada pazinojumu kad atbilde ir pareiza
        pareizs++; //ja atbilde ir pareiza mainigajam pareizs tiek pieskaitits +1 pukts
        }
        else{          
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl; //izvada pazinojumu kad atbilde ir nepareiza
    }
    cout<<"========================================================================================\n"; //izvada atstarpi ar simboliem nakamaja rinda
    
    //6 jautajums
    cout<<"Jautajums Nr.6 \nKurs masivs tiek pareizi definets?\nAtbildi ar a, b, c vai d burtiem."<<endl;//izvada jautajumu
    cout<<"a) int diena[11]; "<<endl; //izvada atbilzu variantu
    cout<<"b) int 11[diena] "<<endl;//izvada atbilzu variantu
    cout<<"c) char A[int] "<<endl;//izvada atbilzu variantu
    cout<<"d) int diena[11] "<<endl;//izvada atbilzu variantu
    cin>>atbilde6;//registre ievadito atbildi
    	if(atbilde6 == "a" || atbilde6 == "A" && atbilde6.length()<2)//parbauda vai ir ievadits a, A un vai ir ievadits tikkai viens burts
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl; //izvada pazinojumu kad atbilde ir pareiza
        pareizs++; //ja atbilde ir pareiza mainigajam pareizs tiek pieskaitits +1 pukts
        }
        else{
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl; //izvada pazinojumu kad atbilde ir nepareiza	
		}           
    cout<<"========================================================================================\n"; //izvada atstarpi ar simboliem nakamaja rinda
	    
    //7 jautajums 
    cout<<"Jautajums Nr.7 \nKas tiks izdrukats ja: \nint vecums[5] = {11, 56, 69, 77, 28}; \nvecums[2]; \ncout<<vecums[2]<<" "; \n}\nAtbildi ar a, b, c vai d burtiem."<<endl;//izvada jautajumu
    cout<<"a) 69 "<<endl; //izvada atbilzu variantu
    cout<<"b) 77"<<endl;//izvada atbilzu variantu
    cout<<"c) 28"<<endl;//izvada atbilzu variantu
    cout<<"d) 11"<<endl;//izvada atbilzu variantu
    cin>>atbilde7;//registre ievadito atbildi
    	if(atbilde7 == "a" || atbilde7 == "A" && atbilde7.length()<2)//parbauda vai ir ievadits a, A un vai ir ievadits tikkai viens burts
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl; //izvada pazinojumu kad atbilde ir pareiza
        pareizs++; //ja atbilde ir pareiza mainigajam pareizs tiek pieskaitits +1 pukts
        }
        else{           
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl; //izvada pazinojumu kad atbilde ir nepareiza
    }
    cout<<"========================================================================================\n"; //izvada atstarpi ar simboliem nakamaja rinda
    
    //8 jautajums
    cout<<"Jautajums Nr.8 \nCik masivu var but viena koda?\nAtbildi ar a, b, c vai d burtiem."<<endl;//izvada jautajumu
    cout<<"a) 1 "<<endl; //izvada atbilzu variantu
    cout<<"b) 13 "<<endl;//izvada atbilzu variantu
    cout<<"c) tik, cik izveido lietotajs "<<endl;//izvada atbilzu variantu
    cout<<"d) 2 "<<endl;//izvada atbilzu variantu
    cin>>atbilde8;//registre ievadito atbildi
    	if(atbilde8 == "c" || atbilde8 == "C" && atbilde8.length()<2)//parbauda vai ir ievadits c, C un vai ir ievadits tikkai viens burts
        {
        cout << "Tava atbilde ir pareiza!(+1)"<<endl; //izvada pazinojumu kad atbilde ir pareiza
        pareizs++; //ja atbilde ir pareiza mainigajam pareizs tiek pieskaitits +1 pukts
        }
        else{        
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl; //izvada pazinojumu kad atbilde ir nepareiza
    }
     cout<<"========================================================================================\n"; //izvada atstarpi ar simboliem nakamaja rinda
	    
    //9 jautajums
    cout<<"Jautajums Nr.9 \nKas tiks izvadits ekrana ja: \nint A [10];\nfor(i=0; i<10; i++){\nA[i]=3+i;\ncout<<A[i]<<" ";\n}\nAtbildi ar a, b, c vai d burtiem."<<endl;//izvada jautajumu
    cout<<"a) 12 11 10 9 8 7 6 5 4 3 "<<endl; //izvada atbilzu variantu
    cout<<"b) 3 4 5 6 7 8 9 10 11 12 "<<endl;//izvada atbilzu variantu
    cout<<"c) 1 2 3 4 5 6 7 8 9 10 "<<endl;//izvada atbilzu variantu
    cout<<"d) kluda, jo i netiek definets "<<endl;//izvada atbilzu variantu
    cin>>atbilde9;//registre ievadito atbildi
    	if(atbilde9 == "d" || atbilde == "D" && atbilde9.length()<2)//parbauda vai ir ievadits d, D un vai ir ievadits tikkai viens burts
        {
      	cout<<"Tava atbilde ir pareiza!(+1)"<<endl; //izvada pazinojumu kad atbilde ir pareiza
        pareizs++; //ja atbilde ir pareiza mainigajam pareizs tiek pieskaitits +1 pukts
        }
        else{           
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl; //izvada pazinojumu kad atbilde ir nepareiza
    }
    cout<<"========================================================================================\n"; //izvada atstarpi ar simboliem nakamaja rinda
    
    //10 jautajums
    cout<<"Jautajums Nr.10 \nAr kadu skaitli sakas masiva indeks?\nAtbildi ar a, b, c vai d burtiem."<<endl;//izvada jautajumu
    cout<<"a) 0 "<<endl; //izvada atbilzu variantu
    cout<<"b) 1 "<<endl;//izvada atbilzu variantu
    cout<<"c) 2 "<<endl;//izvada atbilzu variantu
    cout<<"d) 3 "<<endl;//izvada atbilzu variantu
    cin>>atbilde10;//registre ievadito atbildi
    	if(atbilde10 == "a" || atbilde10 == "A" && atbilde10.length()<2)//parbauda vai ir ievadits a, A un vai ir ievadits tikkai viens burts
        {
        cout<<"Tava atbilde ir pareiza!(+1)"<<endl; //izvada pazinojumu kad atbilde ir pareiza
        pareizs++; //ja atbilde ir pareiza mainigajam pareizs tiek pieskaitits +1 pukts
        }
        else{ 
        cout<<"Diemzel tava atbilde ir nepareiza!(+0)"<<endl; //izvada pazinojumu kad atbilde ir nepareiza
    }
        cout<<"========================================================================================\n"; //izvada atstarpi ar simboliem nakamaja rinda
        //Rezultatu izvade   
		cout<<"No 10 iespejamiem punktiem jus esat ieguvis "<<pareizs<<" punktus!"<<endl; //izvada ieguto punktu skaitu cik no cik punktiem tika ieguti
        cout<<"Uz siem jautajumiem jus atbildejat nepareizi: "<<endl; //izvada pazinojumu uz kuriem jautajumiem jus atbildejat nepareizi
        cout<<endl; //izvada atstapri starp rindam
        
        if(atbilde == "a" || atbilde == "A" && atbilde.length()<2){ //parbauda vai ir ievadits pareizais simbols
		cout<<"";
	}else{
		cout<<"Jautajums Nr.1 \nJa katram masiva elementam ir tikai viens indekss, kas nodrosina pieeju tam, tad masivu sauc par?"<<endl<<endl; //ja ievadits nepareizais simbols tiek izvadits jautajums
	}
if(atbilde2 == "c" || atbilde2 == "C" && atbilde2.length()<2){//parbauda vai ir ievadits pareizais simbols
	cout<<"";
}else{
	cout<<"Jautajums Nr.2 \nKa pareizi definet masivu?"<<endl<<endl; //ja ievadits nepareizais simbols tiek izvadits jautajums
}
if(atbilde3 == "b" || atbilde3 == "B" && atbilde3.length()<2){//parbauda vai ir ievadits pareizais simbols
	cout<<"";
}else{
	cout<<"Jautajums Nr.3 \nElementi masiva ir sakartoti?"<<endl<<endl; //ja ievadits nepareizais simbols tiek izvadits jautajums
}
if(atbilde4 == "d" || atbilde4 == "D" && atbilde4.length()<2){//parbauda vai ir ievadits pareizais simbols
	cout<<"";
}else{
	cout<<"Jautajums Nr.4 \nKas tiks izvadits ekrana ja: \nA[10];\n A[0]=10; \ncout<<A[0]<<" ";"<<endl<<endl; //ja ievadits nepareizais simbols tiek izvadits jautajums
}
if(atbilde5 == "d" || atbilde5 == "D" && atbilde5.length()<2){//parbauda vai ir ievadits pareizais simbols
	cout<<"";
}else{
	cout<<"Jautajums Nr.5 \nMasiva datu tipi var but?"<<endl<<endl; //ja ievadits nepareizais simbols tiek izvadits jautajums
}
if(atbilde6 == "a" || atbilde6 == "A" && atbilde6.length()<2){//parbauda vai ir ievadits pareizais simbols
	cout<<"";
}else{
	cout<<"Jautajums Nr.6 \nKurs masivs tiek pareizi definets?"<<endl<<endl; //ja ievadits nepareizais simbols tiek izvadits jautajums
}
if(atbilde7 == "a" || atbilde7 == "A" && atbilde7.length()<2){//parbauda vai ir ievadits pareizais simbols
	cout<<"";
}else{
	cout<<"Jautajums Nr.7 \nKas tiks izdrukats ja: \nint vecums[5] = {11, 56, 69, 77, 28}; \nvecums[2]; \ncout<<vecums[2]<<" "; \n}"<<endl<<endl; //ja ievadits nepareizais simbols tiek izvadits jautajums
}
if(atbilde8 == "c" || atbilde8 == "C" && atbilde8.length()<2){//parbauda vai ir ievadits pareizais simbols
	cout<<"";
}else{
	cout<<"Jautajums Nr.8 \nCik masivu var but viena koda?"<<endl<<endl; //ja ievadits nepareizais simbols tiek izvadits jautajums
}
if(atbilde9 == "d" || atbilde9 == "D" && atbilde9.length()<2){//parbauda vai ir ievadits pareizais simbols
	cout<<"";
}else{
	cout<<"Jautajums Nr.9 \nKas tiks izvadits ekrana ja: \nint A [10];\nfor(i=0; i<10; i++){\nA[i]=3+i;\ncout<<A[i]<<" ";\n}"<<endl<<endl; //ja ievadits nepareizais simbols tiek izvadits jautajums
}
if(atbilde10 == "a" || atbilde10 == "A" && atbilde10.length()<2){//parbauda vai ir ievadits pareizais simbols
	cout<<"";
}else{
	cout<<"Jautajums Nr.10 \nAr kadu skaitli sakas masiva indeks?"<<endl<<endl; //ja ievadits nepareizais simbols tiek izvadits jautajums
}
system("pause"); //notiek kodu aizturesana lai varetu apskatit rezultatu
}
