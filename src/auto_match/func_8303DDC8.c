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
extern int fn_8302BBA8();

struct Obj_8303DDC8;

typedef struct Vtbl_8303DDC8 {
  void *slots[0x33];
  void (*fn)(struct Obj_8303DDC8 *, unsigned int, int);
} Vtbl_8303DDC8;

typedef struct Obj_8303DDC8 {
  Vtbl_8303DDC8 *vt;
  int pad[2];
  unsigned int id;
} Obj_8303DDC8;

typedef struct Owner_8303DDC8 {
  int pad[5];
  unsigned int flags;
  int pad2;
  unsigned int *begin;
  unsigned int *end;
} Owner_8303DDC8;

void fn_8303DDC8(Owner_8303DDC8 *param_1, Obj_8303DDC8 *param_2)
{
  unsigned int bits;
  unsigned int *it;

  it = param_1->begin;
  if (it != param_1->end) {
    do {
      if (*it == param_2->id) {
        return;
      }
      it = it + 1;
    } while (it != param_1->end);
  }
  bits = (param_1->flags >> 3) & 0x1f;
  param_2->vt->fn(param_2, bits, fn_8302BBA8());
}
