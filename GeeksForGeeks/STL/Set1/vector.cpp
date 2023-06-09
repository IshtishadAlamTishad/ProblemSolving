

/*You are required to complete below methods*/

/*inserts an element x at 
the back of the vector A */
void add_to_vector(vector<int> &A,int x)
{
	A.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A)
{
	sort(A.begin(),A.end(),[](int a,int b) {
	    return a<b;
	});
}

/*reverses the vector A*/
void reverse_vector(vector<int> &A)
{
	reverse(A.begin(),A.end());
}

/*returns the size of the vector  A */
int size_of_vector(vector<int> &A)
{
	return A.size();
}

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A)
{
	sort(A.begin(),A.end(),[](int a,int b) {
	    return a>b;
	});
}

/*prints space separated 
elements of vector A*/
void print_vector(vector<int> &A)
{
	for(int i=0;i<A.size();++i) {
	    cout << A[i] << " ";
	}
}
