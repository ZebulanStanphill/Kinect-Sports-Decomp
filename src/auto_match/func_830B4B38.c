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
extern void *fn_8265C9E0(int);
extern void *fn_82E1BFA0(void *);
extern void fn_82E1C280(void *, const char *);
extern void fn_830B4CB0(void *, int);

typedef struct Obj_830B4B38 { int pad; int f4; void *f8; } Obj_830B4B38;

void *fn_830B4B38(Obj_830B4B38 *o)
{
  if (o->f8 == 0) {
    void *mem = fn_8265C9E0(0x80);
    void *n;
    if (mem != 0) {
      n = fn_82E1BFA0(mem);
    } else {
      n = 0;
    }
    fn_830B4CB0(n, o->f4);
    fn_82E1C280(n, "VINCE");
    o->f8 = n;
  }
  return o->f8;
}
