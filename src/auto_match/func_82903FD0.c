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
extern void *fn_8265C940(unsigned int, unsigned int);
typedef struct Blk_82903FD0 { struct Blk_82903FD0 *next; int size; } Blk_82903FD0;
typedef struct Arena_82903FD0 { char pad[0x90]; Blk_82903FD0 *cur; unsigned int left; } Arena_82903FD0;

Blk_82903FD0 *fn_82903FD0(Arena_82903FD0 *a, int n)
{
  Blk_82903FD0 *b;
  Blk_82903FD0 *m;
  unsigned int total = n + 2;
  unsigned int cap;

  if (a->left < total) {
    cap = total;
    if (total < 0x2000) {
      cap = 0x2000;
    }
    m = (Blk_82903FD0 *)fn_8265C940(cap << 2, 0x24810000);
    if (m == 0) {
      return 0;
    }
    b = m;
    b->next = a->cur;
    b->size = -a->left;
    a->cur = b;
    a->left = cap;
  }
  else {
    b = a->cur;
    b->next = b;
    b->size = a->left;
  }
  a->cur = (Blk_82903FD0 *)((char *)a->cur + total * 4);
  a->left = a->left - total;
  return b + 1;
}
