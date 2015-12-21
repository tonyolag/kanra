/* Kanra IRC Bot */

#include <assert.h>
#include <stdlib.h>
#include "conf.h"
#include "log.h"
#include "irc.h"

#define VERSION "0.1.6"

int main(int argc, char *argv[])
{
    wlogf(INFO, "Starting Kanra (" VERSION ")\n");

    struct Config *conf = parse_args(argc, argv);
    struct IrcServer *server = new_server(conf);

    /* Loop */
    server->connect(server);

    wlogf(INFO, "Finishing\n");
    return EXIT_SUCCESS;
}
