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
extern int fn_82275530();
extern int fn_822755F8();
extern int fn_82275698();
extern int fn_822757E0();
extern void fn_82275470(int first,int last,int n,int buf);

void fn_82275470(int first,int last,int n,int buf)

{
  int half;
  int mid;

  if (n <= 0x20) {
    fn_822755F8(first,last,n,buf);
  }
  else {
    half = (n + 1) / 2;
    mid = first + half * 8;
    if (half <= fn_82275530(buf)) {
      fn_82275698(first,mid,half,buf);
      n = n - half;
      fn_82275698(mid,last,n,buf);
    }
    else {
      fn_82275470(first,mid,half,buf);
      n = n - half;
      fn_82275470(mid,last,n,buf);
    }
    fn_822757E0(first,mid,last,half,n,buf);
  }
}
