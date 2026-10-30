typedef void (*Method)(void *);
int fn_82C03360(char *object) {void *child=*(void **)(object+0x30);if(child){((Method *)*(void **)child)[2](child);*(void **)(object+0x30)=0;}return 0;}
