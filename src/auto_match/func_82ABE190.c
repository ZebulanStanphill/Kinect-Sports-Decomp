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

typedef struct B_82ABE190 { int pad[2]; unsigned pad0:18; unsigned type:7; unsigned pad1:1; unsigned flag:1; unsigned rest:5; } B_82ABE190;
typedef struct A_82ABE190 { unsigned pad0:4; unsigned f:3; unsigned rest:25; int a; int b; B_82ABE190 *c; } A_82ABE190;

bool fn_82ABE190(A_82ABE190 *a)
{
  B_82ABE190 *b;
  bool s;
  return a->f != 0 && (b = a->c, s = b->type == 0x7d || b->type == 0x7c, !s) && (unsigned char)a->c->flag == 0;
}
