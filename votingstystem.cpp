#include <iostream>
#include<unordered_map>
#include <string>

void mainmenu(int &choice);
void adminmenu(int &choice1, bool &votingcommence, bool &votingend);
void candidateslist();
void castvote(bool &votingcommence, bool &votingend);
// student dataset Bsc.CS groupA
std::unordered_map<std::string, std::string> registeredStudents = {
{"2526404734", "DAVID TETTEH NIMO"},
{"2526401356", "EMMANUEL AGYARE ASUMADU"},
{"2526400339", "KENNETH ASANTE"},
{"2526401206", "SOLOMON AMANSIAH ADU-TWUM"},
{"2526404087", "SOLOMON AGYEI"},
{"2526402447", "BILAL GHANI MOHAMMED"},
{"2526403223", "KENNEDY KWARTENG OKROFU"},
{"2526401212", "SHAIYA AMADU"},
{"2526401633", "OTHNIEL OBENG ASABENG"},
{"2526403248", "NICHOLAS OBENG-NSIAH"},
{"2526402434", "LAWRENCIA OSEI-NYAME"},
{"2526402571", "CHELSEA OWIREDU NYARKOAA"},
{"2526401607", "GILBERT TEGAH MAKAFUI"},
{"2526402303", "PATRICK AMPONSAH-KUSI"},
{"2526402991", "CHRISTABEL COFFIE FAFA"},
{"2526400495", "BISMARK KUDJO ELI"},
{"2526401985", "NELLY AMENU JASMINE"},
{"2526402626", "JR JOSEPH AWOTWE-HOLLAND"},
{"2526403799", "MIKEL AGYAPONG-ASANTE BRIGHT"},
{"2526404626", "BRIGHT BOATENG"},
{"2526405130", "KEZIAH ADAAPIIM ANAMLIE"},
{"2526400834", "JASON IMOSEMI DANIEL"},
{"2526402790", "ERASMUS AMAGLO EWOENAM KOBLA"},
{"2526401405", "YUSIF SADICK KOFI"},
{"2526400947", "EMMANUEL OFFEI AKO"},
{"2526400574", "ISRAEL OSAMAU"},
{"2526401715", "REGINALD PANFORD"},
{"2526403959", "SAMIRA ABDUL MUMIN"},
{"2526401707", "EMMANUEL TAKUH KWAKU YORM"},
{"2526404999", "MALIK HARUNA ABDUL"},
{"2526401805", "LOUIS YAWLI"},
{"2526401919", "CLOTTEY ISAAC"},
{"2526401724", "BLESSED DAAKU ASANTE"},
{"2526403323", "LARRY BANKAS WORLANYO"},
{"2526401747", "CAROLINE ACQUAH"},
{"2526401972", "WINFRED QUIST AMENUVEVE KWESI"},
{"2526402730", "MESHARCK AKUTEY TETTEH"},
{"2526402945", "MICHAEL ESSIEN KOFI"},
{"2526401123", "PRINCE OSEI BOATENG KWAME"},
{"2526402787", "JOSHUA NYADOR KWABENA"},
{"2526401845", "GEORGE DOMPREH OKOMENG"},
{"2526402399", "VANESSA KISSI ODUROWA"},
{"2526400627", "ABDUL HAKEEM AZURE"},
{"2526404334", "KWESI APPIAH OPOKU"},
{"2526400161", "SAVIOUR AHIATAKU"},
{"2526402179", "ANGELA YABAH DICKSON"},
{"2526402757", "DORCAS TOSEAFA SITSOFE"},
{"2526403439", "SUSSANA COFFIE ASIEDU"},
{"2526402615", "SELINA TASOBIL"},
{"2526405155", "FREDERICK ADOMEY EYRAM"},
{"2526401325", "PERRY DUAH BOAKYE"},
{"2526400921", "KWAME ANOKYE AMOFA"},
{"2526400854", "JESSE PORIBO NORTAAH"},
{"2526401471", "ABDULFATAWU KASSIM ZEBA"},
{"2526402986", "CHRISTIAN ABOAGYE FRIMPONG"},
{"2526402214", "LAWRENCE MENSAH AFRIYIE"},
{"2526404191", "IBRAHIM MOHAMMED"},
{"2526401198", "MARVIN AGORTIMEVOR"},
{"2526400911", "BRANHAM DOKU APERDI"},
{"2526402304", "KWABENA ACHEAMPONG AGYABENG"},
{"2526400292", "JOEL KOMLA DELADEM"},
{"2526404449", "HALAL ABUBAKAR ALI"},
{"2526402014", "TIMOTHY HOLM NII ODARTEY"},
{"2526404037", "SAMUEL GYIMAH GYAMFI"},
{"2526401105", "OWUSU ANSAH RICHMOND"},
{"2526404545", "BRYAN ASHIE REGINALD"},
{"2526400426", "EMMANUELLA NYADANU EYRAM"},
{"2526402702", "PRINCE KOTOKA"},
{"2526404210", "DERRICK BAFFOUR KYEI"},
{"2526404711", "GIDEON YEBOAH ADJEI  KWAKYE"},
{"2526401416", "ERNEST TSADZO"},
{"2526401407", "HUGH ADDO MOIETERH"},
{"2526403236", "JAMES BROWN TIME LORLORNYO"},
{"2526404273", "JOSEPH KUCHAMPIO"},
{"2526401909", "RICHMOND AYEH OPOKU"},
{"2526402877", "RAYMOND DARKOH AMPEM"},
{"2526405113", "VINCENT HAGAN"},
{"2526404546", "RANDY ADAOSEI"},
{"2526400919", "ISAAC AZUMAH"},
{"2526401049", "FAVOUR JOSEPH ELIKEM"},
{"2526405008", "ST OWEN OKYERE BOAMAH"},
{"2526403782", "SIMON AMEKUDZI KWASI"},
{"2526404567", "SYLVIA TREBI NAA ASHELEY"},
{"2526401624", "RICHMOND AGBEMAFLE"},
{"2526401413", "NANA KWASI OPPONG ADDAE"},
{"2526400810", "KINGSLEY NUMADO DZIDUDU"},
{"2526401821", "DELALI KEMEVOR AMI"},
{"2526405073", "CHIEF AMEGADZIE COLLINS"},
{"2526400327", "CLIFFOR NYANDE TEYE"},
{"2526402060", "KELVIN AHIAKU VALENTIN KORSHIE"},
{"2526400896", "GODSWILL AWUNU MAWULI"},
{"2526401653", "CARL ACQUAH"},
{"2526400883", "AARON QUARCOO NII AYI"},
{"2526403429", "SAMUEL APPIAH"},
{"2526401928", "NOBLE OTTI-NARH BUERNOR KOBBY"},
{"2526402211", "FREDERICK ANSONG BOATENG"},
{"2526401073", "LOUIS YEBOAH"},
{"2526401474", "DANIEL MBA AWINSOBIRA"},
{"2526403912", "JEREMY DOE TETTEH DARIAN"},
{"2526402389", "SANDRA LARBI"},
{"2526402215", "PRINCE MENSAH"},
{"2526404383", "ABDULLAH SULEMANA BAHDADEEEN"},
{"2526400935", "ST SUNDAY SEIDU JOSHUA IBRAHIM"},
{"2526401211", "JOHN ADIAMAH"},
{"2526403983", "PAA KWASI ABAN NHYIRA"},
{"2526404344", "MICHAEL AIDOO"},
{"2526403305", "KINGSLEY DADZIE AKUMANING"},
{"2526403833", "FRANCIS KETENI"},
{"2526404973", "YANKEY-ADU NANA YAW"},
{"2526402657", "WILLIAM ZUGAH YAW AMPONSAH"},
{"2526400807", "RICHMOND AYENSU KOFI"},
{"2526404223", "BENJAMIN OWUSU-ANTWI"},
{"2526404088", "THEODORA OFFEI MAWUENAM ADWOA"},
{"2526404885", "NOBEL QUARSHIE SEYRAM"},
{"2526404433", "JAMES ACHEAMPONG OWOAHENE"},
{"2526405271", "DERRICK AHETO-TSEGAH"},
{"2526405037", "PRISCILLA DAGBI MAWUSINAM"},
{"2526402169", "OSEI AFARI"},
{"2526404435", "HIRAM LAMPTEY NII ODARTEI"},
{"2526401255", "RAPHAEL BAIDOO ASANTE"},
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



