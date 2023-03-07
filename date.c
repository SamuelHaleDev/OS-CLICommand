#include "types.h"
#include "user.h"
#include "date.h"
int main(int argc, char *argv[])
{
  struct rtcdate *r = malloc(sizeof(struct rtcdate)); // date.h contains this data structure
  if (date((void *)r)) { // I believe this is a function we have to define as it is not contained in any of the header files
    printf(2, "date failed\n");
    exit();
  }
  // print the time as a formatted string
  printf(1, "%d-%d-%d %d:%d:%d\n", 
           r.month, r.day, r.year, r.hour, r.minute, r.second);
  exit();
}