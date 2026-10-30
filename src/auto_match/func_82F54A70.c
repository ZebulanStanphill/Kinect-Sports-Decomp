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
typedef struct {
  int pad0;
  unsigned char **map;
  unsigned mapsize;
  unsigned off;
  unsigned size;
} Deque_82F54A70;
extern unsigned char *fn_825B1970(unsigned int);
extern void fn_82F54838(Deque_82F54A70 *, int);

void fn_82F54A70(Deque_82F54A70 *d, unsigned char *v)
{
  unsigned off, idx;
  unsigned char *p;
  if (((d->off + d->size) & 0xf) == 0) {
    if (d->mapsize <= (d->size + 0x10) >> 4) fn_82F54838(d, 1);
  }
  off = d->off + d->size;
  idx = off >> 4;
  if (d->mapsize <= idx) idx -= d->mapsize;
  if (d->map[idx] == 0) d->map[idx] = fn_825B1970(0x10);
  p = d->map[idx] + (off & 0xf);
  if (p != 0) *p = *v;
  d->size++;
}
