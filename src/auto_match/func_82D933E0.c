extern void fn_82CE4040(void *);
extern void fn_82CE4118(void *);
void fn_82D933E0(char *object,void *replacement) {fn_82CE4040(replacement); if(*(void **)(object+0x84)) fn_82CE4118(*(void **)(object+0x84)); *(void **)(object+0x84)=replacement;}
