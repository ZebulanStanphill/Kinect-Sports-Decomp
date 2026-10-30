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
extern void fn_83001F78(unsigned, void *);

typedef struct { unsigned key; unsigned f4; unsigned f8; unsigned fc; unsigned f10; unsigned f14; } Elem_83035478;
typedef struct { Elem_83035478 *first; Elem_83035478 *last; } Vec_83035478;
typedef struct { char pad[0x10]; Vec_83035478 v; } Obj_83035478;

static void find_83035478(Vec_83035478 *v, Elem_83035478 **out, unsigned key)
{
  Elem_83035478 *e;
  for (e = v->first; e != v->last; e++) {
    if (e->key == key) break;
  }
  *out = e;
}

void fn_83035478(Obj_83035478 *param_1, unsigned param_2)
{
  Elem_83035478 *e;
  unsigned *q;
  unsigned t;

  find_83035478(&param_1->v, &e, param_2);
  if (e != param_1->v.last) {
    q = &e->f4;
    t = q[1];
    if (t != 0) {
      fn_83001F78(t, param_1);
      q[1] = 0;
    }
  }
}
