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


typedef struct Node_8268E6F0 { char pad[0x18]; struct Node_8268E6F0 *child[2]; } Node_8268E6F0;

Node_8268E6F0 *fn_8268E6F0(Node_8268E6F0 **root, unsigned int size)
{
  Node_8268E6F0 *t = *root;
  Node_8268E6F0 *best = 0;
  unsigned int bestdiff = 0xffffffff;
  Node_8268E6F0 *rst;
  Node_8268E6F0 *rt;
  unsigned int k;
  if (t == 0) {
    return best;
  }
  rst = 0;
  k = size;
  for (;;) {
    unsigned int diff = size - (unsigned int)t;
    if ((unsigned int)t <= size && diff < bestdiff) {
      best = t;
      bestdiff = diff;
      if (diff == 0) {
        return t;
      }
    }
    rt = t->child[0];
    t = t->child[k >> 31];
    if (rt != 0 && rt != t) {
      rst = rt;
    }
    if (t == 0) {
      break;
    }
    k = k << 1;
  }
  t = rst;
  if (t == 0) {
    return best;
  }
  do {
    unsigned int diff = size - (unsigned int)t;
    if ((unsigned int)t <= size && diff < bestdiff) {
      bestdiff = diff;
      best = t;
    }
    t = t->child[t->child[1] != 0];
  } while (t != 0);
  return best;
}
