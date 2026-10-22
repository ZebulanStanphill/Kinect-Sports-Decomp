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
typedef struct Node {
  int a0;
  struct Node *next;
} Node;

extern int fn_82869768(int a, Node *n, int b, unsigned int *c, int d);
extern int fn_828764E8(int a, int b, int c, unsigned int *d, unsigned char *e, int f);

int fn_82869D30(int param_1, int param_2, int param_3, unsigned int *param_4,
                unsigned char *param_5, int param_6)
{
  Node *n;

  if (param_3 == 0 && param_4 != 0 && *param_4 == 0) {
    for (n = *(Node **)(param_1 + 0x424); n != 0; n = n->next) {
      if (fn_82869768(param_1, n, param_2, param_4, param_6) == 1) {
        *param_5 = 1;
        return 1;
      }
    }
  }
  return fn_828764E8(param_1, param_2, param_3, param_4, param_5, param_6);
}
