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
typedef struct Item_825C62E0 { void **obj; struct Item_825C62E0 *next; } Item_825C62E0;
typedef struct { int pad[2]; Item_825C62E0 *head; unsigned char flag; } List_825C62E0;
extern int fn_82619478(void *, int, float);

void fn_825C62E0(List_825C62E0 *l, int a, float x)
{
  Item_825C62E0 *it;
  it = l->head;
  l->flag = 0;
  for (; it != 0; it = it->next) {
    if (*(int *)(*(int *)((char *)it->obj + 4) + 0x190) != 0) {
      fn_82619478(it->obj, a, x);
      l->flag = 1;
    }
  }
}
