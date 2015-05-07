/**
  * Version: 0.0.1
  * Author: 
*/
#include "operations.h"

int main(int argc, char *argv[]){

if (argc == 0)
    {
    printPWD();
    }
else
    {
    printEnvironment(argv[1]);
    }

return 0;
}
