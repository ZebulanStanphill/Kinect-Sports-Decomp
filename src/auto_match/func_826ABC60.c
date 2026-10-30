typedef struct { int a; int b; unsigned int rc; } Rc_826ABC60;
typedef struct {
  char pad0[0x14];
  Rc_826ABC60 *r14;
  char pad1[0x18];
  Rc_826ABC60 *r30;
  Rc_826ABC60 *r34;
} Obj_826ABC60;
extern void fn_826824B0(Rc_826ABC60 *);
static void AddRef(int p)
{
  if (p != 0) ((Rc_826ABC60 *)p)->rc = (((Rc_826ABC60 *)p)->rc + 1) & 0x8fffffff;
}
static void Assign(Rc_826ABC60 **dst, Rc_826ABC60 **src)
{
  AddRef((int)*src);
  if (*dst != 0) fn_826824B0(*dst);
  *dst = *src;
}
void fn_826ABC60(Obj_826ABC60 *s, Rc_826ABC60 *n)
{
  Rc_826ABC60 *t = s->r30;
  if (n != t) {
    AddRef((int)t);
    if (s->r34 != 0) fn_826824B0(s->r34);
    s->r34 = s->r30;
    if (n != 0) n->rc = (n->rc + 1) & 0x8fffffff;
    if (s->r30 != 0) fn_826824B0(s->r30);
    s->r30 = n;
    Assign(&s->r14, &s->r30);
  }
}
