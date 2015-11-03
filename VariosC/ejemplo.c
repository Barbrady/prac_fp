#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main( int argc, char *argv[])  {
	int fd;
	printf("Número de argumentos = %d\n",argc);
	if( (fd = open( argv[1], O_RDWR )) ==-1 )
	{
		perror( "open" );
		//exit( -1 );
	}
	printf("\n\n%s\n\n",argv[0]);
	printf("El fichero abierto tiene el descriptor %d.\n",fd);
	close(fd);
	return 0;
}
