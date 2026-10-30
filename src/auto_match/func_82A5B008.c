typedef void (*Method)(void *);extern int fn_82A5C308(void *,unsigned int);
int fn_82A5B008(char *object,unsigned int value) {int status;void *lock=*(void **)(object+12);((Method *)*(void **)lock)[2](lock);status=fn_82A5C308(object+4,value);lock=*(void **)(object+12);((Method *)*(void **)lock)[5](lock);return status;}
