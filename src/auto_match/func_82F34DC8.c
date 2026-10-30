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


struct O_82F34DC8;
typedef struct VT_82F34DC8 { char p0[0x40]; int (*f40)(struct O_82F34DC8 *, int, unsigned); } VT_82F34DC8;
typedef struct O_82F34DC8 { VT_82F34DC8 *vt; char p4[8]; void *f0c; char p10[0x12c]; int cnt; } O_82F34DC8;

int fn_82F34DC8(O_82F34DC8 *o, unsigned p)
{
  int hr;
  if (o->f0c == 0) {
    hr = 0xC00D36B6;
  } else if (p == 0) {
    hr = 0x80070057;
  } else {
    int n = o->cnt + 1; o->cnt = n; hr = o->vt->f40(o, n - 1, p);
    if (hr < 0) { o->cnt = o->cnt - 1; }
  }
  return hr;
}
