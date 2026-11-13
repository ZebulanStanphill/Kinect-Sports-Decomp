extern int fn_82560100();
extern unsigned int lbl_82192734;
extern unsigned int lbl_83282264;


unsigned __int64
fn_825C2AD8(int param_1,int *param_2,unsigned int param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (param_3 & 0xff) * 0x18 + *(int *)(*(int *)(param_1 + 0x4c) + 0x220);
  piVar2 = (int *)(iVar1 + 0x10);
  if (param_4 == 0) {
    piVar2 = (int *)(iVar1 + 0xc);
  }
  if (*piVar2 != 0) {
    iVar1 = fn_82560100((double)lbl_82192734,*(int *)(param_1 + 0x4c),piVar2,param_6,param_4,
                              param_5,0,0,0);
    *param_2 = iVar1;
    if (iVar1 != 0) {
      lbl_83282264 = lbl_83282264 + 1;
      return 1;
    }
  }
  return 0;
}

