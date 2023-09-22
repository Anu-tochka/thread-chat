#include "User.h"
#include "Message.h"
#include "Logger.h"

int main()
{
    User obj("Nikita","user1","12345");
	User obj2("Anna","user2","qwerty");
	User obj3("Marta","user3","uuu123");
    Message mes1("Hello","Nikita","Marta");
    Message mes2("Hello","Marta","Nikita");
    Message mes3("Hello","Nikita","Anna");
	log = new Logger; 
	std::thread th1([]() { Logger::log_w(mes1); });
	std::thread th2([]() { Logger::log_w(mes2); });
	std::thread th3([]() { Logger::log_w(mes3); });

	std::thread th4([]() { Logger::log_r(); });
	
	th1.join();
	th2.join();
	th3.join();
	th4.join();

    return 0;
}