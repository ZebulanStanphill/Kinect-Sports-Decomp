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
typedef struct SP_8224B1C0 { void *ptr; void *rc; } SP_8224B1C0;
typedef struct Obj_8224B1C0 { void *vt; int uses; int weaks; char body[1]; } Obj_8224B1C0;
extern unsigned char fn_8223AAC0(void *);
extern void fn_8224B5B8(void *, SP_8224B1C0 *, SP_8224B1C0 *, SP_8224B1C0 *, SP_8224B1C0 *, SP_8224B1C0 *);
extern unsigned int lbl_821AD588;

static void mk_(SP_8224B1C0 *dst, SP_8224B1C0 *src)
{
  void *rc = src->rc;
  void *ptr = src->ptr;
  dst->ptr = 0;
  dst->rc = 0;
  if (rc != 0 && fn_8223AAC0(rc) != 0) {
    dst->rc = rc;
    dst->ptr = ptr;
  }
}

Obj_8224B1C0 *fn_8224B1C0(Obj_8224B1C0 *o, SP_8224B1C0 *a2, SP_8224B1C0 *a3, SP_8224B1C0 *a4, SP_8224B1C0 *a5, SP_8224B1C0 *a6)
{
  struct { SP_8224B1C0 p6, p5, p4, p3, p2; } L;
  o->uses = 1;
  o->vt = &lbl_821AD588;
  o->weaks = 1;
  if (o->body != 0) {
    mk_(&L.p6, a6);
    mk_(&L.p5, a5);
    mk_(&L.p4, a4);
    mk_(&L.p3, a3);
    mk_(&L.p2, a2);
    fn_8224B5B8(o->body, &L.p2, &L.p3, &L.p4, &L.p5, &L.p6);
  }
  return o;
}
