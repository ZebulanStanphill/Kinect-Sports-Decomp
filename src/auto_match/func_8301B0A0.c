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
typedef struct Val_8301B0A0 { char pad[0x5c]; int f5c; } Val_8301B0A0;
typedef struct Node_8301B0A0 { struct Node_8301B0A0 *next; unsigned int key; Val_8301B0A0 *val; } Node_8301B0A0;
typedef struct It_8301B0A0 { Node_8301B0A0 **buckets; unsigned int idx; Node_8301B0A0 *node; } It_8301B0A0;
typedef struct Vec_8301B0A0 { unsigned int *first; unsigned int *last; unsigned int *end; } Vec_8301B0A0;
extern void fn_83016CE8(It_8301B0A0 *, void *);
extern unsigned char fn_8301A5D0(Vec_8301B0A0 *, int);

int fn_8301B0A0(char *param_1, Vec_8301B0A0 *v)
{
  It_8301B0A0 it;
  It_8301B0A0 j;
  unsigned int key;
  unsigned int size;
  unsigned int *p;
  fn_83016CE8(&it, param_1 + 0x24);
  j.node = it.node;
  if (j.node == 0) return 1;
  j.buckets = it.buckets;
  j.idx = it.idx;
joined:
  if (j.node == 0) {
    return 1;
  }
  while (j.node->val->f5c <= 1) {
next:
    j.node = j.node->next;
    while (j.node == 0) {
      j.idx++;
      if (j.idx >= 0xc1) goto joined;
      j.node = j.buckets[j.idx];
    }
  }
  key = j.node->key;
  size = v->last - v->first;
  if ((size < (unsigned int)v->end || fn_8301A5D0(v, 0x20) != 0) && size < (unsigned int)v->end) {
    p = v->last;
    v->last = p + 1;
    if (p != 0) {
      *p = key;
      goto next;
    }
  }
  return 0x34;
}
