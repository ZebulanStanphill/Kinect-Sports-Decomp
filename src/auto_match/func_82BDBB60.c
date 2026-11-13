extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1EFC0();


unsigned __int64 fn_82BDBB60(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int *piVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  
  uVar1 = *(unsigned int *)(param_1 + 0x88);
  uVar2 = *(unsigned int *)(param_1 + 0xc);
  uVar8 = 0;
  uVar5 = 0;
  if (uVar1 != 0) {
    piVar6 = (int *)(param_1 + 0x50);
    uVar9 = uVar8;
    do {
      uVar8 = (unsigned __int64)*(unsigned int *)(*(int *)(*piVar6 + 0x18) + 0x18);
      if (uVar8 < uVar9) {
        uVar8 = uVar9;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
      uVar9 = uVar8;
    } while (uVar5 < uVar1);
  }
  uVar5 = 0;
  if (uVar1 != 0) {
    piVar6 = (int *)(param_1 + 0x50);
    do {
      uVar1 = *(unsigned int *)(*(int *)(*piVar6 + 0x18) + 0x14);
      trapWord(6,(unsigned __int64)uVar1,0);
      if (uVar8 != (__int64)(int)((uVar8 & 0xffffffff) / (unsigned __int64)uVar1) * (__int64)(int)uVar1)
      {
        uVar8 = (__int64)(int)uVar1 * (__int64)(int)uVar8;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x88));
  }
  iVar7 = *(int *)(param_1 + 8);
  lVar10 = (__int64)(int)uVar8 * (__int64)(int)uVar2;
  if (iVar7 == 0) {
    uVar3 = fn_8265C940(lVar10,0x608a2002);
    *(unsigned int *)(param_1 + 8) = uVar3;
    uVar3 = fn_8265C940((unsigned __int64)uVar2 * 0x1c,0x618a0009);
    *(unsigned int *)(param_1 + 0x84) = uVar3;
    iVar4 = fn_8265C940(uVar2 << 3,0x618a0003);
    iVar7 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 0x60) = iVar4;
    if (((iVar7 == 0) || (*(int *)(param_1 + 0x84) == 0)) || (iVar4 == 0)) {
      if (*(int *)(param_1 + 0x60) != 0) {
        fn_8265C990(*(int *)(param_1 + 0x60),0x618a0003);
        *(unsigned int *)(param_1 + 0x60) = 0;
      }
      if (*(int *)(param_1 + 0x84) != 0) {
        fn_8265C990(*(int *)(param_1 + 0x84),0x618a0009);
        *(unsigned int *)(param_1 + 0x84) = 0;
      }
      if (*(int *)(param_1 + 8) != 0) {
        fn_8265C990(*(int *)(param_1 + 8),0x608a2002);
        *(unsigned int *)(param_1 + 8) = 0;
      }
      return 0xffffffff8007000e;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(iVar7,0,lVar10);
}

