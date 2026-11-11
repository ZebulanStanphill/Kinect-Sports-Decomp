typedef struct {int a,b;} Pair_826AAF00;
typedef struct {char **p; int idx;} Iter_826AAF00;
typedef struct {Pair_826AAF00 pr; Iter_826AAF00 it; Pair_826AAF00 end; Iter_826AAF00 tmp;} Loc_826AAF00;
typedef struct Value_826AAF00 Value_826AAF00;
typedef struct { void (*f)(Value_826AAF00 *, int); } Vt_826AAF00;
struct Value_826AAF00 { Vt_826AAF00 *vt; int pad; unsigned count; };
extern Iter_826AAF00 *fn_826A9420(Iter_826AAF00 *,void *);
extern unsigned char fn_826A8E58(Iter_826AAF00 *,Pair_826AAF00 *);
extern void fn_826A93B0(Iter_826AAF00 *);
extern void fn_82695828(void *);
void fn_826AAF00(char *self) {
 Loc_826AAF00 l; Iter_826AAF00 *r; Value_826AAF00 *v;
 r=fn_826A9420(&l.tmp,self+0x10);
 l.pr.a=0; l.pr.b=0;
 l.end=l.pr; l.it=*r;
 if(fn_826A8E58(&l.it,&l.end)==0) {
  l.pr.a=0; l.pr.b=0; l.end=l.pr;
  do {
   fn_82695828(*l.it.p+l.it.idx*32+0x18);
   fn_826A93B0(&l.it);
  } while(fn_826A8E58(&l.it,&l.end)==0);
 }
 if (*(int *)(self+0x14) != 0) {
  v = *(Value_826AAF00 **)(self+0x14);
  v->count++;
  if (v->count & 0x70000000) {
   v->count &= ~0x70000000;
   v->vt->f(v, 2);
  }
 }
 fn_82695828(self+0x28);
 fn_82695828(self+0x38);
}
