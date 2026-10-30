extern void fn_82D816D8(void *,void *);extern void fn_82CE4118(void *);
void fn_82DEA708(char *interior){unsigned address=(unsigned)interior;void *listener=address-16?(void *)(address-8):0;fn_82D816D8(*(void **)(interior+8),listener);*(void **)(interior+8)=0;fn_82CE4118((void *)(address-16));}
