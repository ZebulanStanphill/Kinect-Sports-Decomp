typedef struct { union { char *p; char buf[16]; } u; unsigned size; unsigned cap; } Str;
typedef struct { char pad0[0x20]; int m20; int pad24; int m28; char pad2c[0xac]; Str name; } Obj;
typedef struct { char pad[0x114]; Obj *o; } Self;
extern int fn_82230218(Str *, Str *, int, int);
extern int fn_822C1928(int, char *, int, int);
extern int fn_822C8C08(Obj *, char *);
extern int fn_8260D428(Str *, int, unsigned, char *, unsigned);

static char *cstr(Str *s)
{
  if (s->cap >= 0x10) return s->u.p;
  return s->u.buf;
}

static int cmp(Str *a, Str *b)
{
  unsigned len = b->size;
  char *p = cstr(b);
  return fn_8260D428(a, 0, a->size, p, len);
}

void fn_822E5340(Self *self, Str *s)
{
  Obj *o = self->o;
  Str *n = &o->name;
  if (cmp(s, n) != 0) {
    if (fn_822C1928(o->m20 + 4, "idle", 0, 4) != -1 && o->m28 == 0) {
      fn_822C8C08(o, cstr(s));
    }
  }
  fn_82230218(n, s, 0, -1);
}
