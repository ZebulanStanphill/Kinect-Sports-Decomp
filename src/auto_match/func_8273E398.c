typedef struct {int a,b;} Pair_8273E398;
typedef struct {char **p; int idx;} Iter_8273E398;
typedef struct {Pair_8273E398 pr; Iter_8273E398 it; Pair_8273E398 end; Iter_8273E398 tmp;} Loc_8273E398;
extern Iter_8273E398 *fn_82686EE8(Iter_8273E398 *,void *);
extern unsigned char fn_826A8E58(Iter_8273E398 *,Pair_8273E398 *);
extern void fn_8273CF58(Iter_8273E398 *);
extern void fn_826820F0(void *);
extern void fn_826BEF40(void *);
void fn_8273E398(char *self) {
 Loc_8273E398 l; Iter_8273E398 *r;
 fn_826BEF40(self);
 r=fn_82686EE8(&l.tmp,self+0x34);
 l.pr.a=0; l.pr.b=0;
 l.end=l.pr; l.it=*r;
 if(fn_826A8E58(&l.it,&l.end)==0) {
  l.pr.a=0; l.pr.b=0; l.end=l.pr;
  do {
   fn_826820F0(*(void **)(*l.it.p+l.it.idx*16+0x14));
   fn_8273CF58(&l.it);
  } while(fn_826A8E58(&l.it,&l.end)==0);
 }
}
