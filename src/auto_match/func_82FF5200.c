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


typedef struct Node_82FF5200 { struct Node_82FF5200 *next; int pad[1]; unsigned key; int pad2; int value; } Node_82FF5200;

int *fn_82FF5200(int *table, unsigned key)
{
  Node_82FF5200 *n = ((Node_82FF5200 **)table)[key % 31 + 1];

  while (n != 0) {
    if (n->key == key) return &n->value;
    n = n->next;
  }
  return 0;
}
