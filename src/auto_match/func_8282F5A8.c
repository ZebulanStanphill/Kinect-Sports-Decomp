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
extern int fn_82822F60();
extern int fn_828252D0();
extern int fn_828252D8();
extern int fn_828252E8();
extern int fn_82826568();
extern int fn_828295A8();
extern int fn_82F678C8();
extern int __iob_func();
extern int fprintf();
extern void fn_82829F30(void);

int fn_8282F5A8(int param_1, char *param_2)

{
  unsigned int nbytes;
  int buf;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int *puVar9;
  char *lst;
  int iStack_60;
  int uStack_5c;
  int aiStack_58;

  nbytes = (*(unsigned int *)(param_2 + 0xb4) + *(unsigned int *)(param_2 + 0xb0) * 2) * 4;
  if (nbytes != 0) {
    buf = fn_828252D0(nbytes);
    if ((unsigned int)fn_82F678C8(buf, nbytes, 1, param_1) != 1) {
      fprintf(__iob_func() + 0x40, "sectionDb Error: Symbol file non-relocation\t\t\t\t\tdata did not read correctly\n");
      return 5;
    }
    uVar5 = 0;
    iVar3 = *(int *)(param_2 + 0xb0) * 8 + buf;
    if (*(unsigned int *)(param_2 + 0xb0) != 0) {
      puVar9 = (unsigned int *)(buf + 4);
      do {
        uVar7 = 0;
        uVar4 = *puVar9;
        if (uVar4 != 0) {
          lst = param_2 + 0x36c;
          puVar6 = (unsigned int *)(iVar3 + -4);
          do {
            iStack_60 = fn_828252E8(param_2, 0x1c);
            *(unsigned int *)(iStack_60 + 0x14) = puVar9[-1];
            puVar6 = puVar6 + 1;
            *(unsigned int *)(iStack_60 + 0x18) = *puVar6;
            fn_82826568(param_2, *(unsigned int *)(iStack_60 + 0x14), &uStack_5c);
            fn_828295A8(uStack_5c, &aiStack_58);
            *(int *)(iStack_60 + 0x10) = *(int *)(iStack_60 + 0x18) + aiStack_58;
            fn_82822F60(lst, iStack_60, fn_82829F30, &iStack_60);
            uVar4 = *puVar9;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar4);
        }
        iVar3 = uVar4 * 4 + iVar3;
        uVar5 = uVar5 + 1;
        puVar9 = puVar9 + 2;
      } while (uVar5 < *(unsigned int *)(param_2 + 0xb0));
    }
    fn_828252D8(buf);
  }
  return 0;
}
