#include <stdio.h>
#include <string>
#define BRIGHT 1
#define BLUE 31
#define BGWHITE 40

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("#foreveralone?\n");
    return 1;
  }
  std::string g = argv[1];
  std::string girl = g;
  while (girl.length() < 50)
    girl.append(g);
  printf("%c[%dm         %c[49m", 0x1B, 0,  0x1B);
  printf("%c[%d;%d;%dm%s%c[49m", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 8).c_str(), 0x1B);
  printf("%c[%dm            %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 9).c_str(), 0x1B);
  printf("%c[%dm      %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 14).c_str(), 0x1B);
  printf("%c[%dm       %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 16).c_str(), 0x1B);
  printf("%c[%dm    %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 19).c_str(), 0x1B);
  printf("%c[%dm   %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 19).c_str(), 0x1B);
  printf("%c[%dm   %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 32).c_str(), 0x1B);
  printf("%c[%dm       %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 4).c_str(), 0x1B);
  printf("%c[%dm  %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 32).c_str(), 0x1B);
  printf("%c[%dm         %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 4).c_str(), 0x1B);
  printf("%c[%dm %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 36).c_str(), 0x1B);
  printf("%c[%dm       %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 4).c_str(), 0x1B);
  printf("%c[%dm %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 40).c_str(), 0x1B);
  printf("%c[%dm      %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 1).c_str(), 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 44).c_str(), 0x1B);
  printf("%c[%dm  %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 3).c_str(), 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 46).c_str(), 0x1B);
  printf("%c[%dm %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 1).c_str(), 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 49).c_str(), 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 49).c_str(), 0x1B);
  printf("%c[%dm %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 47).c_str(), 0x1B);
  printf("%c[%dm  %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 45).c_str(), 0x1B);
  printf("%c[%dm    %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 42).c_str(), 0x1B);
  printf("%c[%dm      %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 37).c_str(), 0x1B);
  printf("%c[%dm         %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 31).c_str(), 0x1B);
  printf("%c[%dm            %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 25).c_str(), 0x1B);
  printf("%c[%dm              %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 20).c_str(), 0x1B);
  printf("%c[%dm                 %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 13).c_str(), 0x1B);
  printf("%c[%dm                   %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 9).c_str(), 0x1B);
  printf("%c[%dm                     %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 6).c_str(), 0x1B);
  printf("%c[%dm                      %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 4).c_str(), 0x1B);
  printf("%c[%dm                       %c[49m", 0x1B, 0, 0x1B);
  printf("%c[%d;%d;%dm%s%c[49m\n", 0x1B, BRIGHT, BLUE, BGWHITE, girl.substr(0, 2).c_str(), 0x1B);
  printf("%c[%dm%c[49m", 0x1B, 0, 0x1B);
}
