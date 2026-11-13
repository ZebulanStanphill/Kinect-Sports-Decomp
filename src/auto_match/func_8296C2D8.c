extern int fn_829632F0();
extern int fn_829640A0();
extern int fn_82964628();
extern int fn_829646C8();
extern int fn_82964868();
extern int fn_82966400();
extern int fn_8296BD78();
extern unsigned int lbl_82005710;


unsigned __int64 fn_8296C2D8(int param_1,int param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar5;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  
  iVar5 = fn_82964868();
  if (iVar5 == -1) {
LAB_8296c2fc:
    uVar4 = 0xffffffff8007000e;
  }
  else {
    iVar5 = *(int *)(iVar5 * 4 + *(int *)(param_1 + 0x18));
    fn_829632F0(iVar5,param_2);
    uVar8 = (unsigned __int64)*(unsigned int *)(param_2 + 0xc);
    uVar10 = 0;
    if (uVar8 != 0) {
      do {
        iVar6 = fn_82966400(param_1);
        if (iVar6 == 0) break;
        uVar10 = uVar10 + 1;
      } while ((uVar10 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    if ((uVar10 & 0xffffffff) != (uVar8 & 0xffffffff)) {
      iVar6 = fn_829646C8(param_1,uVar8 & 0xffffffff000fffff | 0x10000000,0xffffffffffffffff,
                            0xffffffffffffffff);
      if (iVar6 == -1) goto LAB_8296c2fc;
      puVar1 = *(unsigned int **)(iVar6 * 4 + *(int *)(param_1 + 0x18));
      fn_829632F0(puVar1,param_2);
      uVar9 = 0;
      if (*(int *)(iVar5 + 0xc) != 0) {
        iVar6 = 0;
        uVar4 = lbl_82005710;
        do {
          *(unsigned int *)(iVar6 + puVar1[4]) = *(unsigned int *)(iVar6 + *(int *)(iVar5 + 0x10));
          uVar7 = fn_82964628(uVar4,param_1,*(unsigned int *)(param_1 + 0x88),0xffffffffffffffff,
                                0xffffffffffffffff);
          *(unsigned int *)(iVar6 + puVar1[2]) = uVar7;
          *(unsigned int *)(iVar6 + *(int *)(iVar5 + 0x10)) = uVar7;
          if (*(int *)(iVar6 + *(int *)(iVar5 + 0x10)) == -1) goto LAB_8296c2fc;
          fn_829640A0(*(unsigned int *)
                         (*(int *)(iVar6 + *(int *)(iVar5 + 0x10)) * 4 + *(int *)(param_1 + 0x14)),
                        *(unsigned int *)
                         (*(int *)(iVar6 + *(int *)(param_2 + 0x10)) * 4 + *(int *)(param_1 + 0x14))
                       );
          uVar9 = uVar9 + 1;
          *(unsigned int *)
           (*(int *)(*(int *)(iVar6 + *(int *)(iVar5 + 0x10)) * 4 + *(int *)(param_1 + 0x14)) + 0x14
           ) = *(unsigned int *)
                (*(int *)(*(int *)(iVar6 + *(int *)(param_2 + 0x10)) * 4 + *(int *)(param_1 + 0x14))
                + 0x14);
          *(unsigned int *)
           (*(int *)(*(int *)(iVar6 + *(int *)(iVar5 + 0x10)) * 4 + *(int *)(param_1 + 0x14)) + 0x18
           ) = *(unsigned int *)
                (*(int *)(*(int *)(iVar6 + *(int *)(param_2 + 0x10)) * 4 + *(int *)(param_1 + 0x14))
                + 0x18);
          piVar2 = (int *)(iVar6 + *(int *)(iVar5 + 0x10));
          piVar3 = (int *)(iVar6 + *(int *)(param_2 + 0x10));
          iVar6 = iVar6 + 4;
          **(unsigned int **)(*piVar2 * 4 + *(int *)(param_1 + 0x14)) =
               **(unsigned int **)(*piVar3 * 4 + *(int *)(param_1 + 0x14));
        } while (uVar9 < *(unsigned int *)(iVar5 + 0xc));
      }
      uVar4 = fn_8296BD78(param_1,puVar1);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      *puVar1 = 0;
    }
    uVar4 = 0;
  }
  return uVar4;
}

