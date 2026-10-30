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
typedef struct Find_82E16040 {
  int f0, f4, f8;
  unsigned int *list;
  int f10;
  int init;
} Find_82E16040;
extern int fn_82CEAC20(unsigned int);
extern int fn_82CFBBF0(int, int);
extern void fn_82E0F0E0(unsigned int *, int);

unsigned int fn_82E16040(Find_82E16040 *o, int key)
{
  int i;
  if (o->init == 0) {
    fn_82E0F0E0(o->list, o->f10);
    o->init = 1;
  }
  for (i = 0; o->list[i] != 0; i++) {
    if (fn_82CFBBF0(key, fn_82CEAC20(o->list[i])) == 0) {
      return o->list[i];
    }
  }
  return 0;
}
