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
typedef struct Node_83033EA8 Node_83033EA8;
struct Node_83033EA8 {
  Node_83033EA8 *next;
  int key;
  int val;
};

extern void fn_83032D88(void *);

int * fn_83033EA8(Node_83033EA8 **head, void **pkey)
{
  Node_83033EA8 *n;
  int *res;
  for (n = *head; n != 0; n = n->next) {
    if (n->key == (int)*pkey) {
      res = &n->val;
      if (*pkey != 0) {
        fn_83032D88(*pkey);
        *pkey = 0;
      }
      return res;
    }
  }
  if (*pkey != 0) {
    fn_83032D88(*pkey);
    *pkey = 0;
  }
  return 0;
}
