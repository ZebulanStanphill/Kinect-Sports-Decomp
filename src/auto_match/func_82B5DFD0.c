extern int fn_82AA66A8();
extern int fn_82ABE5F8();
extern int fn_82AE60E8();
extern int fn_82B4A7C0();
extern int fn_82B54048();
extern int fn_82F68CC0();
extern unsigned int lbl_83160E20;


void fn_82B5DFD0(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned char **ppuVar6;
  unsigned int uVar7;
  
  *(unsigned int *)(param_1 + 600) = *(unsigned int *)(param_1 + 0x14);
  uVar2 = fn_82AE60E8(param_1,((unsigned __int64)*(unsigned int *)(param_1 + 0x14) + 0xc) * 0x28,0);
  if (*(int *)(param_1 + 0xc) != 0) {
    fn_82F68CC0(uVar2,*(int *)(param_1 + 0xc),(unsigned __int64)*(unsigned int *)(param_1 + 0x14) * 0x28);
    fn_82ABE5F8(param_1,*(unsigned int *)(param_1 + 0xc),(unsigned __int64)*(unsigned int *)(param_1 + 0x14) * 0x28,
                 0);
  }
  *(int *)(param_1 + 0xc) = (int)uVar2;
  uVar7 = 0;
  ppuVar6 = &lbl_83160E20;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0xc;
  do {
    iVar5 = *(int *)(param_1 + 600) + uVar7;
    iVar3 = fn_82B4A7C0(param_1,*ppuVar6,iVar5,1,0xc,1,4,0);
    iVar1 = *(int *)(iVar3 + 0x18);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1,iVar3);
    }
    fn_82B54048(param_1,iVar5,iVar3,iVar1,3,0);
    iVar5 = iVar5 * 0x28;
    uVar4 = *(unsigned int *)(*(int *)(param_1 + 0xc) + iVar5);
    if (uVar7 < 6) {
      uVar4 = uVar4 & 0xfffffff8 | 4;
    }
    else {
      uVar4 = uVar4 & 0xfffffff8 | 2;
    }
    *(unsigned int *)(*(int *)(param_1 + 0xc) + iVar5) = uVar4;
    uVar7 = uVar7 + 1;
    iVar5 = *(int *)(param_1 + 0xc) + iVar5;
    ppuVar6 = ppuVar6 + 1;
    *(unsigned int *)(iVar5 + 4) = *(unsigned int *)(iVar5 + 4) | 4;
  } while (uVar7 < 0xc);
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x40000;
  return;
}

