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
typedef struct { void *px; int *rep; } SP_8224B320;
extern unsigned char fn_8223AAC0(int *);
extern int fn_8224B7A0(void *, SP_8224B320 *, SP_8224B320 *, SP_8224B320 *, SP_8224B320 *, SP_8224B320 *, SP_8224B320 *);
extern char lbl_821AD588[];

static __forceinline void Lock_8224B320(SP_8224B320 *d, SP_8224B320 *s)
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

unsigned int *fn_8224B320(unsigned int *self, SP_8224B320 *p2, SP_8224B320 *p3, SP_8224B320 *p4,
                          SP_8224B320 *p5, SP_8224B320 *p6, SP_8224B320 *p7)
{
  SP_8224B320 l[6];
  void *obj;

  self[1] = 1;
  self[0] = (unsigned int)lbl_821AD588;
  self[2] = 1;
  obj = self + 3;
  if (obj != 0) {
    Lock_8224B320(&l[0], p7);
    Lock_8224B320(&l[1], p6);
    Lock_8224B320(&l[2], p5);
    Lock_8224B320(&l[3], p4);
    Lock_8224B320(&l[4], p3);
    Lock_8224B320(&l[5], p2);
    fn_8224B7A0(obj, &l[5], &l[4], &l[3], &l[2], &l[1], &l[0]);
  }
  return self;
}
