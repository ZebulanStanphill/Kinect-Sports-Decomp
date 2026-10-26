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
extern float lbl_8315FAB0[];
extern int fn_82A8C620();
extern unsigned int lbl_8315FAC0;
extern unsigned int lbl_8315FAC4;

void fn_82A87300(int param_1,float *param_2,int param_3,int param_4)
{
  fn_82A8C620(param_3,param_4,0x20,param_2);
  fn_82A8C620(param_3,param_4 + 0x20,0x20,param_2 + 4);
  fn_82A8C620(param_3,param_4 + 0x40,0x20,param_2 + 5);
  fn_82A8C620(param_3,param_4 + 0x60,0x20,param_2 + 6);
  fn_82A8C620(param_3,param_4 + 0x80,6,param_2 + 10);
  fn_82A8C620(param_3,param_4 + 0x86,6,param_2 + 0xb);
  fn_82A8C620(param_3,param_4 + 0x8c,6,param_2 + 0xc);
  param_2[1] = param_2[0] * lbl_8315FAB0[0]; param_2[2] = param_2[0] * lbl_8315FAB0[1]; param_2[3] = param_2[0] * lbl_8315FAB0[2]; }
