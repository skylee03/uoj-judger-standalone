#include <sys/wait.h>
#include <unistd.h>

#include <iostream>
#include <thread>
using namespace std;

void t1() {
  while (true)
    ;
}

void t2() {
  while (true)
    ;
}

int main() {
  if (fork() == 0) {
    t1();
  }
  if (fork() == 0) {
    t2();
  }

  int stat;
  while (wait(&stat) > 0)
    ;
  return 0;
}
