#include <stdio.h>
#include <stdlib.h>

int printPWD(void){
    char *env_p = getenv("PWD");
    if (env_p){
        printf("PWD = %s\n", env_p);
    return 0;
    }
    return -1;
}

int printEnvironment(char *env){
    char *some_env = getenv(env);
    if (some_env){
        printf("%s = %s\n", env, some_env);
    return 0;
    }
    return -1;
}
