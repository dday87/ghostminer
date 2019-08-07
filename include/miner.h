#ifndef __MINER_H__
#define __MINER_H__

#define ENABLE_CUDA 1
#define ENABLE OMP 2

#ifdef __cplusplus
extern "C" {
#endif

typedef struct miner miner;
struct miner
{
	char type[16] = "Prototype_Miner";
	char ipv4address[8] = "0.0.0.0";
	unsigned int send_port = 0;
	unsigned int listen_port = 0;
	char socktype[4] = "tcp";
};

typedef struct ghostminer ghostminer;
struct ghostminer
{
	char type[16] = "MPI_CUDA_Miner";
	char ipv4address[8] = "0.0.0.0";
	unsigned int port = 0;
	char socktype[4] = "tcp";
};

#ifdef __cplusplus
}
#endif

#endif // __MINER_H__
