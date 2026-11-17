#include <iostream>
#include<unordered_map>
#include <string>

void mainmenu(int &choice);
void adminmenu(int &choice1, bool &votingcommence, bool &votingend);
void candidateslist();
void castvote(bool &votingcommence, bool &votingend);
// Anonymized student dataset for demonstration & testing
std::unordered_map<std::string, std::string> registeredStudents = {

    {"1000000001", "KWAME MENSAH"},
    {"1000000002", "AMA BOATENG"},
    {"1000000003", "KOFI OWUSU"},
    {"1000000004", "ABENA ASANTE"},
    {"1000000005", "YAW ADJEI"},
    {"1000000006", "EFUA SARPONG"},
    {"1000000007", "KWESI APPIAH"},
    {"1000000008", "AKOSUA FRIMPONG"},
    {"1000000009", "NANA YEBOAH"},
    {"1000000010", "ADJOA DARKO"},
    {"1000000011", "KOJO OSEI"},
    {"1000000012", "ESI AMOAH"},
    {"1000000013", "KWABENA TETTEH"},
    {"1000000014", "AFIA QUAYE"},
    {"1000000015", "FIIFI ANSAH"},
    {"1000000016", "MAAME DUAH"},
    {"1000000017", "ELIKEM AGYEMANG"},
    {"1000000018", "SELORM KLU"},
    {"1000000019", "DELALI DZAKPASU"},
    {"1000000020", "EDEM NORGBE"},
    {"1000000021", "SENA AMEDEKER"},
    {"1000000022", "MAWULI DOGBE"},
    {"1000000023", "EYRAM NYADANU"},
    {"1000000024", "KAFUI TETTEY"},
    {"1000000025", "ABDULAI SULEMANA"},
    {"1000000026", "FATI IBRAHIM"},
    {"1000000027", "IDDRISU MOHAMMED"},
    {"1000000028", "ZAINAB ALHASSAN"},
    {"1000000029", "RASHID ISSAH"},
    {"1000000030", "AMINA YAKUBU"},
    {"1000000031", "NII OKAI"},
    {"1000000032", "NAA LAMILEY"},
    {"1000000033", "NII LARYEA"},
    {"1000000034", "NAA AYORKOR"},
    {"1000000035", "PAA KWASI BAIDOO"},
    {"1000000036", "EKUA EFFAH"},
    {"1000000037", "ATO HAGAN"},
    {"1000000038", "ARABA BLANKSON"},
    {"1000000039", "KOBINA ESSIEN"},
    {"1000000040", "ABA ACQUAH"}
};


std::unordered_map<std::string, bool> hasVoted; 

int candidateTallies[12] = {0}; 

int main(){
    int choice;
    int choice1;
    bool votingcommence=false;
    bool votingend=false;
 do
 {
    mainmenu(choice);
   switch ( choice)
   {
   case 1:
      castvote(votingcommence,votingend);
    break;
    case 2:
    candidateslist();
    break;
    case 3:
    adminmenu( choice1,votingcommence,votingend);
     break;
      case 4:
         std::cout<<"Exiting program...\n";
         std::cout<<"Goodbye.\n";   
         return 0;
   default: 
         std::cout<<"selection unavailable please select 1 or 2 or 3 or exit\n";
    break;
   }
    } while (choice >0|| choice<5);
    return 0 ;
}

