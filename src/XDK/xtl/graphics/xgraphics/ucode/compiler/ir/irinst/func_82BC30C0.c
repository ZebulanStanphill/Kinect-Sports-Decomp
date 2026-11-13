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


struct N_82BC30C0;
typedef struct { char pad[0x44]; unsigned char (*f44)(struct N_82BC30C0 *); } Vt_82BC30C0;
typedef struct N_82BC30C0 {
  Vt_82BC30C0 *vt;
  char pad[0xb4 - 4];
  int cache;
  char pad2[0xec - 0xb8];
  int next;
} N_82BC30C0;

int fn_82BC30C0(N_82BC30C0 *o)
{
  int c, nx;
  if (o->cache == 0) {
    c = o->next;
    nx = ((N_82BC30C0 *)c)->next;
    while (nx != 0) {
      if (((N_82BC30C0 *)nx)->vt->f44((N_82BC30C0 *)nx) == 0) break;
      c = ((N_82BC30C0 *)((N_82BC30C0 *)c)->next)->next;
      nx = ((N_82BC30C0 *)c)->next;
    }
    o->cache = c;
    return c;
  }
  return o->cache;
}
