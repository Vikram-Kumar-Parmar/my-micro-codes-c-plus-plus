#include<iostream>
#include<string>

using namespace std;
int main() {
	
	// SAARE VARIALES WALA DATA:
	
	int roll[5] = {2062, 2063, 2064, 2065, 2066};
	string names[5] = {"abdullah", "rashid", "ahmed", "fatima", "razia"};
	int marks[5] = {45, 91, 80, 87, 76};
	char grades[5];
	int roll_check = 0;
	int v=0;
	int lowest = marks[0];
	int highest = marks[0];
	int responce;
	
		
	// GRADES CHECK KR RHA HON YAHAN:
	
		for (int v=0; v<5; v++) {
			if (marks[v] >= 95) grades[v] = 'A';
			if (marks[v] >= 80 && marks[v] < 95) grades[v] = 'B';
			if (marks[v] >= 70 && marks[v] <= 80) grades[v] = 'C';
			if (marks[v] >= 60 && marks[v] <= 70) grades[v] = 'D';
			if (marks[v] >= 50 && marks[v] <= 60) grades[v] = 'E';
			if (marks[v] <= 50) grades[v] = 'T';
			}
			
	//OPENING
	
	cout << "W-T-F (GANDE ZEHN WALO MERA MTLB (WELCOME TO FAST) HAI)\n\tMENU\n" << endl;
			
	//MENU HAI AAGE KAM KON KLEYE:
		
		cout << "LIST MAN JO NUMBERS DYE HOWE HANI UNKE HISAB SE DEKHO JO CHAYE USKA NUMBER TYPE KRO !" << endl;
			cout << "1. APNA KAALE KARTUT CHECK KRNE HAIN\n2. CLASS KE THEETE KO DEKHNA HAI\n3. CLASS KE HALL JANINE HAIN" << endl;
				cin >> responce;
	
	//YE LOOP ARRAY MAN CHOTA WALA NUMBER NIKAE GA:
	
	for (int v=1; v<5; v++) {
		if (marks[v] < lowest) {
			lowest = marks[v];
			}
			
			else {
			 continue;
			 }
	}
	
	//YE LOOP BARRE WALA NUMBER NIKALE GA:
	
		for (int v=0; v<5; v++) {
				if (marks[v] > highest) {
					highest = marks[v];
				} 
			
			else {
				continue;
				}
		}

		//SWITCH LAGYA HAI KAM ALAG KRNE KELYE:
		
		switch(responce) {
		
		//STUDENT KA RECOD CHECK KR RHA HAI:
						
		case 1: {
				cout << "Apna roll number bata" << endl;
				cin >> roll_check;
				
		for (int v=0; v<5; v++) {
			if (roll_check == roll[v]) {
				cout << "Apka nam hai: " << names[v] << endl;
				cout << "apke marks hain: " << marks[v] << endl;
				cout << "apka grade hai: " << grades[v] << endl;
				if (grades[v] == 'T') cout << "\n TU TO GAYA BETE !!! " << endl;
				break;
			}
			
			else {
				cout << "YAR ROLL NUMBER TO SAHI LIKH" << endl;
				break;
			}			
		}
		}
		
		break;
				
		//EK SPECFIC STUDENT KA RECORD KIA JA RAHA HAI:
				
		case 2: {
		
		while(v<5) {
				
				if (highest == marks[v]) cout << "Class ka theeta hai: " << names[v] << "\n Uske marks hain: " << marks[v] << "\n Grades hain: " << grades[v] << "\n\n\t TERE BHI JALI NA !! :)))" << endl;
			v++;
		}	
		}	
		break;	
		
		//OVER ALL CLASS KA REPORT:
		
		case 3: {
				cout << "\t CLASS KE CHITHE " << endl;
				cout << "Class ke highest marks hain: " << highest << endl;
				cout << "Class ke lowst marks hain: " << lowest << endl;
				float over_avg = (lowest + highest) / 2;
				cout << "yaar class ki avergae hai: " << over_avg << endl;
				
		}
		
		break;

		//DEFAULT CASE AGAR NUMBER GALAT LAG GAYA:
		
		default :

				cout << "Abee  ! thek se number laga na 1-3 ke beech man" << endl;
		}
		
return 0;
	}
