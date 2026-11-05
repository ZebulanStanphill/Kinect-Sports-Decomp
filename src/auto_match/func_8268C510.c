extern unsigned lbl_831E7E64;
extern unsigned strlen(const char *);extern void *memcpy(void *,const void *,unsigned);
extern char *fn_8268B368(void *,unsigned,unsigned,int);
unsigned *fn_8268C510(unsigned *self,const char *str) { unsigned n = str ? strlen(str) : 0; char *p=fn_8268B368(self,lbl_831E7E64,n,0);memcpy(p+8,str,n);*self=(unsigned)p;return self; }
