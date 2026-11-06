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
extern void fn_82817C98(int, int *);
extern int fn_82818308(void *, int, int, int *);

typedef struct {
  char pad[0xfc];
  int out;
  void *src;
} Obj_82851D70;

int fn_82851D70(Obj_82851D70 *o, int p2)
{
  int a = 0;
  int b;
  unsigned r = (unsigned)o->src;
  if (r != 0) {
    r = fn_82818308((void *)r, p2, 0, &b);
    if ((int)r == 0) {
      o->out = 0;
    } else {
      fn_82817C98(b, &a);
      r = 1;
      o->out = a;
    }
  }
  return r;
}
