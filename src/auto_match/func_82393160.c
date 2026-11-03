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
typedef struct { void *px; int *rep; } SP_82393160;
typedef struct { int a, b; } B8_82393160;
extern unsigned char fn_8223AAC0(int *);
extern int fn_82365BD8(B8_82393160 *, int);
extern int fn_823933E0(void *, SP_82393160 *, SP_82393160 *, SP_82393160 *, int, SP_82393160 *, SP_82393160 *, int, int, int);
extern char lbl_821AD588[];

static __forceinline void Lock_82393160(SP_82393160 *d, SP_82393160 *s)
{
  int *rep = s->rep;
  void *px = s->px;
  d->px = 0;
  d->rep = 0;
  if (rep != 0 && fn_8223AAC0(rep) != 0) {
    d->rep = rep;
    d->px = px;
  }
}

unsigned int *fn_82393160(unsigned int *self, SP_82393160 *p2, SP_82393160 *p3, SP_82393160 *p4, int p5,
                          SP_82393160 *p6, SP_82393160 *p7, int p8, int p9, int p10)
{
  struct { SP_82393160 l[5]; B8_82393160 b[4]; } L;
  void *obj;

  self[1] = 1;
  self[0] = (unsigned int)lbl_821AD588;
  self[2] = 1;
  obj = self + 3;
  if (obj != 0) {
    Lock_82393160(&L.l[4], p7);
    Lock_82393160(&L.l[3], p6);
    Lock_82393160(&L.l[0], p4);
    Lock_82393160(&L.l[1], p3);
    Lock_82393160(&L.l[2], p2);
    fn_823933E0(obj, &L.l[2], &L.l[1], &L.l[0], fn_82365BD8(&L.b[3], p5), &L.l[3], &L.l[4],
                fn_82365BD8(&L.b[2], p8), fn_82365BD8(&L.b[1], p9), fn_82365BD8(&L.b[0], p10));
  }
  return self;
}
