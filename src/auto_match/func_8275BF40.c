extern void fn_826959C8(void *);
extern void fn_8269A1F0(void *, unsigned);


typedef struct VT_8275BF40 { int pad[5]; unsigned (*f14)(void *); } VT_8275BF40;
typedef struct IF_8275BF40 { VT_8275BF40 *vt; } IF_8275BF40;
typedef struct Sub_8275BF40 { int pad[12]; IF_8275BF40 *f30; int f34; } Sub_8275BF40;
typedef struct O_8275BF40 { int pad; unsigned char *f4; char *f8; } O_8275BF40;

void fn_8275BF40(O_8275BF40 *o)
{
  unsigned char *p = o->f4;
  Sub_8275BF40 *s;
  fn_826959C8(p);
  *p = 0;
  s = o->f8 ? (Sub_8275BF40 *)(o->f8 - 0x10) : 0;
  if (s != 0 && s->f34 == 0) {
    fn_8269A1F0(o->f4, s->f30->vt->f14(s->f30));
  }
}
