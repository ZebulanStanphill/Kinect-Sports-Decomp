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

typedef struct E_82CEEAF0 { unsigned char tag; char p1[7]; short n; } E_82CEEAF0;
typedef struct S_82CEEAF0 { char p0[0xd]; unsigned char idx; } S_82CEEAF0;
extern E_82CEEAF0 *fn_82CFD4F0(unsigned);
extern void fn_82CFD5A8(void *);
extern int fn_82CEB1A8(void);

int fn_82CEEAF0(S_82CEEAF0 *s)
{
  E_82CEEAF0 *e;
  if (s->idx != 0) {
    e = fn_82CFD4F0(s->idx);
    if (e->n > 0) return e->n;
    if (e->tag == 0x19) {
      fn_82CFD5A8(s);
      return fn_82CEB1A8();
    }
  }
  return -1;
}
