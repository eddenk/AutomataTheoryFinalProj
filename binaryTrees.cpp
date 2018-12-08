#include <iostream>
using namespace std;


//this is the constructor the Node which has itself and the two children
struct Node
{
	//yesptr is the yes option to the question
	//noptr is the answer to the no
	//x is the question itself
	string x;
	Node *Yesptr;
	Node *Noptr;
};
struct Tree
{
	Node *root;

};


int main()
{
	Node* enjoy_coding = new Node;
	Node* interest_ai= new Node;
	Node* prefer_female = new Node;
	Node* tech_thoery = new Node;
	Node* soft_eng = new Node;
	Node* theory_infosec= new Node;
	Node* enjoy_hardware = new Node;
	Node* cloud_comp= new Node;
	Node* lang_thoery= new Node;
	Node* math_bio = new Node;
	Node* bigdata_pri= new Node;


	Node* Kamberova	= new Node;
	Node * Doboli = new Node;
	Node* BenAvi= new Node;
	Node* Krish = new Node;
	Node* Liang = new Node;
	Node* Fu = new Node;
	Node* Segal = new Node;
	Node* Krish2 = new Node;
	Node* Ostheimer= new Node;
	Node* Lane = new Node;
	Node* Shan = new Node;
	Node* Zavou = new Node;

	
	enjoy_coding->x = "Welcome to our game! Welcome to the CS department at Hofstra. If you are interested in a specific topics, you can find a professor to guide you in that interst. First question: Do you enjoy coding? Enter yes for very much and no for kinda of";
	enjoy_coding->Yesptr = interest_ai;
	interest_ai->x= "Are you interested in AI?";
	interest_ai-> Yesptr = prefer_female;
	prefer_female-> x = "Do you have any strong preference for a female professor? Enter yes if yes and no if you really don't care";
	prefer_female->Yesptr = tech_thoery;
	tech_thoery->x = "Do you prefer technical work over theoretical work?";
	tech_thoery-> Yesptr = Kamberova;
	Kamberova-> x = "You should consider speaking to Dr. Gerda Kamberova. She earned her Phd at U Penn, and focuses on discrete mathematics, algorithms, computer graphics, and AI!";
	tech_thoery-> Noptr = Doboli;
	Doboli->x = "You should consider speaking to Dr. Simona Doboli. She earned her PhD at U Cincinnati and focuses on AI, deep learning, text mining and nueral cogntive modeling!";
	prefer_female->Noptr= BenAvi;
	BenAvi->x = "You should consider speaking to Dr. Ben-Avi. He earned his PhD at U Manchester. He focuses on Biomedical Engineering, computer architecture, AI, and natural language processing";
	interest_ai-> Noptr = soft_eng;
	soft_eng->x= "Are you mainly interested in Software Engineering?";
	soft_eng->Noptr= Krish;
	Krish->x= "You should consider speaking to Dr. Krish, he is the dean of the CS department. He earned his PhD from Vanderbilt U. He focuses on data mining, machine learning, and computational learning thoery";
	soft_eng-> Yesptr= theory_infosec;
	theory_infosec->x = "Do you prefer learning about theory over information security?";
	theory_infosec-> Yesptr= Liang;
	Liang ->x = " You should consider speaking to Dr. Chuck Liang. He earned his PhD at UPenn. He focuses on programming languages, type theory and compiliers.";
	theory_infosec->Noptr= Fu;
	Fu ->x = "You should consider speaking to Dr. Fu. He earned his PhD from UC Santa Barbara. He focuses on software engineering, formal verification , and information security. He is also great for pratice technical interviews and resume review!";
	enjoy_coding-> Noptr= enjoy_hardware;
	enjoy_hardware->x = "Do you enjoy working with hardware?";
	enjoy_hardware-> Yesptr= Segal;
	Segal -> x = "You should consider speaking to Dr. Oren Segal. He earned his PhD from UMass. He focuses on hardware, embedded systems and big data.";
	enjoy_hardware->Noptr= cloud_comp;
	cloud_comp->x = "Do you enjoy cloud computing?";
	cloud_comp-> Noptr= lang_thoery;
	lang_thoery->x = "Are you interested in language theory?";
	lang_thoery-> Noptr =Krish2;
	Krish2 ->x = "Try speaking to Dr. Krish about your specific interest";
	lang_thoery-> Yesptr= math_bio;
	math_bio->x = "Do you enjoy math over biomedical engineering?";
	math_bio-> Yesptr = Ostheimer;
	Ostheimer->x= "You should consider speaking to Dr. Gretchen Ostheimer. She earned her PhD from Rutgers, and focuses on theoretical math and computer science, language theory. She is also a huge advocate of CS as a liberal arts education.";
	math_bio-> Noptr = Lane;
	Lane ->x = "You should consider speaking to Dr. Andrew Lane. He earned his PhD at StonyBrook. He is focused on Biomedical Eng, Language theory, computer forensics, and electrical engineering. (He is a great professor who truly wants his students to learn and makes learning entertaining!)"
	cloud_comp-> Yesptr= bigdata_pri;
	bigdata_pri->x = "Are you interested in big data or privacy and security?";
	bigdata_pri-> Yesptr= Shan;
	Shan ->x = "You should consider speaking to Dr. Shan. He earned his PhD at NJIT. He is focused on cloud computing, big data, parllel and distributed computing";
	bigdata_pri-> Noptr= Zavou;
	Zavou->x = "You should consider talking to Dr. Zavou. She earned her PhD from Columbia. She focuses on privacy, network and system security and cloud security!";








Tree* newtree = new Tree;
newtree ->root = enjoy_coding;

//this node will run thru the program
	Node* newnode = new Node;
	newnode=newtree->root;
//the program will run as long as the question has children
	//if no children then it is a answer( ex. you are thinking of dr O.)
		do {
			cout << newnode->x << endl;
			string ans;
			cin >>ans;
			if(ans == "yes" or ans =="Yes")
			{
				newnode= newnode->Yesptr;
			}
      else if(ans=="no" or ans=="No")
      {
        newnode= newnode-> Noptr;
      }
      
			else
				cout<<"enter a valid input"<<endl;

		}
		while (newnode->Noptr!=NULL && newnode->Yesptr != NULL);
		cout<< newnode->x<<endl;
    return 0;
}
