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
struct Item_82C11AE0;
typedef struct Item_82C11AE0 {
  char pad[0x2c];
  void *f2c;
  char pad2[0x38 - 0x30];
  struct Item_82C11AE0 *prev;
  struct Item_82C11AE0 *next;
} Item_82C11AE0;
typedef struct {
  char pad[0x14];
  int count;
  Item_82C11AE0 *head;
  int f1c;
  int f20;
  int f24;
} Cont_82C11AE0;
typedef struct { char pad[0x10]; int (*f10)(void *); } S1_82C11AE0;
typedef struct { char pad[0x28]; int (*f28)(void *); } S2_82C11AE0;
typedef struct {
  int f0;
  S1_82C11AE0 *s1;
  char pad[0x18 - 8];
  S2_82C11AE0 *s2;
  char pad2[0x20 - 0x1c];
  unsigned __int64 f20;
  int f28;
  int f2c;
  int f30;
  int f34;
  unsigned __int64 f38;
  char pad3[0x48 - 0x40];
  int h;
  char pad4[0x60 - 0x4c];
  unsigned char f60;
} Obj_82C11AE0;
extern int fn_82C10B28(int, int, void *);
extern int fn_82C10F68(int, unsigned *, Cont_82C11AE0 **, unsigned char *);
extern int fn_82C10FD0(int, unsigned, Cont_82C11AE0 **, unsigned char *);
extern void fn_82C11038(int, unsigned);

void fn_82C11AE0(Obj_82C11AE0 *o)
{
  int hr;
  unsigned char flag;
  Cont_82C11AE0 *list;
  Item_82C11AE0 *cur;
  unsigned x;

  cur = 0;
  x = 0;
  list = 0;
  flag = 0;
  hr = o->s1->f10(o->s1);
  if (hr >= 0 && (hr = o->s2->f28(o->s2)) >= 0) {
    hr = fn_82C10F68(o->h, &x, &list, &flag);
    if (hr != 0x80500016) {
      if (hr < 0) return;
      do {
        if (hr < 0) return;
        cur = list->head;
        while (cur != 0) {
          if (cur->next != 0) cur->next->prev = 0;
          list->head = cur->next;
          if (cur->f2c != 0) {
            hr = fn_82C10B28(o->f0, 0x20, cur->f2c);
            if (hr < 0) return;
            hr = fn_82C10B28(o->f0, 0x20, &cur->f2c);
            if (hr < 0) return;
          }
          hr = fn_82C10B28(o->f0, 0x20, &cur);
          if (hr < 0) return;
          list->count = list->count - 1;
          cur = list->head;
        }
        list->count = 0;
        list->f20 = 0;
        list->f20 = 0;
        list->f24 = 1;
        list->f1c = 0;
        list->head = 0;
        hr = fn_82C10FD0(o->h, x, &list, &flag);
      } while (hr != 0x80500016);
    }
    fn_82C11038(o->h, x);
    o->f20 = 0;
    o->f30 = 0;
    o->f38 = 0;
    o->f60 = 0;
  }
}
