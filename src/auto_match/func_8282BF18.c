extern int fseek(void *,int,int);
int fn_8282BF18(void **stream,int offset,int origin){return fseek(*stream,offset,origin)?-1:0;}
