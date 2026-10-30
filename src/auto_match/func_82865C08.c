extern void fn_82297DB0(void *,int,int);
extern void fn_82865B90(void *,int);
extern void *fn_82865AF0(void *,int,unsigned short);
void *fn_82865C08(void *p, signed char *a,signed char *b) { fn_82297DB0(p,0,0); fn_82865B90(p,b-a); for(;a!=b;a++) fn_82865AF0(p,1,*a); return p; }
