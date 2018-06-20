#ifndef EXEPCTION_H
#define EXEPCTION_H
#include <exception>

using namespace std;

class ElementNotFound : public exception
{
public:
	const char* what();
};


const char* ElementNotFound::what()
{
	return "Chave não encontrada no vetor";
}



#endif