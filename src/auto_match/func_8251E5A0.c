typedef unsigned char undefined1, byte, undefined, bool;
#define true 1
#define false 0
typedef unsigned short undefined2, ushort, word;
typedef unsigned int undefined4, uint, dword, ulong;
typedef unsigned __int64 undefined8, ulonglong, qword;
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


typedef struct Buf_8251E5A0 { int pad0; unsigned end; int pad8; unsigned short stride; unsigned short padE; unsigned short cnt; } Buf_8251E5A0;
extern void fn_82A1DD38(unsigned, unsigned, unsigned);

void fn_8251E5A0(Buf_8251E5A0 *b, unsigned idx)
{
  unsigned limit = b->end - b->stride;
  if (idx < limit) {
    fn_82A1DD38(idx, limit, b->stride);
  }
  b->cnt = b->cnt - 1;
  b->end = b->end - b->stride;
}
