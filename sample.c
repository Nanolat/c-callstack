#include "c-callstack.h"
#include <stdio.h>

#define YOU  1
#define LOVE ==
#define ME   1

int so_topless_ranking_server() {

    printf("If you love me, we are in trouble, as I am married.\n");

    if ( YOU LOVE ME )
        return -1;

    NL_RETURN (0);
}

int nanolat_database()
{
    int ret = so_topless_ranking_server();
    if (ret) NL_RETURN (ret);
}

int nanolat_message_queue()
{
    int ret = nanolat_database();
    if (ret) NL_RETURN (ret);
}

int main(int argc, char * argv[]) {

    int ret = nanolat_message_queue();
    if (ret) NL_RETURN (ret); 

    return 0;

}

