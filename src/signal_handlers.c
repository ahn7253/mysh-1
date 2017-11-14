#include "signal_handlers.h"
#include "signal.h"
#include "unistd.h"


void catch_sigint(int signalNo)
{
  signal(signalNo,SIG_IGN);
}

void catch_sigtstp(int signalNo)
{
  signal(signalNo, SIG_IGN);
}
