extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AD1978();
extern int fn_82B843F0();


unsigned int fn_82B84700(int param_1,int *param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  
  iVar1 = *(int *)(param_3 + 0xc);
  if ((*(unsigned int *)(iVar1 + 8) & 0x3f80) == 0x3e00) {
    uVar2 = *(unsigned int *)(iVar1 + 8);
    iVar3 = fn_82ABDD90(param_1,uVar2 >> 7 & 0x7f,uVar2 >> 0x13 & 7,uVar2 >> 0xe & 7);
    if ((*(unsigned int *)((*(unsigned int *)(iVar3 + iVar1 + -8) & 0x7fff) * 0x28 + *(int *)(param_1 + 0xc) + 4) &
        0x70) == 0x30) {
      uVar4 = fn_82B843F0(param_1,param_2);
      uVar2 = uVar4 & 0xfffffffe;
      puVar6 = (unsigned int *)(((unsigned int)param_2 & 0xfffffffe) + 0x24);
      *(unsigned int *)(uVar2 + 0x24) = *puVar6;
      *(unsigned int *)(*puVar6 & 0xfffffffe) = uVar2;
      *(unsigned int *)(uVar2 + 0x28) = (unsigned int)param_2 & 0xfffffffe;
      *puVar6 = uVar2 + 0x28;
      uVar5 = fn_82AD1978(uVar4,param_3);
      *(unsigned int *)(uVar4 + 0x2c) = uVar5;
      uVar5 = fn_82AD1978(uVar4,param_2[0xc]);
      *(unsigned int *)(uVar4 + 0x30) = uVar5;
      for (iVar1 = *param_2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        if ((iVar1 != param_2[0xb]) && (iVar1 != param_2[0xc])) {
          fn_82AD1978(uVar4,iVar1);
        }
      }
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c1);
}

