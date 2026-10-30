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


typedef struct Child_8300BE30 Child_8300BE30;
typedef struct ChildVt_8300BE30 { char pad[0x70]; int (*visit)(Child_8300BE30 *self, unsigned int *limit, int out, unsigned int *count, int depth); } ChildVt_8300BE30;
struct Child_8300BE30 { ChildVt_8300BE30 *vt; };
typedef struct Info_8300BE30 { char pad[0xc]; int id; } Info_8300BE30;
typedef struct Inner_8300BE30 { char pad[0x10]; Info_8300BE30 *info; } Inner_8300BE30;
typedef struct Slot_8300BE30 { int key; Child_8300BE30 *child; } Slot_8300BE30;
typedef struct Out_8300BE30 { int key; int id; int depth; } Out_8300BE30;
typedef struct Owner_8300BE30 {
  char pad[0x48];
  Slot_8300BE30 *begin;
  Slot_8300BE30 *end;
} Owner_8300BE30;

int fn_8300BE30(Owner_8300BE30 *param_1, unsigned int *param_2, Out_8300BE30 *param_3, unsigned int *param_4, int param_5)
{
  Slot_8300BE30 *s = param_1->begin;
  int r = 1;

  if (s != param_1->end) {
    do {
      if (*param_2 != 0) {
        param_3[*param_4].key = s->key;
        param_3[*param_4].id = ((Inner_8300BE30 *)s->child)->info->id;
        param_3[*param_4].depth = param_5;
      }
      *param_4 = *param_4 + 1;
      if (*param_2 != 0 && *param_4 >= *param_2)
        break;
      param_5 = param_5 + 1;
      r = s->child->vt->visit(s->child, param_2, (int)param_3, param_4, param_5);
      if (r != 1)
        break;
      s++;
    } while (s != param_1->end);
  }
  return r;
}
