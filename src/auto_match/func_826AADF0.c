typedef struct {int a,b;} Pair_826AADF0;
typedef struct {char **p; int idx;} Iter_826AADF0;
typedef struct {Pair_826AADF0 pr; Iter_826AADF0 it; Pair_826AADF0 end; Iter_826AADF0 tmp;} Loc_826AADF0;
typedef struct Value_826AADF0 Value_826AADF0;
typedef struct { void (*f)(Value_826AADF0 *, int); } Vt_826AADF0;
struct Value_826AADF0 { Vt_826AADF0 *vt; int pad; unsigned count; };
extern Iter_826AADF0 *fn_826A9420(Iter_826AADF0 *,void *);
extern unsigned char fn_826A8E58(Iter_826AADF0 *,Pair_826AADF0 *);
extern void fn_826A93B0(Iter_826AADF0 *);
extern void fn_826958C8(void *);
void fn_826AADF0(char *self) {
 Loc_826AADF0 l; Iter_826AADF0 *r; Value_826AADF0 *v;
 r=fn_826A9420(&l.tmp,self+0x10);
 l.pr.a=0; l.pr.b=0;
 l.end=l.pr; l.it=*r;
 if(fn_826A8E58(&l.it,&l.end)==0) {
  l.pr.a=0; l.pr.b=0; l.end=l.pr;
  do {
   fn_826958C8(*l.it.p+l.it.idx*32+0x18);
   fn_826A93B0(&l.it);
  } while(fn_826A8E58(&l.it,&l.end)==0);
 }
 if (*(int *)(self+0x14) != 0) {
  v = *(Value_826AADF0 **)(self+0x14);
  v->count--;
  if ((v->count & 0x70000000) != 0x10000000) {
   v->count = (v->count & ~0x70000000) | 0x10000000;
   v->vt->f(v, 1);
  }
 }
 fn_826958C8(self+0x28);
 fn_826958C8(self+0x38);
}
