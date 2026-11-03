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
typedef struct Item_825C5198 Item_825C5198;
typedef struct VT_825C5198 {
  int pad[3];
  void (*f0c)(Item_825C5198 *, int);
} VT_825C5198;
typedef struct Key_825C5198 {
  unsigned int v;
} Key_825C5198;
struct Item_825C5198 {
  VT_825C5198 *vt;
  Key_825C5198 *key;
};
typedef struct Node_825C5198 {
  Item_825C5198 *item;
  struct Node_825C5198 *next;
} Node_825C5198;
typedef struct Owner_825C5198 {
  char pad[8];
  Node_825C5198 *head;
} Owner_825C5198;

extern int fn_82522ED8(Node_825C5198 *);

int fn_825C5198(Owner_825C5198 *self, unsigned int *keyp)
{
  Node_825C5198 *cur;
  Node_825C5198 *prev;
  Item_825C5198 *item;

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
