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
extern float lbl_82006848;
extern char *fn_82CE6150(char *, int, float);
char *fn_82D93B58(char *param_1, int param_2)
{ char b[2]; char *p; char r; float d = lbl_82006848;
  p = fn_82CE6150(&b[0], param_2 + 0x20, d);
  if (*p == 0 || *fn_82CE6150(&b[1], param_2 + 0x60, d) == 0 || (*(char *)(param_2 + 0xa2) != 0 && *(char *)(param_2 + 0xc2) == 0)) r = 0; else r = 1;
  *param_1 = r; return param_1; }
