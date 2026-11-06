typedef unsigned U;
static __forceinline U *Get(int c,U *p) { return c?p:0; }
static __forceinline U *Find(U **self,U key) { U *end=self[2],*p=self[1]; for(;p!=end && *p!=key;p+=2){} return (p!=end) != 0 ? p+1 : 0; }
unsigned fn_82FF64B8(U **self,U key) { U *r=Find(self,key); if(r) { U *v=(U *)*r; v[16]=v[15]; return 1; } return 20; }
