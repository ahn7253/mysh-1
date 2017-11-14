#include "signal_handlers.h"
#include "signal.h"
#include "unistd.h"


void catch_sigint(int signalNo)
{
  signal(SIGINT,SIG_IGN);
}

void catch_sigtstp(int signalNo)
{
  signal(SIGTSTP, SIG_IGN);
}
