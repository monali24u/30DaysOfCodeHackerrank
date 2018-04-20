class Student :  public Person{
	private:
		vector<int> testScores;
	public:
  		// Write your constructor
    Student(string firstname, string lastname, int id, vector<int> Scores) :
    Person(firstname,lastname,id),
    testScores(Scores){}

  		// Write char calculate()
    char calculate()
        {
        int avg = 0;
        for(auto i: testScores) avg += i;
        avg /= testScores.size();
        if(avg < 40) return 'T';
        else if(avg < 55) return 'D';
        else if(avg < 70) return 'P';
        else if(avg < 80) return 'A';
        else if(avg < 90) return 'E';
        else return 'O';
    }
};
