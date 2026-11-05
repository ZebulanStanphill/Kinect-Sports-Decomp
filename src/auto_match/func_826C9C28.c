typedef struct Obj_826C9C28 Obj;
typedef struct Dev {
  char pad[0xb00];
  union { unsigned short h; unsigned w; } u;
} Dev;
typedef struct Cmd { int a; int b; short c; unsigned char d; signed char e; unsigned char f, g; } Cmd;
typedef struct Vt {
  void *pad[16];
  Dev *(*f40)(Obj *);
  void *pad2[0x29];
  void (*fe8)(Obj *, Cmd *);
} Vt;
struct Obj_826C9C28 { Vt *vt; };
extern unsigned char fn_826C98F8();

int fn_826C9C28(Obj *o)
{
  unsigned m;
  Cmd c;
  if (fn_826C98F8() != 0) {
    if ((o->vt->f40(o)->u.h & 1) != 0) {
      m = o->vt->f40(o)->u.w >> 0x1c & 3;
      if (m == 3 || (int)m != 1) {
        c.b = 0;
        c.c = 0;
        c.d = 0;
        c.f = 0;
        c.g = 0;
        c.a = 0x4000;
        c.e = -1;
        o->vt->fe8(o, &c);
      }
    }
  }
  return 1;
}
