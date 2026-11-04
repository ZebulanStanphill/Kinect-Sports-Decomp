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
extern unsigned char fn_82414F58(void *);
typedef struct Wa { unsigned v; unsigned pad; struct Wa2 { unsigned v; unsigned pad; unsigned *p; } *p; } Wa;
typedef struct Wb { unsigned v; unsigned pad; unsigned *p; } Wb;
typedef struct { int pad; Wa *a; Wb *b; } T;
unsigned fn_82415090(T *s)
{
  unsigned char bVar2;
  bVar2 = s->a != 0 && s->b != 0 && s->b->v + s->a->v == 10;
  if (bVar2) {
    if (fn_82414F58(s) != 0) return *s->b->p + 10;
  }
  bVar2 = s->a != 0 && s->a->v == 10;
  if (bVar2) {
    if (fn_82414F58(s) != 0) {
      return *s->a->p->p + s->a->p->v + 10;
    }
  }
  if (fn_82414F58(s) != 0) return s->b->v + s->a->v;
  return 0;
}
