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
extern int fn_82543078();
extern int fn_82543198();
extern int fn_82543308();
extern int fn_825437D8();
extern int fn_82543940();
extern int fn_82639F78();


typedef struct Entry {
  int kind;
  uint *range;
  uint a;
  uint b;
  uint c;
  int pad[3];
} Entry;

typedef struct Group {
  int x0;
  int x4;
  uint count;
  Entry *entries;
} Group;

typedef struct Slot {
  Group *groups;
  uint count;
} Slot;

typedef struct Ctx {
  uint dev;
  int pad[4];
  uint a;
  uint c;
} Ctx;

void fn_82542F28(Ctx *param_1,int param_2,int param_3,undefined8 param_4)

{
  uint i;
  uint j;
  Group *g;
  Entry *e;

  for (i = 0; i < (*(Slot **)(param_2 + 0x14))[param_3].count; i++) {
    g = &(*(Slot **)(param_2 + 0x14))[param_3].groups[i];
    if (fn_82543078(param_1,param_2,g) != 0) {
      for (j = 0; j < g->count; j++) {
        e = &g->entries[j];
        if (e->kind == -1) {
          if (param_1->c != e->c) {
            fn_825437D8(param_1,param_2,e->c,param_3,param_4);
            param_1->c = e->c;
          }
          if (param_1->a != e->a) {
            fn_82543308(param_1,param_2,e->a);
            param_1->a = e->a;
          }
          fn_82639F78(param_1->dev,0,e->range[0],0,e->range[1],1);
          fn_82543940(param_1,e->b);
        }
        else {
          fn_82543198(param_1,param_2,e,param_3);
        }
      }
    }
  }
  return;
}
