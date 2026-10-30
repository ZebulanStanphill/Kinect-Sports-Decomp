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


typedef int (*Pred_82822510)(void *, int);
typedef struct Node_82822510 {
  struct Node_82822510 *first;
  struct Node_82822510 *next;
} Node_82822510;

void fn_82822510(Node_82822510 *h, Pred_82822510 pred, int arg, Node_82822510 **out)
{
  Node_82822510 *n = h;
  if (h->first == 0) {
    n = h->next;
  }
  *out = 0;
  while (n != 0) {
    if (pred(n, arg) != 0) {
      *out = n;
      return;
    }
    n = n->next;
  }
}
