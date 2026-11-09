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
typedef struct Elem_8225C168 {
  int value;
} Elem_8225C168;

typedef struct Vec_8225C168 {
  Elem_8225C168 *first;
  Elem_8225C168 *last;
  Elem_8225C168 *end;
} Vec_8225C168;

extern void fn_8225C238(Vec_8225C168 *);

void fn_8225C168(Vec_8225C168 *v, Elem_8225C168 *val)
{
  Elem_8225C168 *l = v->last;
  unsigned char inside;
  if (val < l && v->first <= val)
    inside = 1;
  else
    inside = 0;
  if (inside) {
    int idx = val - v->first;
    if (l == v->end)
      fn_8225C238(v);
    if (v->last != 0)
      *v->last = v->first[idx];
  } else {
    if (l == v->end)
      fn_8225C238(v);
    if (v->last != 0)
      *v->last = *val;
  }
  v->last = v->last + 1;
}
