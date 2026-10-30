typedef void (*Method)(void *);
int fn_82C00888(char *object) {void *child=*(void **)(object+0x2c);if(child){((Method *)*(void **)child)[2](child);*(void **)(object+0x2c)=0;}return 0;}
