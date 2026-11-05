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
extern void fn_82681898(int, double);
extern unsigned char fn_82695468(int, int);
extern void fn_826954C0(int, const char *, int, int);

typedef struct { int pad[0xf]; int year; } Date_8273ACA0;

void fn_8273ACA0(int param_1)
{
  Date_8273ACA0 *d;

  if (fn_82695468(param_1, 0x23) == 0) {
    fn_826954C0(param_1, "Date", 0, 0);
  }
  else {
    d = (Date_8273ACA0 *)(*(char **)(param_1 + 8));
    d = d ? (Date_8273ACA0 *)((char *)d - 0x10) : 0;
    fn_82681898(*(int *)(param_1 + 4), (double)(d->year - 0x76c));
  }
}
