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


typedef struct List_8299B3D0 { int pad; unsigned int count; int *items; } List_8299B3D0;
typedef struct Ent_8299B3D0 { int pad[3]; int a; int b; int pad2[9]; unsigned int key; } Ent_8299B3D0;
typedef struct Tab_8299B3D0 { int pad[5]; Ent_8299B3D0 **ents; } Tab_8299B3D0;
typedef struct Src_8299B3D0 { int pad[3]; int a; int b; } Src_8299B3D0;

unsigned int fn_8299B3D0(Tab_8299B3D0 *t, List_8299B3D0 **lists, unsigned int start, unsigned int end,
                         unsigned int key, Src_8299B3D0 *src, int *found)
{
  unsigned int ret = 0;
  unsigned int i;
  unsigned int j;
  *found = 0;
  for (i = start; i < end; i++) {
    List_8299B3D0 *l = lists[i];
    if (l != 0) {
      for (j = 0; j < l->count; j++) {
        unsigned int idx = l->items[j];
        Ent_8299B3D0 *e = t->ents[idx];
        if (idx == key || e->key == key) {
          e->a = src->a;
          e->b = src->b;
          *found = 1;
          ret = i;
        }
      }
    }
  }
  return ret;
}
