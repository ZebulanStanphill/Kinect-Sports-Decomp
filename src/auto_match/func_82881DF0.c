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
typedef struct Node_82881DF0 { int pad[4]; struct Sub_82881DF0 *sub; } Node_82881DF0;
typedef struct Sub_82881DF0 { char pad[0xb8]; int f; } Sub_82881DF0;
typedef struct Map_82881DF0 { int a; Node_82881DF0 *end; } Map_82881DF0;
extern Map_82881DF0 lbl_83212A00;
extern void fn_8289F160(Node_82881DF0 **it, Map_82881DF0 *m, int *key);
int fn_82881DF0(int key)
{
  struct { int k; Node_82881DF0 *it; } l;
  l.k = key;
  fn_8289F160(&l.it, &lbl_83212A00, &l.k);
  if (l.it != lbl_83212A00.end) {
    Sub_82881DF0 *s = l.it->sub;
    if (s != 0) return s->f;
  }
  return 0;
}
