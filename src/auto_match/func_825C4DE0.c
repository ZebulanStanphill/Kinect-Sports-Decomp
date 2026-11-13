extern int fn_825F33B0();
extern unsigned int lbl_8320A898;


void fn_825C4DE0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  iVar3 = lbl_8320A898;
  uVar1 = *(unsigned int *)(lbl_8320A898 + 0x2934);
  *(unsigned int *)(lbl_8320A898 + 0x2934) = uVar1 & 0xffffff8f | 0x60;
  uVar4 = *(unsigned __int64 *)(iVar3 + 0x10);
  *(unsigned __int64 *)(iVar3 + 0x10) = uVar4 | 0x800;
  *(unsigned __int64 *)(iVar3 + 0x10) = uVar4 | 0x20800;
  for (puVar2 = *(unsigned int **)(param_2 + 0xc); iVar3 = lbl_8320A898, puVar2 != (unsigned int *)0x0;
      puVar2 = (unsigned int *)puVar2[2]) {
    fn_825F33B0(param_1,*puVar2,param_3,param_4);
  }
  *(unsigned int *)(lbl_8320A898 + 0x2934) =
       (uVar1 >> 4 & 7) << 4 | *(unsigned int *)(lbl_8320A898 + 0x2934) & 0xffffff8f;
  uVar4 = *(unsigned __int64 *)(iVar3 + 0x10);
  *(unsigned __int64 *)(iVar3 + 0x10) = uVar4 | 0x800;
  *(unsigned __int64 *)(iVar3 + 0x10) = uVar4 | 0x20800;
  return;
}

