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
extern void fn_825293A8(unsigned int);
void fn_82529488(unsigned int node, int flag, int ctx)
{
  while (node != 0) {
    unsigned int o;
    int left = *(int *)(node + 8);
    if (left != 0) {
      fn_82529488(left, flag, ctx);
    }
    o = node - 0x40;
    node = *(int *)(node + 4);
    if (flag == 0) {
      fn_825293A8(o);
    } else {
      unsigned int m = *(unsigned int *)(o + 0xb20);
      if ((*(unsigned int *)(ctx + 0xb20) & m) != 0) {
        if (*(unsigned int *)(o + 0xb1c) != 0 || m == 0) {
          fn_825293A8(o);
        }
      }
    }
  }
}
