typedef struct {int a,b;} Pair_826AAD18;
typedef struct {char **p; int idx;} Iter_826AAD18;
typedef struct {Pair_826AAD18 pr; Iter_826AAD18 it; Pair_826AAD18 end; Iter_826AAD18 tmp;} Loc_826AAD18;
extern Iter_826AAD18 *fn_826A9420(Iter_826AAD18 *,void *);
extern unsigned char fn_826A8E58(Iter_826AAD18 *,Pair_826AAD18 *);
extern void fn_826A93B0(Iter_826AAD18 *);
extern void fn_82695AF0(void *);
extern void fn_826824B0(void *);
void fn_826AAD18(char *self) {
 Loc_826AAD18 l; Iter_826AAD18 *r;
 r=fn_826A9420(&l.tmp,self+0x10);
 l.pr.a=0; l.pr.b=0;
 l.end=l.pr; l.it=*r;
 if(fn_826A8E58(&l.it,&l.end)==0) {
  l.pr.a=0; l.pr.b=0; l.end=l.pr;
  do {
   fn_82695AF0(*l.it.p+l.it.idx*32+0x18);
   fn_826A93B0(&l.it);
  } while(fn_826A8E58(&l.it,&l.end)==0);
 }
 if (*(int *)(self+0x14)) fn_826824B0(*(void **)(self+0x14));
 fn_82695AF0(self+0x28);
 fn_82695AF0(self+0x38);
}
