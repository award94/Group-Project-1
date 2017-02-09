using namespace std;

class node{
	public:
		char value;
		node * next;
		node(){
			value = 0;
			next = NULL;
		}
};

class cList{
	public:
		cList();
		cList(string line);
		~cList();
		
		void setHead(node * a);
		void insertEnd(node * a);
		void removeHere(int index);
		
		void print() const;
	
	private:
		node * head;
		int length;	
};

void cList::setHead(node * a){
	head = a;
}

void cList::insertEnd(node * a){
	node * temp;
	temp = head;

	while(temp->next != head)
		temp = temp->next;
		
	temp->next = a;	
	a->next = head;
}

void cList::print() const{
	node * temp;
	temp = head;
		
	if(head != NULL){
		while(temp->next != head && temp->next != NULL){
			cout<<temp->value;
			temp = temp->next;
		}
		cout<<temp->value;
	}
}

cList::cList(){
	head = NULL;
	length = 0;	
}

cList::cList(string line){
	node * myNodes[line.length()];
	length = 0;
	
	myNodes[0] = new node;
	myNodes[0]->value = line[0];
	head = myNodes[0];
	myNodes[0]->next = head;
	length++;
	
	for(int i = 1; i < line.length(); i++){
		myNodes[i] = new node;
		myNodes[i]->value = line[i];
		insertEnd(myNodes[i]);
		length++;
	}
	
	myNodes[line.length()-1]->next = head;
}

cList::~cList(){
}
