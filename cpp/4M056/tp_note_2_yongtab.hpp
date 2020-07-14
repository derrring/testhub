//Jiongyi WANG 3501689

class Yongdiag{
protected:
	int n;
	std::vector<int> shape;

public:
// Question 1
	Youngdiag(){
		this->n = 0;
	}

// Question 2	
	void affiche_shape(std::ostream& show_shape) const{
		 for(i=0; i<shape.size();i++){
			 for(j=0; j<shape[i];j++){
				show_shape << '*';
			}
			show_shape << std::endl;	 		 
		 }		
	}
	
// Question 3 [non-finie]	
	void ajout_case(std::mt19337 &G){
		std::uniform_int_distribution<int> U(1,n);
		u= U(G);
		
		std::vector<int> linges_possibles;
		for(i = 0; i< n; i++){ 
		linges_possibles.push_back(i+1)
		}
		
		
	}
	
	
	
};

//Question 5
class Youngtab:public Youngdiag {
protected:
		std::vector<std::vector<int>> t; //entries of Young table
		
public:
	//Question 6
	Youngtab(){} // default constructor
	
	int operator[](int i){return shape[i];} // shape accessor

	int operator()(int i, int j) const {return t[i][j];} // t accessor
	
	//Question 8[non-finie]
	void insere( int k, int i = 0) {
		if(i==t.size()){
			t.push_back(k);
			shape.push_back(1);
			n += 1;
			}
		
		int compteur = t[i].size();
		
		if(t[i][compteur-1] < k ){
			t[i].push_back(k);
			shape[i] += 1;
			n += 1;
			
			}
		else{
			
			/* ... */
			}
		
		}; // insert the integer k in row i
	
	//Question 7
	friend std::ostream& operator<< (std::ostream& o, const Youngtab& Y){
		for(i = 0; i< Y.t.size(); i++){
		o << Y.t[i] << "\t" <<std::endl;
		}
		};
};


//Question 9 
template <typename RNG, int taille> //RNG refers to a random generator
std::vector<int> rand_perm(RNG &G){
	//step 1
	std::vector<int> pi(taille);
	for(i=0; i< taille; i++){
		pi[i] = i+1;
		}

	//step 2&3 
	for(i=n-1; i>0; i--){
		std::uniform_int_distribution<int> U(0,i);
		j = U(G);
		int tmp = 0
		tmp = pi[i];
		pi[i] = pi[j];
		pi[j] = tmp;
		}
		
	return pi;
	
	
}

//Question 10 [non-finie]
template <class RNG, int taille, int echantillon>
double MonteCarlo(RNG& G){
	
	}

