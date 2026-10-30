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
typedef struct { int ptr; unsigned int rc; } SPtr_8246FA68;
extern void fn_822315A0(unsigned int);
extern void fn_82356F98(SPtr_8246FA68 *);
extern void fn_823F2E20(char *, SPtr_8246FA68 *);
extern char *lbl_832766D4;

int fn_8246FA68(int *param_1)
{
  int uVar1;
  SPtr_8246FA68 sp;

  uVar1 = *(int *)(lbl_832766D4 + 0x308);
  *(int *)(lbl_832766D4 + 0x308) = 0;
  fn_82356F98(&sp);
  fn_823F2E20(lbl_832766D4 + 0x300,&sp);
  if (sp.rc != 0) {
    fn_822315A0(sp.rc);
  }
  fn_82356F98(&sp);
  fn_823F2E20(lbl_832766D4 + 0x310,&sp);
  if (sp.rc != 0) {
    fn_822315A0(sp.rc);
  }
  *param_1 = 1;
  return uVar1;
}
