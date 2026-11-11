typedef struct {int a,b;} Pair_826BE840;
typedef struct {char **p; int idx;} Iter_826BE840;
typedef struct {Pair_826BE840 pr; Iter_826BE840 it; Pair_826BE840 end; Iter_826BE840 tmp;} Loc_826BE840;
typedef struct {Iter_826BE840 it; Pair_826BE840 end; Iter_826BE840 tmp;} Loc2_826BE840;
extern Iter_826BE840 *fn_826A9420(Iter_826BE840 *,void *);
extern unsigned char fn_826A8E58(Iter_826BE840 *,Pair_826BE840 *);
extern void fn_826A93B0(Iter_826BE840 *);
extern void fn_82695980(void *);
extern void fn_826C3290(void *);
extern Iter_826BE840 *fn_826BE090(Iter_826BE840 *, void *);
extern void fn_826BE020(Iter_826BE840 *);
extern void fn_82681F88(void *);
void fn_826BE840(char *self) {
 {
 Loc_826BE840 l; Iter_826BE840 *r;
 r=fn_826A9420(&l.tmp,self+0x18);
 l.pr.a=0; l.pr.b=0;
 l.end=l.pr; l.it=*r;
 if(fn_826A8E58(&l.it,&l.end)==0) {
  l.pr.a=0; l.pr.b=0; l.end=l.pr;
  do {
   fn_82695980(*l.it.p+l.it.idx*32+0x18);
   fn_826A93B0(&l.it);
  } while(fn_826A8E58(&l.it,&l.end)==0);
 }
 }
 fn_826C3290(self+0x1c);
 if (*(void **)(self+0x28) != 0) {
  Loc2_826BE840 m;
  fn_826BE090(&m.tmp, *(void **)(self+0x28));
  m.end.a=0; m.end.b=0;
  m.it = m.tmp;
  if(fn_826A8E58(&m.it,&m.end)==0) {
   m.end.a=0; m.end.b=0;
   do {
    char *e = *m.it.p + m.it.idx*0x30 + 0x18;
    fn_826C3290(e);
    fn_82695980(e+0x10);
    fn_826BE020(&m.it);
   } while(fn_826A8E58(&m.it,&m.end)==0);
  }
 }
 if (*(int *)(self+0x14)) fn_82681F88(*(void **)(self+0x14));
}
