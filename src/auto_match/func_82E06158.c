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
typedef struct Node Node;
struct Node {
  char pad0[0x14];
  uint f14;
  char pad18[0x10];
  Node **children;
  int count;
};
extern int fn_82CFBC28(const char *a, uint b);
static __inline const char *GetName(Node *n) { return (const char *)(n->f14 & ~1); }

Node *fn_82E06158(Node *param_1,uint param_2)

{
  int i;
  Node *child;
  Node *r;
  
  if (param_2 != 0) {
    for (i = 0; i < param_1->count; i++) {
      child = param_1->children[i];
      if (GetName(child) != 0 && fn_82CFBC28(GetName(child), param_2) == 0) {
        return child;
      }
      r = fn_82E06158(child,param_2);
      if (r != 0) {
        return r;
      }
    }
  }
  return 0;
}
