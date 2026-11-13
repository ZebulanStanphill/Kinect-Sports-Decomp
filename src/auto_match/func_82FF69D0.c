typedef unsigned U;
extern int fn_83019B78(void *, void *);
static __forceinline U *Find(U **self,U key) { U *end=self[2],*p=self[1]; for(;p!=end && *p!=key;p+=2){} return (p!=end) != 0 ? p+1 : 0; }
unsigned fn_82FF69D0(U **self,U key,void *arg) { U *r=Find(self,key); if(r) { char *v=(char *)*r; return fn_83019B78(v+0x1c,arg) ? 1 : 0x34; } return 20; }
