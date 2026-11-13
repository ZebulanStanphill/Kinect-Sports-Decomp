typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AC8910();
extern int fn_82AC8ED0();
extern int fn_82ACA998();


void fn_82AC90A8(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  bool bVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  
  if ((*(int *)(param_2 + 0x58) != 0) &&
     (uVar3 = fn_82AC8910(*(int *)(param_2 + 0x58),0,*(unsigned int *)(param_1 + 0x2a0)),
     uVar3 <= *(int *)(param_1 + 0x29c) - 1U)) {
    do {
      iVar1 = *(int *)(uVar3 * 4 + *(int *)(param_1 + 0x2c4));
      if ((*(unsigned int *)(iVar1 + 8) & 0x3f80) != 0x3980) {
        puVar6 = *(unsigned int **)(iVar1 + 4);
        for (puVar4 = puVar6; puVar4 != (unsigned int *)0x0; puVar4 = (unsigned int *)puVar4[2]) {
          if ((*puVar4 & 0xe000000) != 0) {
            bVar5 = true;
            if ((*puVar4 >> 0x1e & 1) != 0) goto LAB_82ac9140;
            break;
          }
        }
        bVar5 = false;
LAB_82ac9140:
        if (bVar5) {
          for (; (puVar6 != (unsigned int *)0x0 && ((*puVar6 & 0xe000000) == 0)); puVar6 = (unsigned int *)puVar6[2]
              ) {
          }
          uVar7 = *puVar6;
          uVar2 = fn_82ACA998(param_1,param_2);
          fn_82AC8ED0(param_3,(unsigned __int64)(uVar7 >> 0xd) & 0xff0 | uVar2 & 0xffffffff0000000f);
        }
      }
      uVar7 = *(int *)(param_1 + 0x29c) - 1;
      if (uVar3 == uVar7) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = fn_82AC8910(*(unsigned int *)(param_2 + 0x58),uVar3 + 1,
                              *(unsigned int *)(param_1 + 0x2a0));
      }
    } while (uVar3 <= uVar7);
  }
  return;
}

