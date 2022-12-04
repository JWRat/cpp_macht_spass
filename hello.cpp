/*
*  mit diesem include wird die Datei iostream in das Programm eingefügt. 
*  Das wird hier gebraucht, um die Anweisung cout benutzen zu können.
*
*/

#include <iostream>
/*
*  namespace wird verwendet, damit es nicht zu Überschneidungen mit gleichen Namen kommt.
*  ohne diese Anweisung müsste man std::cout schreiben. 
*/
using namespace std;

/*
*  jedes C++ Programm braucht eine Funktion main. Dort beginnt stets die Ausführung. 
*  Dieses Programm gibt nur den Text aus und macht am Ende einen Zeilenumbruch, damit der Text 
*  eine einzelne Zeile begkommt.
*  Die beiden Parameter argc (argument count) und args (argument string) braucht man nicht unbedingt. 
*  Wozu sie dienen sieht man im Program cmd.cpp.
*  int main bedeutet, dass main eine ganze Zahl (integer, int) zurückgeben kann. Damit kann man Infos
*  an den Aufrufer, in diesem Fall das Betriebssystem (Linux, Windows), zurückgeben. 0 bedeutet üblicherweise,
*  dass alles OK ist.
*/
int main(int argc, char **args) {
    cout << "hello, world!" << endl;
    return 0;
}