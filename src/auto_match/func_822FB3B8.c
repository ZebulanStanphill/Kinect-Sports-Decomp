extern int fn_822B83D0();
extern int fn_825200A8();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_40;


void fn_822FB3B8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar6;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  double dVar10;
  double dVar11;
  unsigned __int64 uStack_40;
  
  puVar6 = (unsigned int *)(param_1 + 0x5c);
  if (0xf < *(unsigned int *)(param_1 + 0x70)) {
    puVar6 = (unsigned int *)*puVar6;
  }
  fn_8255FD70(&uStack_40,**(unsigned int **)(param_1 + 0x58),puVar6);
  uVar5 = 0xffffffff83260000;
  uVar8 = (unsigned __int64)lbl_83265A28;
  iVar3 = (((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF);
  uVar2 = (((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) - (((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 2;
  dVar11 = (double)(__int64)(int)uVar2;
  dVar10 = (double)lbl_821CA460;
  do {
    uVar8 = (__int64)(int)uVar8 * 0x19660d + 0x3c6ef35f;
    *(unsigned int *)((int)uVar5 + 0x5a28) = (unsigned int)uVar8;
    iVar4 = (int)((double)(float)((double)(float)((unsigned int)uVar8 & 0x7fffff | 0x3f800000) - dVar10) *
                 dVar11);
    uStack_40 = (__int64)iVar4;
    uVar7 = (unsigned __int64)*(unsigned int *)(iVar4 * 4 + iVar3);
    lVar9 = uVar7 + 0x40;
    iVar4 = fn_825200A8((unsigned int *)(param_1 + 0x98),lVar9);
    if (iVar4 == 0) break;
  } while (1 < uVar2);
  fn_822B83D0(*(unsigned int *)(param_1 + 0x54),uVar7);
  uVar1 = *(unsigned int *)lVar9;
  *(unsigned int *)(param_1 + 0x94) = 0;
  *(unsigned int *)(param_1 + 0x98) = uVar1;
  if (iVar3 != 0) {
    fn_8265CA20(iVar3);
  }
  return;
}

