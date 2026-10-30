struct S { int a,b,c; };
extern void fn_8251CF80(void *, int, struct S *);
void fn_824FB6D8(unsigned int i, int *p) { struct S s = {0,0,0}; fn_8251CF80(p+i+10,0,&s); }
