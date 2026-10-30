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
extern int fn_82FA79C0();
extern int fn_82FE7CA0();
extern int fn_82FE7CB0();
extern int fn_82FE7CC0();
extern int fn_82FE7CD0();


extern int fn_82FA7340();

extern int fn_82FA7610();

extern int fn_82FAC4B8();

extern int fn_82FA6E98();

undefined8 fn_82FA7B00(void)

{
  uint iVar1;
  
  iVar1 = fn_82FA79C0();
  if (iVar1 != 0) {
    fn_82FE7CA0(fn_82FA7340);
    fn_82FE7CB0(fn_82FA7610);
    fn_82FE7CC0(fn_82FAC4B8);
    fn_82FE7CD0(fn_82FA6E98);
    return 1;
  }
  return 2;
}

