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


typedef struct Node_82E2DD28 { int pad0; int pad1; struct Node_82E2DD28 *next; int pad3; } Node_82E2DD28;
typedef struct Block_82E2DD28 { struct Block_82E2DD28 *next; Node_82E2DD28 nodes[1]; } Block_82E2DD28;
typedef struct Pool_82E2DD28 { Node_82E2DD28 *free; Block_82E2DD28 *blocks; unsigned count; } Pool_82E2DD28;
extern void *fn_82A2A360(void);
extern void *fn_82A28568(void *, int, unsigned);
static __forceinline unsigned pcount(Pool_82E2DD28 *p) { return p->count; }
int fn_82E2DD28(Pool_82E2DD28 *pool, Node_82E2DD28 **out)
{
  Block_82E2DD28 *blk;
  Node_82E2DD28 *n;
  unsigned i;
  if (pool->free == 0) {
    unsigned cnt = pool->count;
    blk = (Block_82E2DD28 *)fn_82A28568(fn_82A2A360(), 0, (cnt - 1) * 16 + 0x14);
    if (blk == 0) return (int)0x8007000e;
    for (i = 0; i < pcount(pool); i++) {
      n = blk->nodes + i;
      n->next = pool->free;
      pool->free = n;
    }
    blk->next = pool->blocks;
    pool->blocks = blk;
  }
  *out = pool->free;
  pool->free = pool->free->next;
  return 0;
}
