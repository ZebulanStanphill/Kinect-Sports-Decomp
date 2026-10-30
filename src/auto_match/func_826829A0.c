typedef struct Ref { int a; int b; unsigned rc; } Ref;
typedef struct Obj Obj;
typedef struct { void *s[10]; void (*f28)(Obj *, unsigned *, unsigned, void *, void *); } VT;
struct Obj { VT *vt; int ref; };
extern void fn_82696330(void *);
extern void fn_826824B0(Ref *);
void fn_826829A0(Obj *self, unsigned *p2, Ref *r)
{
  unsigned char a[16];
  unsigned char b[24];
  if (self->ref == 0) {
    a[0] = 3;
    b[0] = 10;
    self->vt->f28(self, p2, *p2 + 0x134, b, a);
    fn_82696330(b);
  }
  if (r != 0) {
    r->rc = (r->rc + 1) & 0x8fffffff;
  }
  if ((Ref *)self->ref != 0) {
    fn_826824B0((Ref *)self->ref);
  }
  self->ref = (int)r;
}
