extern int fn_82230040();
extern int fn_8246BA80();
extern int fn_8246BC48();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern int memcpy();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;


int fn_8246B8C8(int param_1,unsigned int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  __int64 lVar10;
  unsigned char **ppuStack_90;
  unsigned int uStack_8c;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  
  lVar10 = 1;
  iVar3 = param_1;
  do {
    fn_8246BA80(iVar3);
    lVar10 = lVar10 + -1;
    iVar3 = iVar3 + 0x14;
  } while (-1 < lVar10);
  *(unsigned int *)(param_1 + 0x30) = 0;
  if (param_2 != (unsigned int *)0x0) {
    uVar5 = (unsigned __int64)*param_2;
    if (uVar5 != (uVar5 - 1) + (unsigned __int64)(uVar5 == 0)) {
      iVar3 = fn_8251F720(param_2,0);
      uVar8 = 0;
      uVar5 = fn_8251FBA8();
      if ((int)((uVar5 & 0xffffffff) / 100) != 0) {
        stack_pair_80.second = 0;
        puVar7 = (unsigned int *)(iVar3 + 0x14);
        uStack_74 = 0;
        uStack_6c = 0;
        do {
          uVar9 = 0;
          do {
            if (uVar9 == 0) {
              stack_pair_80.first = puVar7[-2];
              uStack_78 = *puVar7;
              uStack_70 = puVar7[-5];
            }
            else {
              stack_pair_80.first = puVar7[-1];
              uStack_78 = puVar7[1];
              uStack_70 = puVar7[-4];
            }
            iVar6 = uVar9 * 0x14 + param_1;
            iVar1 = *(int *)(iVar6 + 4);
            iVar2 = *(int *)(iVar1 + 4);
            piVar4 = (int *)fn_8265C9E0(0x20);
            if (piVar4 == (int *)0x0) {
              uStack_8c = 0;
              ppuStack_90 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
              fn_82230040(&ppuStack_90);
            }
            *piVar4 = iVar1;
            piVar4[1] = iVar2;
            if (piVar4 + 2 != (int *)0x0) {
              memcpy(piVar4 + 2,&stack_pair_80.first,0x18);
            }
            if (*(int *)(iVar6 + 8) == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
              fn_82F622A8(0xffffffff8219852c);
            }
            uVar9 = uVar9 + 1;
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            *(int **)(iVar1 + 4) = piVar4;
            *(int **)piVar4[1] = piVar4;
          } while (uVar9 < 2);
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 0x19;
          uVar5 = fn_8251FBA8(iVar3);
        } while ((uVar8 & 0xffffffff) < (uVar5 & 0xffffffff) / 100);
      }
      if (iVar3 != 0) {
        fn_8251FA58(iVar3);
      }
    }
  }
  puVar7 = (unsigned int *)(param_1 + -4);
  lVar10 = 2;
  do {
    puVar7[1] = 0;
    puVar7 = puVar7 + 5;
    *puVar7 = 0;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  fn_8246BC48(param_1);
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  return param_1;
}

