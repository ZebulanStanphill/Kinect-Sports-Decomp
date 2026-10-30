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


typedef struct { int *a; int *b; int pad[3]; } Ent_83032E20;
typedef struct { Ent_83032E20 *begin; Ent_83032E20 *end; } Vec_83032E20;

void fn_83032E20(Vec_83032E20 *param_1)
{
  Ent_83032E20 *e;
  Ent_83032E20 *end = param_1->end;
  for (e = param_1->begin; e != end; e++) {
    if (e->b != 0) {
      (*(code *)(*(int *)e->b + 4))(e->b);
      e->b = 0;
    }
    if (e->a != 0) {
      (*(code *)(*(int *)e->a + 8))(e->a);
      e->a = 0;
    }
  }
  param_1->end = param_1->begin;
}
