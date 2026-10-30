typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
struct Obj_822B4D90;
typedef struct {
  char pad[16];
  void (*f10)(struct Obj_822B4D90 *);
  void (*f14)(struct Obj_822B4D90 *, void *);
  void (*f18)(struct Obj_822B4D90 *);
} Vt_822B4D90;
typedef struct Obj_822B4D90 { Vt_822B4D90 *vt; } Obj_822B4D90;
typedef struct { Obj_822B4D90 *p; void *rc; } SP_822B4D90;
typedef struct { char pad[0x40]; unsigned f40; } Self_822B4D90;
extern SP_822B4D90 *fn_8247B210(SP_822B4D90 *, Self_822B4D90 *, unsigned);
extern void fn_822315A0(void *);

void fn_822B4D90(Self_822B4D90 *s, unsigned a, unsigned b)
{
  SP_822B4D90 t1, t2, t3;
  void *rc;
  if (a != 0) {
    SP_822B4D90 *r = fn_8247B210(&t1, s, a);
    r->p->vt->f18(r->p);
    if (t1.rc != 0) fn_822315A0(t1.rc);
  }
  if (b != 0) {
    if (s->f40 == 0) {
      SP_822B4D90 *r = fn_8247B210(&t2, s, b);
      r->p->vt->f10(r->p);
      rc = t2.rc;
    } else {
      SP_822B4D90 *r = fn_8247B210(&t3, s, b);
      r->p->vt->f14(r->p, &s->f40);
      rc = t3.rc;
    }
    if (rc != 0) fn_822315A0(rc);
  }
}
