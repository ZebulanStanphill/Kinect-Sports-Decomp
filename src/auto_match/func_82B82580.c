extern void fn_82B82208(unsigned int,unsigned int,double *,double *);extern void fn_82B80FE0(double *,double *,unsigned int);
void fn_82B82580(unsigned int *object,unsigned int index,double *first,double *second) {fn_82B82208(object[3],((*object>>5&0xff)>>(index<<1))&3,first,second);fn_82B80FE0(first,second,*object&0x1f);}
