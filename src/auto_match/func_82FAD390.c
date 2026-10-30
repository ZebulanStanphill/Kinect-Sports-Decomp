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


typedef struct Node_82FAD390 { int f0; struct Node_82FAD390 *next; int f8; int fc; } Node_82FAD390;
typedef struct Head_82FAD390 { int f0; Node_82FAD390 *first; int f8; } Head_82FAD390;
typedef struct Obj_82FAD390 { int f0; Head_82FAD390 *h; } Obj_82FAD390;

int fn_82FAD390(Obj_82FAD390 *o){ Head_82FAD390 *h = o->h; int acc = 0; int mx = -h->f8; Node_82FAD390 *n = h->first;
  if (n == 0) return mx;
  do {
    int t;
    acc = n->fc + acc;
    t = -(n->f8 + acc);
    if (t > mx) mx = t;
    n = n->next;
  } while (n != 0);
  return mx; }