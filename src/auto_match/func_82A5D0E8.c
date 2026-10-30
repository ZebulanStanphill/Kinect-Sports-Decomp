typedef void (*Method)(void *);
extern void fn_82A49A30(void *,void *,unsigned int *);
int fn_82A5D0E8(char *object,void *buffer,unsigned int *size) {void *lock=*(void **)(object+12);((Method *)(*(void **)lock))[2](lock);fn_82A49A30(*(void **)(object+20),buffer,size);lock=*(void **)(object+12);((Method *)(*(void **)lock))[5](lock);return 0;}
