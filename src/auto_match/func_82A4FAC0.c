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


typedef struct Node_82A4FAC0 { int *item; struct Node_82A4FAC0 *next; } Node_82A4FAC0;

void fn_82A4FAC0(int param_1, int param_2)
{
  Node_82A4FAC0 *n;
  Node_82A4FAC0 *cur;
  int hr;
  int *obj;

  n = *(Node_82A4FAC0 **)(param_1 + 0x2c);
  hr = 0;
  while (n != 0 && hr >= 0) {
    cur = n;
    if (n != 0) {
      n = n->next;
      obj = *(int **)cur;
    } else {
      obj = 0;
    }
    obj = (int *)*obj;
    hr = (*(int (**)(int *, int, int))(*obj + 4))(obj, 0, param_2);
  }
}