void candidateslist(){
std::cout<<"President & Vice-President, Ama Boateng & Kwesi Owusu\n";
std::cout<<"President & Vice-President, Yaw Mensah & Efua Sarpong\n";
std::cout<<"General Secretary, Abena Asant\n";
std::cout<<"General Secretary, Kofi Adjei\n";
std::cout<<"Organizer, Nana Yeboah\n";
std::cout<<"Organizer, Adjoa Frimpong\n";
std::cout<<"Treasurer, Kwame Darko\n";
std::cout<<"Treasurer, Akosua Amoah\n";
std::cout<<"Treasurer, Kwame Darko\n";
std::cout<<"Women's Commissioner, Gifty Osei\n";
std::cout<<"Women's Commissioner, Efua Aidoo\n";
std::cout<<"Public Relations Officer, Emmanuel Tetteh\n";
std::cout<<"Public Relations Officer, Linda Quaye\n";
                       

}
void mainmenu(int &choice){
while(true)
{
    std::cout<<"===================================\n";
    std::cout<<" Welcome to the voting console\n";
    std::cout<<"===================================\n";
    std::cout<<"1. Cast vote\n";
    std::cout<<"2. View candidates\n";
    std::cout<<"3. Admin menu\n";
    std::cout<<"4. Exit\n";
    std::cout<<"Enter your choice: ";
    std::cin>> choice;
     if (std::cin.fail())
    {
      std:: cout<<"Enter a valid number\n";
        std::cin.clear();
        std::cin.ignore(1000,'\n');
    }
    else
    {
        std::cin.ignore(1000,'\n');
        break;
    }
  }
}
void adminmenu(int &choice1, bool &votingcommence, bool &votingend){
     std::string const password="group16";
     std::string enterpass;
    std::cout<< "enter password: ";
    std::cin>> enterpass;
    if( enterpass!= password){
       std::cout<<" wrong password please try again\n";
      return;
    }
     std::cout<<"===================================\n";
    std::cout<<" Welcome to the admin console\n";
    std::cout<<"===================================\n";
    std::cout<<"1. view live results\n";
    std::cout<<"2. start elections\n";
    std::cout<<"3. close elections\n";
    std::cout<<"Enter your choice: ";

    std::cin>> choice1;
    if(std::cin.fail())
    {
      std:: cout<<"Enter a valid number\n";
        std::cin.clear();
        std::cin.ignore(1000,'\n');
        return;
    }
    std::string commencechoice;
    std::string endchoice;
    switch(choice1)
    {
     case 1://view live results
     std::cout<<"=======================================\n";
     std::cout<<"    PRESIDENT & VICE-PRESIDENT\n";
     std::cout<<"=======================================\n";
     std::cout<< "1.Ama Boateng & Kwesi Owusu: " << candidateTallies[0] << " votes\n"; 
     std::cout<< "2.Yaw Mensah & Efua Sarpong: " << candidateTallies[1]<< " votes\n";
     std::cout<<"=======================================\n";
     std::cout<<"         GENERAL SECRETARY\n";
     std::cout<<"=======================================\n";
     std::cout<< "1. Abena AsantE: " << candidateTallies[2] << " votes\n";
     std::cout<< "2.Kofi Adjei: " << candidateTallies[3]<< " votes\n";
     std::cout<<"=======================================\n";
     std::cout<<"            ORGANIZERS\n";
     std::cout<<"=======================================\n";
     std::cout<< "1.Nana Yeboah: " << candidateTallies[4]<< " votes\n";
     std::cout<< "2.Adjoa Frimpong: " << candidateTallies[5]<< " votes\n";
     std::cout<<"=======================================\n";
     std::cout<<"             TREASURERS\n";
     std::cout<<"=======================================\n";
     std::cout<< "1.Kwame Darko: " << candidateTallies[6] << " votes\n";
     std::cout<< "2.Akosua Amoah: " << candidateTallies[7] << " votes\n";
     std::cout<<"=======================================\n";
     std::cout<<"         WOMENS COMMISIONERS\n";
     std::cout<<"=======================================\n";
     std::cout<< "1.Gifty Osei: " << candidateTallies[8] << " votes\n";    
     std::cout<< "2. Efua Aidoo: " << candidateTallies[9] << " votes\n";
     std::cout<<"=======================================\n";
     std::cout<<"      PUBLIC RELATIONS OFFICERS\n";
     std::cout<<"=======================================\n";
     std::cout<< "1.Emmanuel Tetteh: " << candidateTallies[10]<< " votes\n";
     std::cout<< "2. Linda Quaye: " << candidateTallies[11] << " votes\n";

     break;

     case 2:
     std::cout<<"Are you sure you would like to commence voting(y/n)?\n";
     std::cin>>commencechoice;

     if (commencechoice=="y"|| commencechoice=="Y")
     {
        votingcommence=true;
        std::cout<<"Voting has commenced\n";
     }else if(commencechoice=="n"|| commencechoice=="N"){
        votingcommence= false;
        return;
     }
     else{
                std::cout<<"please choose correctly to continue(y/n)\n";
      return;
     }
     break; 
     case 3:
     std::cout<<"Are you sure you would like to end voting(y/n)?\n";
     std::cin>>endchoice;

     if (endchoice=="n"|| endchoice=="N")
     {
        votingend=true;
      std::cout<<"Voting has ended\n";
     }
     else if(endchoice=="y"|| endchoice=="Y"){
        votingend= false;
        return;
     }
     else{
        std::cout<<"please choose correctly to continue(y/n)";
        return;
     }
    }     
}
void castvote( bool &votingcommence, bool &votingend) {

    if( votingcommence==true){
    std::string indexnumber;
    std::cout << "Enter your index number: ";
    std::cin >> indexnumber;

 auto studentId = registeredStudents.find(indexnumber);
    if (studentId == registeredStudents.end()) {
        std::cout << "\n[ERROR] Invalid Index Number! You are not registered to vote.\n";
        return; 
    }
    // Check for duplicate voting
    if (hasVoted[indexnumber]) {
        std::cout << "Error: You have already voted!\n";
        return;
    }
    
    std::cout << "\n========================================\n";
    std::cout << " Welcome, " << studentId->second << "!\n";
    std::cout << "========================================\n";
    
    std::cout << "Please cast your vote for the following positions:\n";
    int choice;
    // 1. President
    std::cout << "\nPRESIDENT & VICE-PRESIDENT\n";
    std::cout<<"=======================================\n";
    std::cout << "1. Ama Boateng & Kwesi Owusu\n";
    std::cout << "2. Yaw Mensah & Efua Sarpong\n";

    while (true) {
    std::cout << "Enter choice (1 or 2): ";
    std::cin >> choice;
    if (choice == 1) {candidateTallies[0]++; break;}
     
    else if (choice == 2) {candidateTallies[1]++; break;}
    else if(std::cin.fail())
    {
        std::cout << "Invalid input. Please enter a number (1 or 2).\n";
        std::cin.clear(); 
        std::cin.ignore(1000, '\n'); 
    }
    else {
        std::cout << "Invalid choice for President & Vice-President. Vote not counted.\n";
        
    }
}

    //  2. General SECRETARY 
    std::cout<<"==================================\n";
    std::cout << "   \nGENERAL SECRETARY\n";
    std::cout<<"==================================\n";
    std::cout << "1. Abena Asante\n";
    std::cout << "2. Kofi Adjei\n";

    while (true) {
    std::cout << "Enter choice (1 or 2): ";
    std::cin >> choice;
    if (choice == 1)
     {candidateTallies[2]++; break;}
    else if (choice == 2) 
    {candidateTallies[3]++; break;}
    else if(std::cin.fail())
    {
        std::cout << "Invalid input. Please enter a number (1 or 2).\n";
        std::cin.clear(); 
        std::cin.ignore(1000, '\n'); 
    }
    else {
        std::cout << "Invalid choice for General Secretary. Vote not counted.\n";
        
    }
}

    // 3. Organizers 
    std::cout<<"==================================\n";
    std::cout << "      \nORGANIZERS\n";
    std::cout<<"==================================\n";
    std::cout << "1. Nana Yeboah\n";
    std::cout << "2. Adjoa Frimpong\n";
    while(true) {
    std::cout << "Enter choice (1 or 2): ";
    std::cin >> choice;
    if (choice == 1)
     {candidateTallies[4]++; break;}
    else if (choice == 2) 
    {candidateTallies[5]++; break;}
    else if(std::cin.fail())
    {
        std::cout << "Invalid input. Please enter a number (1 or 2).\n";
        std::cin.clear(); 
        std::cin.ignore(1000, '\n'); 
    }
    else {
        std::cout << "Invalid choice for Organizers. Vote not counted.\n";
        
    }
}

    // 4. Treasurers 
    std::cout<<"==================================\n";
    std::cout << "      \nTREASURERS\n";
    std::cout<<"==================================\n";
    std::cout << "1. Kwame Darko\n";
    std::cout << "2. Akosua Amoah\n";

    while(true) {
    std::cout << "Enter choice (1 or 2): ";
    std::cin >> choice;
    if (choice == 1) 
    {candidateTallies[6]++; break;}
    else if (choice == 2) {candidateTallies[7]++; break;}
    else if(std::cin.fail())
    {
        std::cout << "Invalid input. Please enter a number (1 or 2).\n";
        std::cin.clear(); 
        std::cin.ignore(1000, '\n'); 
    }
    else {
        std::cout << "Invalid choice for Treasurers. Vote not counted.\n";
        
    }
}

    // 5. Women's Commissioners
    std::cout<<"==================================\n";
    std::cout << " \nWomen's Commissioners\n";
    std::cout<<"==================================\n";
    std::cout << "1. Gifty Osei\n";
    std::cout << "2. Efua Aidoo\n";
    while(true) {
    std::cout << "Enter choice (1 or 2): ";
    std::cin >> choice;
    if (choice == 1) {candidateTallies[8]++; break;}
    else if (choice == 2) {candidateTallies[9]++; break;}
    else if(std::cin.fail())
    {
        std::cout << "Invalid input. Please enter a number (1 or 2).\n";
        std::cin.clear(); 
        std::cin.ignore(1000, '\n'); 
    }
    else {
        std::cout << "Invalid choice for Women's Commissioners. Vote not counted.\n";
        }
    }

    // 6. Public Relations Officers
    std::cout<<"==================================\n";
    std::cout << "\nPublic Relations Officers\n";
    std::cout<<"==================================\n";
    std::cout << "1. Emmanuel Tetteh\n";
    std::cout << "2. Linda Quaye\n";
    while(true) {
    std::cout << "Enter choice (1 or 2): ";
    std::cin >> choice;
    if (choice == 1) {candidateTallies[10]++; break;}
    else if (choice == 2) {candidateTallies[11]++; break;}
    else if(std::cin.fail())
    {
        std::cout << "Invalid input. Please enter a number (1 or 2).\n";
        std::cin.clear();
        std::cin.ignore(1000, '\n'); 
    }
    else {
        std::cout << "Invalid choice for Public Relations Officers. Vote not counted.\n";
        
    }
}
    hasVoted[indexnumber] = true;
    std::cout << "\nThank you, " << studentId->second << ". Your vote has been recorded successfully!\n";
} else if(votingend== true)
{
    std::cout<<"Voting has ended\n";
}
else{
    std::cout<<"Voting has yet to begin\n";
    }
}



