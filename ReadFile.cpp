#include "ReadFile.h"
#include <iostream>
#include <string>

ReadFile::ReadFile(const char* file_name)
{
   input_file.open(file_name);
   closed = false;
   _eof = false;
}

ReadFile::~ReadFile()
{
   close();
}

bool ReadFile::eof()
{
   return _eof;
}

void ReadFile::close()
{
   if (!closed)
   {
      input_file.close();
      closed = true;
   }
}

String ReadFile::readLine()
{

   string text;
   rf->_eof = !(getline(rf->input_file, text));

   String str = new String((const char*) text.c_str());
   return str;
}
