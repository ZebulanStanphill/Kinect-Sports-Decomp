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
extern void *fn_822ABA88(void *, unsigned int);
extern void fn_822AF138(int, int);
extern unsigned int fn_8288B760(void *);

typedef struct Elem_8239D2B0 {
  int pad0[2];
  unsigned int count;
} Elem_8239D2B0;
typedef struct Grp_8239D2B0 {
  Elem_8239D2B0 **arr;
  int pad[3];
  int idx;
} Grp_8239D2B0;
typedef struct Item_8239D2B0 {
  char pad0[0x110];
  int f110;
  char pad114[0x168 - 0x114];
  void *f168;
  int f16c;
} Item_8239D2B0;
typedef struct Vec_8239D2B0 {
  int *begin;
  int *end;
} Vec_8239D2B0;
typedef struct Obj_8239D2B0 {
  int pad[2];
  Vec_8239D2B0 *vec;
} Obj_8239D2B0;

void fn_8239D2B0(Obj_8239D2B0 *o)
{
  Vec_8239D2B0 *v = o->vec;
  int i = 0;
  if ((((int)v->end - (int)v->begin) & ~3) > 0) {
    int off = 0;
    do {
      unsigned int j = 0;
      Grp_8239D2B0 *g = *(Grp_8239D2B0 **)((char *)v->begin + off);
      if (g->arr[g->idx]->count > 0) {
        do {
          Item_8239D2B0 *it = (Item_8239D2B0 *)fn_822ABA88(g->arr[g->idx], j);
          int r;
          if (it->f168 != 0) {
            r = (unsigned char)fn_8288B760(it->f168);
          } else {
            r = it->f16c;
          }
          if (r != 0) {
            fn_822AF138(it->f110, 2);
          }
          j++;
        } while (j < g->arr[g->idx]->count);
      }
      v = o->vec;
      i++;
      off += 4;
    } while (i < v->end - v->begin);
  }
}
