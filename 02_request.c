//http://coding.debuntu.org/c-linux-socket-programming-tcp-simple-http-client

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <netdb.h>
#include <string.h>
int create_tcp_socket();
char* get_ip(char *host);
char* build_get_query(char *host, char *page);
void usage();

#define HOST "coding.debuntu.org"
#define PAGE "/"
#define PORT 80
#define USERAGENT "GHTMLGET 1.0"

int main(int argc, char **argv){
  struct sockaddr_in *remote;
  int sock;
  int tmpres;
  char *ip;
  char *get;
  char buf[BUFSIZE+1];
  char *host;
  char *page;

  if(argc == 1){
    usage();
    exit(2);
  }
  host = argv[1];

  if(argc > 2){
    page = argv[2];
  }else{
    page = PAGE;
  }
  sock = create_tcp_socket();
  ip = get_ip(host);
  fprintf(stderr, "IP address is %s\n", ip);


}
