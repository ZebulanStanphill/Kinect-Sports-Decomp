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
extern int fn_822315A0();
extern int fn_82292450();
extern int fn_8229AA08();
extern int fn_8229AE10();
extern int fn_82526C70();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int lbl_821AA7BC;

typedef struct { int a; unsigned int b; int c; int d; } Tmp_82293568;

unsigned int *fn_82293568(unsigned int *param_1, unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *iVar3;
  unsigned int *puVar4;
  int i;
  char buf[0x20];
  Tmp_82293568 tmp;

  *param_1 = (unsigned int)&lbl_821AA7BC;
  i = 0;
  do {
    fn_82526C70(buf, 0x20, "avatar_head_team%d", i);
    puVar4 = (unsigned int *)fn_8229AE10(&tmp, param_1);
    uVar1 = *puVar4;
    iVar2 = fn_8266F6B8();
    fn_826728E8(uVar1, buf, iVar2);
    if (tmp.b != 0) {
      fn_822315A0(tmp.b);
    }
    i++;
  } while (i < 8);
  iVar3 = (unsigned int *)param_1[0x615];
  if (iVar3 != 0) {
    if (iVar3[3] != 0) {
      fn_822315A0(iVar3[3]);
    }
    fn_8265CA20(iVar3);
  }
  if (param_1[0x613] != 0) {
    fn_82292450(param_1[0x613], 1);
  }
  if (param_1[0x612] != 0) {
    fn_82292450(param_1[0x612], 1);
  }
  if (param_1[0x611] != 0) {
    fn_82292450(param_1[0x611], 1);
  }
  fn_8229AA08(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}
