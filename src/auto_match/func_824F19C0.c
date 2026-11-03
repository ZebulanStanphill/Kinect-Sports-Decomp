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
typedef struct Item_824F19C0 Item_824F19C0;
typedef struct VT_824F19C0 {
  int pad[3];
  void (*f0c)(Item_824F19C0 *, int);
} VT_824F19C0;
typedef struct Key_824F19C0 {
  unsigned int v;
} Key_824F19C0;
struct Item_824F19C0 {
  VT_824F19C0 *vt;
  Key_824F19C0 *key;
};
typedef struct Node_824F19C0 {
  Item_824F19C0 *item;
  struct Node_824F19C0 *next;
} Node_824F19C0;
typedef struct Owner_824F19C0 {
  char pad[0xc];
  Node_824F19C0 *head;
} Owner_824F19C0;

extern int fn_82522ED8(Node_824F19C0 *);

int fn_824F19C0(Owner_824F19C0 *self, unsigned int *keyp)
{
  Node_824F19C0 *cur;
  Node_824F19C0 *prev;
  Item_824F19C0 *item;

  cur = self->head;
  prev = 0;
  if (cur != 0) {
    do {
      if (cur->item->key->v == *keyp) {
        if (prev != 0) {
          prev->next = cur->next;
        } else {
          self->head = cur->next;
        }
        item = cur->item;
        if (item != 0) {
          item->vt->f0c(item, 1);
        }
        fn_82522ED8(cur);
        return 1;
      }
      prev = cur;
      cur = cur->next;
    } while (cur != 0);
  }
  return 0;
}
