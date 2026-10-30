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
typedef struct Obj_82917D28 {
  char pad[0x14];
  void **items;
  unsigned count;
} Obj_82917D28;

extern int fn_82917B48(void *, int, int);

int fn_82917D28(Obj_82917D28 *o, int a)
{
  unsigned i;
  for (i = 0; i < o->count; i++) {
    int hr = fn_82917B48(o->items[i], a, 0);
    if (hr < 0) return hr;
  }
  return 0;
}
