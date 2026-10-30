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


struct B_82FBA898;
typedef struct BVT_82FBA898 { void *s0; void *s1; void (*f2)(struct B_82FBA898 *, void *); } BVT_82FBA898;
typedef struct B_82FBA898 { BVT_82FBA898 *vt; } B_82FBA898;
struct A_82FBA898;
typedef struct AVT_82FBA898 { void (*f0)(struct A_82FBA898 *, int); } AVT_82FBA898;
typedef struct A_82FBA898 { AVT_82FBA898 *vt; int pad[8]; void *m24; void *m28; } A_82FBA898;
int fn_82FBA898(A_82FBA898 *a, B_82FBA898 *b)
{
  if (a->m28 != 0) b->vt->f2(b, a->m28);
  if (a->m24 != 0) b->vt->f2(b, a->m24);
  a->vt->f0(a, 1);
  b->vt->f2(b, a);
  return 1;
}
