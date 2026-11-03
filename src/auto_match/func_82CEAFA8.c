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
typedef struct Seg_82CEAFA8 {
  int f0;
  struct Seg_82CEAFA8 *next;
  int f8;
  int fc;
  int f10;
  int f14;
  char *data;
  int size;
} Seg_82CEAFA8;

extern int fn_82CEAE80(Seg_82CEAFA8 *);
extern int fn_82CFBBF0(int, int);

char *fn_82CEAFA8(Seg_82CEAFA8 *self, int key)
{
  int i;
  int total;
  int idx;
  Seg_82CEAFA8 *s;
  char *e;

  for (i = 0; i < fn_82CEAE80(self); i++) {
    total = self->size;
    for (s = self->next; s != 0; s = s->next) {
      total = s->size + total;
    }
    s = self;
    idx = i - total;
    do {
      idx = s->size + idx;
      if (idx >= 0) {
        e = s->data + idx * 24;
        goto found;
      }
      s = s->next;
    } while (s != 0);
    e = self->data;
found:
    if (fn_82CFBBF0(*(int *)e, key) == 0) {
      return e;
    }
  }
  return 0;
}
