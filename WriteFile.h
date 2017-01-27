#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class WriteFile
{
   private:
	   ofstream output_file;
	   bool closed;
   public:
		WriteFile(const char* file_name);// constructor
		//WriteFile();
//~WriteFile(); //destructor
		void writeLine(String* line); //active
		void close(); //active
		//void destroyWriteFile(); //active
		//WriteFile* createWriteFile(const char* file_name);
};
/*
WriteFile* createWriteFile(const char* file_name);
void destroyWriteFile(WriteFile* wf);
void writeLine(WriteFile* wf, String* line);
void close(WriteFile* wf);
*/
#endif
