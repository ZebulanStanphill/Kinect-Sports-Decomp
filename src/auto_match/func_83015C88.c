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
typedef struct Node_83015C88 { struct Node_83015C88 *next; unsigned key; int value; } Node_83015C88;

int *fn_830150D0(int *table, unsigned key, unsigned bucket);

static __forceinline int *Find_83015C88(int *table, unsigned key, unsigned bucket)
{
  Node_83015C88 *n = ((Node_83015C88 **)table)[bucket + 1];

  while (n != 0) {
    if (n->key == key) return &n->value;
    n = n->next;
  }
  return 0;
}

int *fn_83015C88(int *table, unsigned key)
{
  unsigned bucket = key % 31;
  int *p = Find_83015C88(table, key, bucket);
  if (p != 0) return p;
  return fn_830150D0(table, key, bucket);
}
