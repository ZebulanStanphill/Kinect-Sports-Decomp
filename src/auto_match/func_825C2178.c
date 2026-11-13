extern int fn_82539560();
extern int fn_82560100();
extern unsigned int lbl_83282260;


unsigned __int64 fn_825C2178(int param_1,int *param_2,unsigned int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  
  pfVar1 = *(float **)(*(int *)(param_1 + 0x4c) + 0x228);
  iVar2 = (param_3 & 0xff) * 0x18 + *(int *)(*(int *)(param_1 + 0x4c) + 0x220);
  piVar3 = (int *)(iVar2 + 4);
  if ((double)pfVar1[1] <= (double)*(float *)(param_4 + 0xa4)) {
    piVar3 = (int *)(iVar2 + 8);
  }
  if (*piVar3 != 0) {
    fn_82539560((double)*(float *)(param_4 + 0xa4),(double)*pfVar1,(double)pfVar1[2],
                 (double)pfVar1[3],(double)pfVar1[4]);
    iVar2 = fn_82560100();
    *param_2 = iVar2;
    if (iVar2 != 0) {
      lbl_83282260 = lbl_83282260 + 1;
      return 1;
    }
  }
  return 0;
}

