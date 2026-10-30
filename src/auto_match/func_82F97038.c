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
struct B_82F97038;
typedef struct BVT_82F97038 {
  void *s0;
  void *s4;
  void (*f8)(struct B_82F97038 *, void *);
} BVT_82F97038;
typedef struct B_82F97038 {
  BVT_82F97038 *vt;
} B_82F97038;

struct A_82F97038;
typedef struct AVT_82F97038 {
  void (*f0)(struct A_82F97038 *, int);
} AVT_82F97038;
typedef struct A_82F97038 {
  AVT_82F97038 *vt;
  char pad[0x1c];
  void *f20;
} A_82F97038;

int fn_82F97038(A_82F97038 *a, B_82F97038 *b)
{
  if (a->f20 != 0) b->vt->f8(b, a->f20);
  a->vt->f0(a, 1);
  b->vt->f8(b, a);
  return 1;
}
