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
typedef struct O_826FA490 O_826FA490;
typedef struct { int pad[0x78 / 4]; unsigned m78; } Q_826FA490;
typedef struct { void *p; int rest[21]; } L_826FA490;
struct O_826FA490 { struct { int pad[8]; void (*f20)(O_826FA490 *, L_826FA490 *); int pad2[14]; Q_826FA490 *(*f5c)(O_826FA490 *); } *vt; };
extern void fn_8267C498(void *);
extern void fn_826C6248(L_826FA490 *);
extern void fn_826D2B68(O_826FA490 *, L_826FA490 *, unsigned, int, int, int, int, int, int);

void fn_826FA490(O_826FA490 *a, O_826FA490 *b)
{
  L_826FA490 l;
  unsigned t;
  fn_826C6248(&l);
  a->vt->f20(a, &l);
  t = b->vt->f5c(b)->m78;
  fn_826D2B68(b, &l, t + 8, 0, 0, -1, 4, 0, 0);
  if (l.p != 0) {
    fn_8267C498(l.p);
  }
}
