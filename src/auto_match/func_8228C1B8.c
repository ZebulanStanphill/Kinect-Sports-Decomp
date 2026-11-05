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
typedef struct { float x, y, z; } V3_8228C1B8;
typedef struct Node_8228C1B8 { struct Node_8228C1B8 *next; int p4; char *item; } Node_8228C1B8;
typedef struct List_8228C1B8 { Node_8228C1B8 *head; } List_8228C1B8;
extern void fn_82266158(char *);
extern void fn_8252A1B0(unsigned, V3_8228C1B8 *, int);
extern float lbl_821CC160;

void fn_8228C1B8(char *param_1, float param_2)
{
  Node_8228C1B8 *n;
  Node_8228C1B8 *end;
  char *item;
  unsigned h;
  V3_8228C1B8 a;
  V3_8228C1B8 b;

  end = (*(List_8228C1B8 **)(param_1 + 0x80))->head;
  for (n = end->next; n != end; n = n->next) {
    item = n->item;
    if (*(unsigned *)(item + 0x40) == 0) goto found;
  }
  item = 0;
found:
  if (item != 0) {
    fn_82266158(item);
    h = *(unsigned *)(item + 0xdc);
    if (h != 0 &&
        (*(int *)(item + 0x52c) == 3 || *(int *)(item + 0x52c) == 4)) {
      a.y = param_2;
      a.x = lbl_821CC160;
      a.z = lbl_821CC160;
      b = a;
      fn_8252A1B0(h, &b, 0);
    }
  }
}
