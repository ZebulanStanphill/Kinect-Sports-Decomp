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


typedef struct N_82B172B0 {
  char pad[0x34];
  struct N_82B172B0 *parent;
  struct N_82B172B0 *f38;
  struct N_82B172B0 *f3c;
} N_82B172B0;
typedef struct { N_82B172B0 *head; int pad; unsigned char flag; } It_82B172B0;

N_82B172B0 *fn_82B172B0(It_82B172B0 *it, N_82B172B0 *n)
{
  N_82B172B0 *r;

  r = 0;
  if (it->flag != 0 && (r = n->f3c, r == 0)) {
    it->flag = 0;
    n = n->parent->f38;
  }
  if (it->flag == 0) {
    r = n->f38;
    if (r == 0) {
      do {
        while (1) {
          if (n == it->head) return 0;
          r = n->f3c;
          if (r != 0) break;
          n = n->parent;
        }
        n = r;
        r = r->f38;
      } while (r == 0);
    }
    it->flag = 1;
  }
  return r;
}
