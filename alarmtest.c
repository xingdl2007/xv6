#include "types.h"
#include "stat.h"
#include "user.h"

void
periodic() {
  printf(1, "alarm!\n");
}

int
main(int argc, char* argv[]) {
  printf(1, "alarmtest starting!\n");
  alarm(10, periodic);
  for(int i=0; i<50*10000000; ++i) {
    if((i % 2500000) == 0) {
      write(2, ".", 1);
    }
  }
  exit();
}
