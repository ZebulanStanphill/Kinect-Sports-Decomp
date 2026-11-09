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
extern int fn_828B1000();
extern int fn_828B1218();


/* The game code's 0.0f at 0x821CC160 is 8 zero bytes; this function passes its address as an
   8-byte buffer, so it names the constant instead of writing a literal. */
extern char ltcg_pool_0_0f[];
extern char lbl_8202E370[];
void fn_828B1538(int param_1)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x4c) + 0x98;
  fn_828B1218(lVar1,0,0,0);
  fn_828B1000(lVar1,1,ltcg_pool_0_0f,8);
  fn_828B1000(lVar1,2,lbl_8202E370,0x10);
  return;
}

