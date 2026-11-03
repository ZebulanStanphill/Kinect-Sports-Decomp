typedef struct Base_82361AF0 Base_82361AF0;
struct Base_82361AF0 {
  struct { void *(*dtor)(Base_82361AF0 *, int); } *vt;
};
typedef struct { void *px; int *rep; } Sp_82361AF0;
typedef struct {
  void *vt;
  Sp_82361AF0 sp;
} Holder_82361AF0;
extern void *fn_8265C9E0(int);
extern unsigned char fn_8223AAC0(int *);
extern void fn_822315A0(int *);
extern char lbl_821B2988[];

Base_82361AF0 **fn_82361AF0(Base_82361AF0 **slot, Sp_82361AF0 *src)
{
  Holder_82361AF0 *h;
  Holder_82361AF0 *mem;
  Base_82361AF0 *old;
  Sp_82361AF0 *s;
  int *rep;
  void *px;
  mem = fn_8265C9E0(0xc);
  if (mem != 0) {
    s = &mem->sp;
    mem->vt = lbl_821B2988;
    s->px = 0;
    s->rep = 0;
    rep = src->rep;
    px = src->px;
    if (rep != 0 && fn_8223AAC0(rep) != 0) {
      if (s->rep != 0) {
        fn_822315A0(s->rep);
      }
      s->rep = rep;
      s->px = px;
    }
    h = mem;
  } else {
    h = 0;
  }
  old = *slot;
  *(Holder_82361AF0 **)slot = h;
  if (old != 0) {
    old->vt->dtor(old, 1);
  }
  return slot;
}
