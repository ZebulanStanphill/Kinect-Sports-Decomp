typedef unsigned U;
extern void fn_82FF8108(void *, void *);
static __forceinline U *Find(U **self,U key) { U *end=self[2],*p=self[1]; for(;p!=end && *p!=key;p+=2){} return (p!=end) != 0 ? p+1 : 0; }
unsigned fn_82FF6A78(U **self,U key,void *arg) { U *r=Find(self,key); if(r) { char *v=(char *)*r; fn_82FF8108(v+0x1c,arg); return 1; } return 20; }
