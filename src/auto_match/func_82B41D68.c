#define true 1
extern int fn_82AA66A8();


int fn_82B41D68(unsigned __int64 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *param_2;
  iVar4 = 0;
  iVar6 = 0;
  while( true ) {
    if (iVar1 == 0) {
      return iVar4;
    }
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 0x1c);
    uVar3 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x30) & 0x7ffff;
    iVar5 = iVar4;
    iVar7 = iVar6;
    if ((((*(unsigned int *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(param_3 + 0x28)) &
          1 << ((unsigned int)uVar3 & 0x1f)) != 0) &&
        (((iVar6 == 0 ||
          (uVar3 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x30) & 0x7ffff,
          (*(unsigned int *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(iVar2 + 0x28)) &
          1 << ((unsigned int)uVar3 & 0x1f)) != 0)) && (iVar5 = iVar1, iVar7 = iVar2, iVar6 == iVar2)))) &&
       ((iVar5 = param_4, iVar7 = iVar6, iVar1 != param_4 &&
        (iVar5 = iVar1, iVar7 = iVar2, iVar4 != param_4)))) break;
    iVar1 = *(int *)(iVar1 + 4);
    iVar4 = iVar5;
    iVar6 = iVar7;
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c0);
}

