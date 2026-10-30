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
typedef int (*Fn_82C107F8)(int, int, int, int *, int *);
typedef struct Ent_82C107F8 { int used; Fn_82C107F8 fn; int ctx; } Ent_82C107F8;

int fn_82C107F8(Ent_82C107F8 *tbl, int idx, int a, int b)
{
  int one = 0;
  struct { int first; int second; int third; int fourth; } pair;
  Ent_82C107F8 *e;

  pair.first = 0;
  pair.second = 0;
  if (idx >= 0 && idx < 0x7f) {
    e = &tbl[idx];
    if (e->used == 0) {
      return (int)0x805000b6;
    }
    return e->fn(e->ctx, a, b, &one, &pair.first);
  }
  return (int)0x80070057;
}
