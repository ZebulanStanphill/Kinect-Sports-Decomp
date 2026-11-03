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
extern void *RtlCreateHeap(unsigned, void *, unsigned, unsigned, void *, void *);
extern void fn_82A2A370(int);

void *fn_82A265A8(unsigned flags, unsigned reserve, unsigned commit)
{
  unsigned f = flags & 5 | 0x1000;
  void *h;
  if (commit < 0x10000) {
    if (commit == 0) {
      f |= 2;
      goto create;
    }
    commit = 0x10000;
  }
  if (reserve > commit)
    commit = reserve;
create:
  h = RtlCreateHeap(f, 0, commit, reserve, 0, 0);
  if (h == 0)
    fn_82A2A370(8);
  return h;
}
