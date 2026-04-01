class Thai_person{
	private: 
		long nat_id;
	public: 
		Thai_person(int);
 };

 Thai_person::Thai_person(int t){
	nat_id = t;
	cout<<"Thai person constructor "<<nat_id<<endl;
 }

