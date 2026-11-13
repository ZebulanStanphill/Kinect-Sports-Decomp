typedef struct { int px; int *rep; } Sp;
typedef struct Inner { struct InnerVt *vt; } Inner;
struct InnerVt { void *f0, *f4; int (*f8)(Inner *); };
typedef struct { int pad[14]; int m38; } Target;
typedef struct {
  int pad0; Sp sp; int pad0c; int m10; int m14; unsigned char m18; unsigned char m19; char pad1a[6]; int m20;
} Self;
extern void fn_822315A0(int *);
extern void fn_82242A30(Self *);
extern Sp *fn_82365BD8(Sp *, Sp *);
extern void fn_82522588(Sp *, Sp *);
extern void fn_828AAF70(int, int);

/* std::swap: the shared_ptr swap (_Ptr_base::_Swap) swaps rep, then px, each
   through the helper; open-coded, the second swap gets r10/r11 the other way. */
static __forceinline void swp(int *a, int *b) { int tt = *a; *a = *b; *b = tt; }
void fn_82242928(Self *self, Sp *other, int val)
{
  Sp *sp = &self->sp;
  Sp tmp;
  Sp out;
  Sp *t;
  int m;
  int *r;
  unsigned char need = sp->px != 0 && self->m18 == 0 && self->m19 == 0;
  if (need) fn_82242A30(self);
  t = fn_82365BD8(&tmp, other);
  swp((int *)&t->rep, (int *)&sp->rep);
  swp((int *)&t->px, (int *)&sp->px);
  if (tmp.rep != 0) fn_822315A0(tmp.rep);
  self->m14 = val;
  self->m20 = self->m20 + 1;
  fn_82522588(&out, sp);
  m = ((Target *)out.px)->m38;
  if (m != 0) {
    int o = (*(struct InnerVt **)m)->f8((Inner *)m);
    int a = o + 0x1ec;
    fn_828AAF70(a, 0);
  }
  if (out.rep != 0) fn_822315A0(out.rep);
  if (other->rep != 0) fn_822315A0(other->rep);
}
