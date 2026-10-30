extern int fn_8302BDE0(void *, int, int, int);
typedef struct Obj_8303D950 Obj;
typedef struct Vt_8303D950 { char pad[0x20]; int (*f20)(Obj *, unsigned char **, int); int (*f24)(Obj *, unsigned char **, int); } Vt;
struct Obj_8303D950 { Vt *vt; char pad[0x10]; unsigned int f14; char pad2[4]; int f1c; };
static int ReadInt(unsigned char **pp) { int v = *(int *)*pp; *pp = *pp + 4; return v; }
static unsigned char ReadByte(unsigned char **pp) { unsigned char v = **pp; *pp = *pp + 1; return v; }
void fn_8303D950(Obj *o, unsigned char **pp, int ctx)
{
  int a = ReadInt(pp);
  int b = ReadInt(pp);
  int c = ReadInt(pp);
  unsigned char flags = ReadByte(pp);
  o->f14 = (o->f14 & 0xffffff07u) | ((flags & 0x1f) << 3);
  if (fn_8302BDE0(o, a, b, c) == 1) {
    if (o->vt->f24(o, pp, ctx) == 1) o->vt->f20(o, pp, ctx);
    o->f1c = ReadInt(pp);
  }
  o->f14 = o->f14 | 4;
}
