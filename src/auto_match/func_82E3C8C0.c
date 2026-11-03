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
typedef struct Node_82E3C8C0 { char d[24]; struct Node_82E3C8C0 *next; } Node_82E3C8C0;
typedef struct Block_82E3C8C0 { struct Block_82E3C8C0 *next; Node_82E3C8C0 nodes[1]; } Block_82E3C8C0;
typedef struct Pool_82E3C8C0 { Node_82E3C8C0 *free; Block_82E3C8C0 *blocks; unsigned n; } Pool_82E3C8C0;
extern int fn_82A2A360();
extern Block_82E3C8C0 *fn_82A28568(int, int, unsigned);

int fn_82E3C8C0(Pool_82E3C8C0 *pool, Node_82E3C8C0 **out)
{
  if (pool->free == 0) {
    Block_82E3C8C0 *b;
    unsigned i;
    unsigned n = pool->n;
    Node_82E3C8C0 *p;
    b = fn_82A28568(fn_82A2A360(), 0, (n - 1) * sizeof(Node_82E3C8C0) + sizeof(Block_82E3C8C0));
    if (b == 0) {
      return 0x8007000e;
    }
    i = 0;
    if (i < pool->n) {
      p = b->nodes;
      while (i < pool->n) {
        Node_82E3C8C0 *q;
        if (p != 0) {
          p->next = 0;
          q = p;
        } else {
          q = 0;
        }
        i++;
        p++;
        q->next = pool->free;
        pool->free = q;
      }
    }
    b->next = pool->blocks;
    pool->blocks = b;
  }
  *out = pool->free;
  pool->free = pool->free->next;
  return 0;
}
