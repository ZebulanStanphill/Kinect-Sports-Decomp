typedef struct {int a,b;} Pair_826AB0E0;
typedef struct {char **p; int idx;} Iter_826AB0E0;
typedef struct {Pair_826AB0E0 pr; Iter_826AB0E0 it; Pair_826AB0E0 end; Iter_826AB0E0 tmp;} Loc_826AB0E0;
extern Iter_826AB0E0 *fn_826A9420(Iter_826AB0E0 *,void *);
extern unsigned char fn_826A8E58(Iter_826AB0E0 *,Pair_826AB0E0 *);
extern void fn_826A93B0(Iter_826AB0E0 *);
extern void fn_82695980(void *);
extern void fn_82681F88(void *);
void fn_826AB0E0(char *self) {
 Loc_826AB0E0 l; Iter_826AB0E0 *r;
 r=fn_826A9420(&l.tmp,self+0x10);
 l.pr.a=0; l.pr.b=0;
 l.end=l.pr; l.it=*r;
 if(fn_826A8E58(&l.it,&l.end)==0) {
  l.pr.a=0; l.pr.b=0; l.end=l.pr;
  do {
   fn_82695980(*l.it.p+l.it.idx*32+0x18);
   fn_826A93B0(&l.it);
  } while(fn_826A8E58(&l.it,&l.end)==0);
 }
 if (*(int *)(self+0x14)) fn_82681F88(*(void **)(self+0x14));
 fn_82695980(self+0x28);
 fn_82695980(self+0x38);
}
