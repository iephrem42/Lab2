#include "WriteFile.h"
#include <sstream>

WriteFile* WriteFile::createWriteFile(const char* file_name)
{
   WriteFile* wf = new WriteFile;
   output_file.open(file_name);
   closed = false;
  // return wf;
}

void WriteFile::destroyWriteFile()
{
   close();
   delete wf;
}

void WriteFile::close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine()
{
   if (!closed && length() > 0)
   {
      output_file << getText() << endl;
   }
}
