extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82B18438();
extern int fn_82B841E8();
extern int fn_82B8AC10();


unsigned __int64 fn_82B8B0B8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  
  uVar1 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
  if (uVar1 == 0x75) {
LAB_82b8b270:
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if ((*(unsigned int *)(param_2 + 8) >> 0x12 & 1) == (param_4 & 0xff)) {
      if (uVar1 == 0x57) {
        uVar1 = *(unsigned int *)(param_2 + 8);
        iVar5 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
        uVar1 = *(unsigned int *)(param_2 + 0x1c);
        uVar3 = *(unsigned int *)(iVar5 + param_2 + -0x10);
        fn_82B8AC10(param_1,param_2,0,1);
        iVar5 = fn_82B841E8(param_1,(unsigned __int64)uVar1,(unsigned __int64)uVar1 + 0x20,0x56,0,0);
        uVar1 = *(unsigned int *)(iVar5 + 8);
        iVar4 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
        *(unsigned int *)(iVar4 + iVar5 + -0x10) = uVar3;
        return 0;
      }
      if (uVar1 != 0x5a) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdac,0xffffffff820d8a3c);
      }
      uVar1 = *(unsigned int *)(param_2 + 8);
      iVar4 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
      iVar5 = *(int *)(param_2 + 0x1c);
      piVar7 = (int *)(iVar5 + 0xc);
      iVar4 = *(int *)(iVar4 + param_2 + -0x10);
      piVar2 = *(int **)(iVar5 + 0xc);
      while (piVar2 != (int *)0x0) {
        if (*piVar2 != iVar4) {
          fn_82B18438(param_1,iVar5);
          uVar6 = 1;
        }
        if ((int *)*piVar7 == piVar2) {
          piVar7 = piVar2 + 2;
        }
        piVar2 = (int *)*piVar7;
      }
    }
    else {
      if (uVar1 == 0x55) goto LAB_82b8b270;
      if (uVar1 == 0x57) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdac,0xffffffff820dbf30);
      }
      if (uVar1 != 0x5a) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdac,0xffffffff820d8a3c);
      }
      uVar1 = *(unsigned int *)(param_2 + 8);
      iVar5 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
      fn_82B18438(param_1,*(unsigned int *)(param_2 + 0x1c),
                        *(unsigned int *)(iVar5 + param_2 + -0x10));
      uVar6 = 1;
    }
    fn_82B8AC10(param_1,param_2,0,1);
  }
  return uVar6;
}

