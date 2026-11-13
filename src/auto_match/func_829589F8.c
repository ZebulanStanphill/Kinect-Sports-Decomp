typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82964628();
extern int fn_82F691F0();
extern unsigned int lbl_82005710;


unsigned __int64
fn_829589F8(int param_1,unsigned int param_2,int *param_3,unsigned __int64 param_4,int *param_5,unsigned __int64 param_6
             )

{
  int iVar1;
  __int64 lVar2;
  int iVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned int uVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  
  bVar4 = false;
  if ((param_6 & 0xffffffff) != 0) {
    do {
      if (*(int *)(param_1 + 0x154) == *param_5) {
        bVar4 = true;
      }
      param_5 = param_5 + 1;
      param_6 = param_6 - 1;
    } while (param_6 != 0);
  }
  if ((*(unsigned int *)(param_1 + 0x150) <= param_2) || (bVar4)) {
    *(unsigned int *)(param_1 + 0x140) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x144) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x148) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x14c) = 0xffffffff;
    lVar2 = fn_8265C940(*(int *)(param_1 + 0x2c) << 2,0x24810000);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar2,0xff,*(int *)(param_1 + 0x2c) << 2);
    }
LAB_82958d30:
    uVar9 = 0xffffffff8007000e;
  }
  else {
    uVar5 = 0;
    uVar7 = -(unsigned int)(param_4 == 1) & 3;
    if ((param_4 & 0xffffffff) != 0) {
      piVar8 = (int *)((uVar7 + 0x50) * 4 + param_1);
      uVar9 = lbl_82005710;
      piVar6 = param_3;
      do {
        if (*piVar8 != -1) {
          *(unsigned int *)(*(int *)(*piVar8 * 4 + *(int *)(param_1 + 0x14)) + 0x50) = param_2;
        }
        iVar3 = fn_82964628(uVar9,param_1,*(unsigned int *)(param_1 + 0x88),
                                  *(unsigned int *)(param_1 + 0x154),uVar7);
        *piVar8 = iVar3;
        if (iVar3 == -1) goto LAB_82958d30;
        iVar3 = *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14));
        *(unsigned int *)(iVar3 + 0x3c) = 0;
        *(unsigned int *)(iVar3 + 0x30) = 0;
        *(unsigned int *)(iVar3 + 0x48) = param_2;
        *(unsigned int *)(iVar3 + 0x50) = *(unsigned int *)(param_1 + 0x150);
        *(unsigned int *)(iVar3 + 0x54) = param_2;
        *(unsigned int *)(iVar3 + 0x58) = param_2;
        *(unsigned int *)(iVar3 + 0x5c) = 1;
        iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x18));
        if (*(int *)(iVar1 + 0xc) != 0) {
          *(unsigned int *)(iVar3 + 0x18) =
               *(unsigned int *)
                (*(int *)(**(int **)(iVar1 + 0x10) * 4 + *(int *)(param_1 + 0x14)) + 0x18);
          *(unsigned int *)(iVar3 + 0x14) =
               *(unsigned int *)
                (*(int *)(**(int **)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0x18)) + 0x10) * 4 +
                         *(int *)(param_1 + 0x14)) + 0x14);
        }
        if (param_3 != (int *)0x0) {
          *piVar6 = *piVar8;
        }
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 1;
        piVar6 = piVar6 + 1;
      } while ((uVar5 & 0xffffffff) < (param_4 & 0xffffffff));
    }
    uVar9 = 0;
  }
  fn_8265C990(0,0x24810000);
  return uVar9;
}

