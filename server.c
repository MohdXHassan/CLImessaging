#include <stdio.h> // std input output 
#include <stdlib.h> // std library
#include <string.h> // for strings 
#include <unistd.h>    // for miscellaneous functions
#include <sys/types.h> // for types TCP / UDP
#include <sys/socket.h> // for sockets
#include <netinet/in.h> // for Address family 


// additional thing encryption and decryption
void xorEncryptDecrypt(char *input, size_t length, const char *key) {
    size_t keyLen = strlen(key);
    for (size_t i = 0; i < length; ++i) {
        input[i] = input[i] ^ key[i % keyLen];
    }
}
// for printing different error messages .
void error( const char *msg )
{
	perror(msg) ;
	exit(1) ;
}
// command line input for ports and all .
int main(int argc , char *argv[]) {
if(argc < 2){

	fprintf(stderr ,"Port Number  not provided. Program terminate\n");
	exit(1) ;
}
// sockfd file descriptor for naming the socket and newsockfd for file descriptor after the connection is established .
int sockfd , newsockfd ,portno ,n ;
// buffer for message which we will use in data stream 
char buffer[255] ;
// for server and client
struct sockaddr_in serv_addr , cli_addr ;

  
socklen_t clilen ;

sockfd = socket(AF_INET,SOCK_STREAM,0) ;
if(sockfd<0){
	error("Error openeing Socket : ") ;
}
// clear all data what ever it is referenced to .
bzero((char*)&serv_addr,sizeof(serv_addr)) ;
// argv[0] will store the file name and   argv[1] will contain the port number .
portno = atoi(argv[1]) ;
// address family for the transport address .
serv_addr.sin_family = AF_INET ;
serv_addr.sin_addr.s_addr = INADDR_ANY ;
// host to network short (data type 2 byte ) "translates a short integer from host byte order to network byte order"
serv_addr.sin_port = htons(portno) ;
 
 if(bind(sockfd,(struct sockaddr *) &serv_addr ,sizeof(serv_addr)) < 0){
 	error("Binding Failed :") ;
 }
 listen(sockfd,5) ;
 clilen = sizeof(cli_addr) ;
 
 // for accepting the connection . every time we get a new connection we need new file descriptor
  newsockfd = accept(sockfd,(struct sockaddr *) &cli_addr,&clilen) ;
  if(newsockfd < 0 ){
  	error("Error on Accept") ;
  } 
  // code for the communication between client and server .

  while(1){
  	bzero(buffer,255) ;
  	// reading if any input is present.
  	n = read(newsockfd,buffer,255 ) ;
  	// if not its error in reading 
  	if( n < 0 ){
  		error("Error on reading") ;
  	}

    // Decrypt received message
    xorEncryptDecrypt(buffer, n, "secretkey");

  	printf("%s\n",buffer);
	bzero(buffer,255) ;
	fgets(buffer,255,stdin) ;

   // Encrypt the message before sending
    xorEncryptDecrypt(buffer, strlen(buffer), "Hassan");

 // writing output on the server terminal 
	n = write(newsockfd,buffer,strlen(buffer)) ;
    if( n < 0 ){
    	// if noting written then error in write 
    	error("Error in writing") ;
    }
    int i = strncmp("BYE" , buffer , 3) ;
    if( i == 0 ) break ;
  }
  // freeing the sockets after the communication
  close(newsockfd) ;
  close(sockfd) ;

  return 0 ;
}
