#include<iostream>
#include<string.h>
#include "Logger.h"
#include <stdio.h>

using namespace std;

Logger::Logger()
{
   file.open("log.txt");
}

Logger::~Logger()
{
	file.close();
}
 
public:
  static void log_w(mes){
    shared_mutex.lock_shared();
	std::cout << mes << std::endl; 
	shared_mutex.unlock_shared();	
  }
  
  static void log_r(){
    shared_mutex.lock();
	string s; 
	getline(file,s); 
	cout << s << endl;
	shared_mutex.unlock();	
  }
};