extern unsigned int lbl_831BCA64;extern char lbl_832650B8[];extern void *KeTlsGetValue(unsigned int);extern void fn_8306BEB8(unsigned int,void *);
void fn_8306C018(unsigned int seed) {void *state=KeTlsGetValue(lbl_831BCA64);if(state)fn_8306BEB8(seed,state);else fn_8306BEB8(seed,lbl_832650B8);}
