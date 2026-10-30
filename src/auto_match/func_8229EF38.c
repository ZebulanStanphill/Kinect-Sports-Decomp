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
extern int fn_822315A0(unsigned int);
extern int fn_823F2E20(unsigned int *, unsigned int);
extern unsigned int fn_8266EC60(void);
extern unsigned int fn_8266EE08(void *, unsigned int, unsigned long long, int, int, int);
extern int fn_8266F628(unsigned int, int);
extern int fn_8266F640(unsigned int, int);
extern int fn_8266F658(unsigned int, int);
extern int fn_8266F660(unsigned int, int);
extern int fn_82673A28(unsigned int, int, unsigned int *);
extern void fn_8229EFF0(void);

void fn_8229EF38(unsigned int *param_1, undefined8 param_2)
{
  unsigned int uVar1;
  struct { unsigned int a; unsigned int b; } L;

  uVar1 = fn_8266EE08(&L, fn_8266EC60(), param_2, 0, 1, 0);
  fn_823F2E20(param_1, uVar1);
  if (L.b != 0) {
    fn_822315A0(L.b);
  }
  fn_82673A28(*param_1, (int)fn_8229EFF0, param_1);
  fn_8266F660(*param_1, 1);
  fn_8266F658(*param_1, 1);
  fn_8266F640(*param_1, 1);
  fn_8266F628(*param_1, 1);
}
