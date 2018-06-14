#include <iostream>
#include <stdlib.h>
# include <stdio.h>
#include <conio.h>
using namespace std;


	void soma();
	void subtracao();
	void multiplicacao();

// _____________________________________menu__________________________________________
	void menu(){
	
			int op;
 	
			do{
 				cout << "\n\t\t\t\t==============================\n";
				cout << "\t\t\t\t==\t1 - Soma  \t    ==\n";
				cout << "\t\t\t\t==\t2 - Subtração  \t    ==\n" ;
				cout << "\t\t\t\t==\t3 - Multiplicação   ==\n";
				cout << "\t\t\t\t==\t0 - Sair   \t    ==\n";
				cout << "\n\t\t\t\t==============================\n";
				cout << "\t\t\t\t\t5 - Digite a op :   ";
				cin>>op;
					switch(op){
						case 1:
							soma();
						break;
			
						case 2:
							subtracao();
						break;
		
						case 3:
							multiplicacao();
						break;
						case 0:
							cout << "Encerrou...   ";
							getch();
						break;	
					}
			system("cls");
			}while(op!=1 && op!=2 && op!=3 && op!=0);
			 
			
	}
//________________________________SOMA__________________________________________	
	void soma(){
		int numero1,numero2;
		cout << "\n\t\t\t\t\t    Digite o Numero :   ";
		cin>>numero1;
		cout << "\t\t\t\t\t    Digite o Numero :   ";
		cin>>numero2;
		
		string operador1 ="";
		string operador2 ="";
		
			for(int i = 0;i < numero1;i++){
				operador1= operador1+"*";
			}	
    		
			for(int i = 0;i < numero2;i++){
				operador2 =operador2 + "*";
			}
				string recebe = operador1+" "+operador2+" ";
			
			system("cls");
			
			cout<<"\n\t\t________________________SOMA_______________________";
	cout<<"\n";cout<<"\n";
	
	cout<<"Valores: "<<recebe;
	cout<<"\n";cout<<"\n";
	
	
	string estado = "q0";

	cout<<"Estado Atual  |  Leu | Posicao |  Escreveu  |  Direcao  |  Proximo Estado";
	cout<<"\n";
	
	for(int i = 0; i < recebe.length();i++){
		
		if(recebe[i] == '*' &&  estado == "q0"){
		
			cout<<"\tq0\t  "<<recebe[i]<<"\t "<<i<<"\t     * "<<" \t  D  \t\t q0";
			cout<<"\n";
			continue;
			
		}else if(recebe[i] == ' ' && estado == "q0"){
        	cout<<"\tq0\t  "<<recebe[i]<<"\t "<<i<<"\t     * "<<" \t  D  \t\t q1";
		    cout<<"\n";
			recebe[i] = '*';
			estado = "q1";
			continue;
		}
		
		else if (recebe[i] == '*' && estado == "q1"){
			cout<<"\tq1\t  "<<recebe[i]<<"\t "<<i<<"\t     * "<<" \t  D  \t\t q1";
				cout<<"\n";
			continue;
		}else if(recebe[i] == ' ' && estado == "q1"){
		
			cout<<"\tq1\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  E  \t\t q2";
			cout<<"\n";
			recebe[i-1] = ' ';
			estado ="q2";
			cout<<"\tq2\t  "<<recebe[i]<<"\t "<<i-1<<"\t       "<<" \t  FIM  \t\t q2";
			break;
		}
		
		
	}
	
            
	cout<<"\n";
	cout<<"\n";
	
	cout<<"Resultado:  "<<recebe;
	menu();

	}
	
	
	//______________________________________Subtracao___________________________________________________	
	void subtracao(){
		int numero1,numero2;
		cout << "\n\t\t\t\t\t    Digite o Numero :   ";
		cin>>numero1;
		cout << "\t\t\t\t\t    Digite o Numero :   ";
		cin>>numero2;
		
		string operador1 ="";
		string operador2 ="";
		
			for(int i = 0;i < numero1;i++){
				operador1= operador1+"*";
			}	
    		
			for(int i = 0;i < numero2;i++){
				operador2 =operador2 + "*";
			}
				string recebe = operador1+" "+operador2+" ";
			
			system("cls");
			
			
	cout<<"\n\t\t______________________Subtracao__________________________";
	cout<<"\n";cout<<"\n";
	
	cout<<"Valores: "<<recebe;
	cout<<"\n";cout<<"\n";
	
	
	string estado = "q0";

	cout<<"Estado Atual  |  Leu | Posicao |  Escreveu  |  Direcao  |  Proximo Estado";
	cout<<"\n";

	int i =0;

	do{
	
		if(recebe[i] == '*' &&  estado == "q0"){
			cout<<"\tq0\t  "<<recebe[i]<<"\t "<<i<<"\t     * "<<" \t  D  \t\t q0";
			cout<<"\n";
			i++;
		}else if(recebe[i] == ' ' && estado == "q0"){
		    cout<<"\tq0\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  D  \t\t q1";
	        cout<<"\n";
			estado = "q1";
			i++;
		}else if(recebe[i] == '*' && estado == "q1"){
			cout<<"\tq1\t  "<<recebe[i]<<"\t "<<i<<"\t      *"<<" \t  D  \t\t q1";
			cout<<"\n";
	        i++;
		}else if(recebe[i] == ' ' && estado == "q1"){
			cout<<"\tq1\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  E  \t\t q2";
			cout<<"\n";
			estado = "q2";
			i--;
		}else if(recebe[i] == '*' && estado == "q2"){
			cout<<"\tq2\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  E  \t\t q3";
			cout<<"\n";
			recebe[i] = ' ';
			estado = "q3";
			i--;
		}else if(recebe[i] ==' ' && estado == "q2"){
			cout<<"\tq2\t  "<<recebe[i]<<"\t "<<i-1<<"\t       "<<" \t  FIM  \t\t q2";
			cout<<"\n";
				break;
			
		}else if(recebe[i] == '*' && estado == "q3"){
			cout<<"\tq3\t  "<<recebe[i]<<"\t "<<i<<"\t      *"<<" \t  E  \t\t q3";
			cout<<"\n";
			i--;
		}else if(recebe[i] == ' ' && estado == "q3"){
			cout<<"\tq3\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  E  \t\t q3";
			cout<<"\n";
			i--;
		}else if(i < 0 ){
			cout<<"\tq3\t ->"<<"\t "<<i<<"\t     ->"<<" \t  D  \t\t q4";
			cout<<"\n";
			estado = "q4";
			i++;
		
		}else if(recebe[i]=='*' && estado == "q4"){
			cout<<"\tq4\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  D  \t\t q0";
			cout<<"\n";
			recebe[i] = ' ';
			estado = "q0";
			i++;
		}else if(recebe[i] == ' ' && estado == "q4"){
			cout<<"\tq4\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  D  \t\t q4";
			cout<<"\n";
			recebe[i] = ' ';
			estado = "q4";
			i++;
		}
		
	
	}while(i!=-2);

    cout<<"\n";
	cout<<"\n";
	
	cout<<"Resultado:  "<<recebe;
	cout<<"\n"; 
		menu();
		
	}
