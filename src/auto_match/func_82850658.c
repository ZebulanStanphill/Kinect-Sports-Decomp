extern void fn_82850438(void *,void *);
extern void fn_82850350(void *,void *);
void fn_82850658(char *object,void *input) {void *child=*(void **)(object+0x90);unsigned int kind;if(!child)return;kind=*(unsigned int *)((char *)child+0x1c);if(kind>=1){if(kind==1)fn_82850438(object,input);}else fn_82850350(object,input);}
