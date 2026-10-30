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
typedef struct Item_827A16D8 {
  unsigned big : 1;
  unsigned pad : 31;
  int f4;
  unsigned f8;
  char pad2[0x14];
  unsigned f20;
} Item_827A16D8;
typedef struct Vec_827A16D8 { Item_827A16D8 **data; unsigned size; } Vec_827A16D8;
typedef struct Dat_827A16D8 { unsigned **data; int size; } Dat_827A16D8;
typedef struct Iter_827A16D8 { Dat_827A16D8 *v; int i; } Iter_827A16D8;
typedef struct Obj_827A16D8 { char pad[8]; int f8; char pad2[0x18]; Vec_827A16D8 vec; } Obj_827A16D8;
extern void fn_82791070(Iter_827A16D8 *, int, unsigned, unsigned *);
extern void fn_827A0BD0(Obj_827A16D8 *);

unsigned fn_827A16D8(Obj_827A16D8 *o, int idx, unsigned *out)
{
  Vec_827A16D8 *v;
  unsigned char bad;
  Item_827A16D8 *it;
  unsigned key;
  unsigned extra;
  Iter_827A16D8 r;

  if (out != 0) {
    fn_827A0BD0(o);
    v = &o->vec;
    bad = v == 0 || (unsigned)idx >= v->size || idx < 0;
    if (!bad) {
      it = v->data[idx];
      if ((unsigned char)it->big) {
        key = it->f8 & 0xffffff;
        if (key == 0xffffff) key = 0xffffffff;
      } else {
        key = it->f8;
      }
      extra = 0;
      fn_82791070(&r, o->f8, key, &extra);
      bad = r.v == 0 || r.i < 0 || r.i >= r.v->size;
      if (!bad) {
        it = v->data[idx];
        if ((unsigned char)it->big) {
          key = *(unsigned char *)&it->f8;
        } else {
          key = it->f20;
        }
        *out = key;
        return *r.v->data[r.i] + ((extra & 0x7fffffff) << 1);
      }
    }
  }
  return 0;
}
