#ifndef __HASH_H__
#define __HASH_H__

#ifdef __cplusplus
extern "C" {
#endif

/* We need to find some orthogonal matrix operations and multithread the piss out of the process */
typedef unsigned char bitseq;
typedef unsigned long long datalen;
typedef enum {FALSE=-1,BADHASH=0,TRUE=1} r_hash;


#ifdef __cplusplus
}
#endif

#endif // __HASH_H__ 
