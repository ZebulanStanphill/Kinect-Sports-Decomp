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
extern int fn_82FA5190();
extern int fn_8301A7B8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;
extern char lbl_8326434C[];

int fn_82FEAF18(int param_1, unsigned int *param_2)
{
  int *puVar4;
  int refs;

  RtlEnterCriticalSection(lbl_8326434C);
  puVar4 = (int *)fn_8301A7B8(lbl_832642EC, param_1);
  if (puVar4 == (int *)0) {
    RtlLeaveCriticalSection(lbl_8326434C);
    return 0xf;
  }
  *param_2 = (unsigned int)*(unsigned char *)((int)puVar4 + 0x12);
  refs = puVar4[0x17] - 1;
  puVar4[0x17] = refs;
  if (refs <= 0) {
    unsigned int g = lbl_831BC768;
    (*(code *)*puVar4)(puVar4, 0);
    fn_82FA5190(g, puVar4);
  }
  RtlLeaveCriticalSection(lbl_8326434C);
  return 1;
}
