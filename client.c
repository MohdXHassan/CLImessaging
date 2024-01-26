/*
How we will passing command line arguments 
filename server_ipaddress portno
argv[0] :- filename 
argv[1] :- server_ipaddress
argv[2] :- portno


*/


#include <stdio.h> // std input output 
#include <stdlib.h> // std library
#include <string.h> // for strings 
#include <unistd.h>    // for miscellaneous functions for read write and close 
#include <sys/types.h> // for types TCP / UDP
#include <sys/socket.h> // for sockets
#include <netinet/in.h> // for Address family 
#include <netdb.h> // define the hostent structure IPv4 address 

// for printing different error messages .
void error( const char *msg )
{
	perror(msg) ;
	exit(1) ;
}

// command line input for ports and all .
int main(int argc , char *argv[]) {

if(argc < 3){
    // either the user has not provided the host name or ipaddress.
	fprintf(stderr,"usage %s hostname port \n",argv[0]);
	exit(1) ;
} 
// sockfd file descriptor for naming the socket and newsockfd for file descriptor after the connection is established .
int sockfd ,portno ,n ;
// buffer for message which we will use in data stream same as server .
char buffer[255] ;
// for server and client
struct sockaddr_in serv_addr ;
//used to store info about a given host and internet protocol eg:IPV4
struct hostent *server ;

  

portno = atoi(argv[2]) ;
sockfd = socket(AF_INET,SOCK_STREAM,0) ;
if(sockfd<0){
	error("Error openeing Socket : ") ;
}
// since we are not receieving new request so we dont use newsockfd (new socket file descriptor ).

server = gethostbyname(argv[1]) ; // ipaddress of the server 
if(server == NULL){
   fprintf(stderr,"Error, No such address \n") ;
}
bzero((char *)&serv_addr , sizeof(serv_addr)) ;
serv_addr.sin_family = AF_INET ;
bcopy((char *)server->h_addr,(char *) &serv_addr.sin_addr.s_addr,server->h_length) ;// copy n bytes from the hostnet object  to serv_addr transferring informantion 
serv_addr.sin_port = htons(portno) ;
if(connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0 ){// connecting to the server .
error("Connection Failed") ;
}

while(1){
    bzero(buffer,255) ;
    fgets(buffer,255,stdin) ;
    n = write(sockfd,buffer,strlen(buffer)) ;
    if(n<0){
        error("Error on writing") ;
    }
    bzero(buffer,255) ;
    n = read(sockfd,buffer,255);
    if(n<0){
        error("Error on reading ") ;
    }
    printf("Server: %s",buffer );
    int i = strncmp("BYE" , buffer , 3) ;
    if( i == 0 ) break ;
}
close(sockfd) ;
return 0 ;

}