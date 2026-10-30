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
typedef struct Node_82FFE7A0 { struct Node_82FFE7A0 *next; unsigned int key; int value; } Node_82FFE7A0;
typedef struct Hash_82FFE7A0 { int heap; Node_82FFE7A0 *buckets[193]; int count; } Hash_82FFE7A0;
extern int *fn_82FFE528(Hash_82FFE7A0 *h, unsigned int key, unsigned int index);

int *fn_82FFE7A0(Hash_82FFE7A0 *h, unsigned int key, unsigned char *found)
{
  unsigned int i = key % 193;
  Node_82FFE7A0 *n;
  int *v;

  for (n = h->buckets[i]; n != 0; n = n->next) {
    if (n->key == key) {
      break;
    }
  }
  v = n ? &n->value : 0;
  if (v != 0) {
    *found = 1;
    return v;
  }
  *found = 0;
  return fn_82FFE528(h, key, i);
}
