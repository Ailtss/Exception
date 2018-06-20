#include <iostream>
#include <vector>
#include "exepction.h"
using namespace std;
#include <new>


int LinearSearch(vector<int> v, int n)
{
 
  try
  {
  	for(unsigned int i = 0; i < v.size(); i++)
	{
		if(v[i] == n)
		{
			return i;
		}

	}

	throw ElementNotFound();


  } catch(ElementNotFound &ex){

  	cerr << ex.what() << endl;
  }

  return -1;
	
}


int main()
{
	vector<int> vetor = {2, 3, 5, 11, 15};

	int s = LinearSearch(vetor, 9);

	cout << s << endl;

	return 0;
}