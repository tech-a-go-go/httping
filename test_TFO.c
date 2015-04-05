/* $Revision$ */
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>


#ifndef TCP_FASTOPEN
#define TCP_FASTOPEN	23
#endif

int main(int argc, char *argv[])
{
	int sfd = 0;
	int qlen = 5;

	setsockopt(sfd, IPPROTO_TCP, TCP_FASTOPEN, &qlen, sizeof(qlen));

	return 0;
}
