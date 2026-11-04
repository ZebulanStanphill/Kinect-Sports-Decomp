typedef struct Target_826E6ED8 { int *vt; } Target_826E6ED8;
typedef struct Holder_826E6ED8 { Target_826E6ED8 *target; int rest; } Holder_826E6ED8;
typedef struct Owner_826E6ED8 { int p[2]; Holder_826E6ED8 *holder; } Owner_826E6ED8;
extern void fn_826E6E40(Holder_826E6ED8 *); extern int fn_827D3518(int *); extern void fn_8267C4F0(Target_826E6ED8 *); extern void fn_8267BE38(Holder_826E6ED8 *);
unsigned fn_826E6ED8(Owner_826E6ED8 *s) {
 unsigned ok=(unsigned)s->holder;
 if(s->holder) {
  int result; Holder_826E6ED8 *h;
  fn_826E6E40(s->holder); result=fn_827D3518(&s->holder->rest);
  ((void (*)(Target_826E6ED8 *))s->holder->target->vt[18])(s->holder->target);
  h=s->holder;
  if(h) { if(h->target) fn_8267C4F0(h->target); fn_8267BE38(h); }
  s->holder=0; ok=result==0;
 } return ok;
}