//______________________________________Multiplicacao_____________________________________
	void multiplicacao(){
		int numero1,numero2;
		cout << "\n\t\t\t\t\t    Digite o Numero :   ";
		cin>>numero1;
		cout << "\t\t\t\t\t    Digite o Numero :   ";
		cin>>numero2;
		
		string operador1 ="";
		string operador2 ="";
		
			for(int i = 0;i < numero1;i++){
				operador1= operador1+"*";
			}	
    		
			for(int i = 0;i < numero2;i++){
				operador2 =operador2 + "*";
			}
				string recebe = operador1+" "+operador2+" ";
			
			system("cls");
			
				cout<<"\n\t\t______________________Multiplicacao________________________";
	cout<<"\n";cout<<"\n";
	
	cout<<"Valores: "<<recebe;
	cout<<"\n";cout<<"\n";
	
	
	string estado = "q0";

		cout<<"Estado Atual  |  Leu | Posicao |  Escreveu  |  Direcao  |  Proximo Estado";
		cout<<"\n";
		int i = 0;
		do{

			if(recebe[i] == '*' && estado == "q0"){
				cout<<"\tq0\t  "<<recebe[i]<<"\t "<<i<<"\t     A "<<" \t  D  \t\t q1";
				cout<<"\n";
				estado ="q1";
				i++;
			} else if(recebe[i] == ' ' && estado == "q0"){
				cout<<"\tq0\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  D  \t\t q10";
				cout<<"\n";
				estado ="q10";
				i++;
			}else if(recebe[i] == '*' && estado == "q1"){
				cout<<"\tq1\t  "<<recebe[i]<<"\t "<<i<<"\t     * "<<" \t  D  \t\t q1";
				cout<<"\n";
				i++;
			}else if(recebe[i] == ' ' && estado == "q1"){
				cout<<"\tq1\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  D  \t\t q2";
				cout<<"\n";
				estado ="q2";
				i++;
			}else if(recebe[i] == '*' && estado == "q2"){
				cout<<"\tq2\t  "<<recebe[i]<<"\t "<<i<<"\t     * "<<" \t  D  \t\t q2";
				cout<<"\n";
				
				i++;
			}else if(recebe[i] == ' ' && estado == "q2"){
				cout<<"\tq2\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  E  \t\t q3";
				cout<<"\n";
				estado ="q3";
				i--;
			}else if(recebe[i] == 'B' && estado == "q2"){
				cout<<"\tq2\t  "<<recebe[i]<<"\t "<<i<<"\t     B "<<" \t  D  \t\t q2";
				cout<<"\n";
				
				i++;
			}else if(recebe[i] == '*' && estado == "q3"){
				cout<<"\tq3\t  "<<recebe[i]<<"\t "<<i<<"\t     B "<<" \t  D  \t\t q4";
				cout<<"\n";
				estado ="q4";
				i++;
			}else if(recebe[i] == ' ' && estado == "q4"){
				cout<<"\tq4\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  D  \t\t q5";
				cout<<"\n";
				estado ="q5";
				i++;
			}else if(recebe[i] == 'B' && estado == "q4"){
				cout<<"\tq4\t  "<<recebe[i]<<"\t "<<i<<"\t     B "<<" \t  D  \t\t q4";
				cout<<"\n";
				
				i++;
			}else if(recebe[i] == '*' && estado == "q5"){
				cout<<"\tq5\t  "<<recebe[i]<<"\t "<<i<<"\t     * "<<" \t  D  \t\t q5";
				cout<<"\n";
				
				i++;
			}else if(recebe[i] == ' ' && estado == "q5"){
				cout<<"\tq5\t  "<<recebe[i]<<"\t "<<i<<"\t     * "<<" \t  E  \t\t q6";
				cout<<"\n";
				estado ="q6";
				i--;
			}else if(recebe[i] == '*' && estado == "q6"){
				cout<<"\tq6\t  "<<recebe[i]<<"\t "<<i<<"\t     * "<<" \t  E  \t\t q6";
				cout<<"\n";
					i--;
			}else if(recebe[i] == ' ' && estado == "q6"){
				cout<<"\tq6\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  E  \t\t q7";
				cout<<"\n";
				estado ="q7";
				i--;
			}else if(recebe[i] == '*' && estado == "q7"){
				cout<<"\tq7\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  D  \t\t q4";
				cout<<"\n";
				estado ="q4";
				i++;
			}else if(recebe[i] == ' ' && estado == "q7"){
				cout<<"\tq7\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  D  \t\t q8";
				cout<<"\n";
				estado ="q8";
				i++;
			}else if(recebe[i] == 'B' && estado == "q7"){
				cout<<"\tq7\t  "<<recebe[i]<<"\t "<<i<<"\t     B "<<" \t  E  \t\t q9";
				cout<<"\n";
				estado ="q9";
				i--;
			}else if(recebe[i] == ' ' && estado == "q8"){
				cout<<"\tq8\t  "<<recebe[i]<<"\t "<<i<<"\t      "<<" \t  E  \t\t q9";
				cout<<"\n";
				estado ="q9";
				i--;
			}else if(recebe[i] == 'B' && estado == "q8"){
				cout<<"\tq8\t  "<<recebe[i]<<"\t "<<i<<"\t     * "<<" \t  D  \t\t q8";
				cout<<"\n";
			
				i++;
			}else if(recebe[i] == '*' && estado == "q9"){
				cout<<"\tq9\t  "<<recebe[i]<<"\t "<<i<<"\t     * "<<" \t  E  \t\t q9";
				cout<<"\n";
			  i--;
			} else if(recebe[i] == ' ' && estado == "q9"){
				cout<<"\tq9\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  D  \t\t q9";
				cout<<"\n";
				
				i++;
			}
			else if(recebe[i] == 'A' && estado == "q9"){
				cout<<"\tq9\t  "<<recebe[i]<<"\t "<<i<<"\t     A "<<" \t  D  \t\t q0";
				cout<<"\n";
				estado ="q0";
				i++;
			}else if(recebe[i] == '*' && estado == "q10"){
				cout<<"\tq10\t  "<<recebe[i]<<"\t "<<i<<"\t     * "<<" \t  D  \t\t q10";
				cout<<"\n";
				
				i++;
			}else if(recebe[i] == ' ' && estado == "q10"){
				cout<<"\tq10\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  E  \t\t q11";
				cout<<"\n";
				estado ="q11";
				i--;
			}else if(recebe[i] == '*' && estado == "q11"){
				cout<<"\tq11\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  D  \t\t q11";
				cout<<"\n";
				i--;
			}else if(recebe[i] == ' ' && estado == "q11"){
				cout<<"\tq11\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  E  \t\t q11";
				cout<<"\n";
				
				i--;
			}else if(recebe[i] == 'A' && estado == "q11"){
				cout<<"\tq11\t  "<<recebe[i]<<"\t "<<i<<"\t       "<<" \t  E  \t\t q11";
				cout<<"\n";
			       i--;
			}
			else if(i<0  && estado == "q11"){
				cout<<"\tq0\t  "<<recebe[i]<<"\t "<<i<<" \t  FIM \t\t q1";
				cout<<"\n";
				estado ="q1";
				i++;
			}
			
		}while(i!=-2);
			 cout<<"\n";
			 cout<<"\n";
		
			cout<<"Resultado:  "<<recebe;
			cout<<"\n"; 
			menu();
		
	}

