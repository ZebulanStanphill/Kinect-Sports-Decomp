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
typedef struct Node_8302ECF8 {
  struct Node_8302ECF8 *next;
  int pad4;
  int f8[0x1c];
} Node_8302ECF8;

typedef struct Item_8302ECF8 {
  int a0, a4, a8, ac;
  int f10;
  int f14;
  unsigned int f18;
  int f1c[0x12];
  int f64;
} Item_8302ECF8;

void fn_8302ECF8(int param_1, unsigned int param_2, unsigned int param_3)
{
  Node_8302ECF8 *n;
  Item_8302ECF8 *it;

  n = *(Node_8302ECF8 **)(param_1 + 0x104);
  if (n != 0) {
    do {
      it = (Item_8302ECF8 *)((char *)n + 8);
      if ((param_2 == 0 || param_2 == it->f18) && (param_3 == 0 || it->f10 == param_3) && it->f64 != 0) {
        it->f64 = 0;
      }
      n = n->next;
    } while (n != 0);
  }
}
