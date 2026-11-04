extern "C" {
extern void fn_827A5378(void *,unsigned,int);extern unsigned fn_827A7548(void *,void *);static __forceinline unsigned *get(unsigned q){return q ? (unsigned *)(q+12) : 0;}unsigned fn_827A7E00(char *s,unsigned a,int b){fn_827A5378(s+4,a,b);unsigned *p=get(fn_827A7548(s,s+4));if(p) return *p; return 0;}
}