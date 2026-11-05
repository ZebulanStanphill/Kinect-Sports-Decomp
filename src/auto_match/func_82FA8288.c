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
extern void *fn_82FF0838(void *, int, int, int, int, int, int, void *, unsigned char, int);
extern int fn_82FAC568(void *, int);
extern int lbl_8216CB88;
extern int lbl_8216CB90;
extern int lbl_8216CBCC;
extern int lbl_8217D264;

int *fn_82FA8288(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                 int param_7, int param_8, int param_9, int param_10, __int64 param_11,
                 int param_12, int param_13)
{
  fn_82FF0838(param_1, param_3, param_4, param_5, param_6, param_8, param_9, &param_11, 0, param_13);
  fn_82FAC568(param_1 + 0x62, param_2);
  *param_1 = (int)&lbl_8216CB90;
  param_1[1] = (int)&lbl_8216CB88;
  param_1[0x66] = param_7;
  *(unsigned char *)(param_1 + 0x67) = 0;
  param_1[3] = (int)&lbl_8217D264;
  param_1[0x62] = (int)&lbl_8216CBCC;
  param_1[0x65] = -1;
  return param_1;
}
