extern void fn_829F1358(void *,int,void *,int);
int fn_829F1508(char *p){if(!p)return 0x80070057;{unsigned char predicate=*(int *)(p+0x284)==2;if(predicate & 1){char *q=*(char **)(p+0x94);unsigned address=(unsigned)q+0x7c;if(address)*(int *)(q+0x90)=*(int *)(address+4);fn_829F1358(p,0,*(void **)(p+0x94),1);}}return 0;}
