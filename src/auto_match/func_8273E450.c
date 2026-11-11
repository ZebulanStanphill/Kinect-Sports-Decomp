typedef struct {int a,b;} Pair_8273E450;
typedef struct {char **p; int idx;} Iter_8273E450;
typedef struct {Pair_8273E450 pr; Iter_8273E450 it; Pair_8273E450 end; Iter_8273E450 tmp;} Loc_8273E450;
extern Iter_8273E450 *fn_82686EE8(Iter_8273E450 *,void *);
extern unsigned char fn_826A8E58(Iter_8273E450 *,Pair_8273E450 *);
extern void fn_8273CF58(Iter_8273E450 *);
extern void fn_82681F88(void *);
extern void fn_826BE840(void *);
void fn_8273E450(char *self) {
 Loc_8273E450 l; Iter_8273E450 *r;
 fn_826BE840(self);
 r=fn_82686EE8(&l.tmp,self+0x34);
 l.pr.a=0; l.pr.b=0;
 l.end=l.pr; l.it=*r;
 if(fn_826A8E58(&l.it,&l.end)==0) {
  l.pr.a=0; l.pr.b=0; l.end=l.pr;
  do {
   fn_82681F88(*(void **)(*l.it.p+l.it.idx*16+0x14));
   fn_8273CF58(&l.it);
  } while(fn_826A8E58(&l.it,&l.end)==0);
 }
}
