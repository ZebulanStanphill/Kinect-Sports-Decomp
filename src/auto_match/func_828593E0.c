extern int fn_82811700();
extern int fn_8285AF28();
extern int fn_8285AFA0();
extern int fn_82F68CC0();
extern unsigned int lbl_83211320;
extern unsigned int lbl_83211324;
extern unsigned int lbl_83211328;


int fn_828593E0(double param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                 int param_5,int param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  int iVar2;
  
  iVar2 = lbl_83211328;
  if (param_5 == 0) {
    if ((unsigned int)lbl_83211320 < (unsigned int)lbl_83211324) {
      iVar1 = (unsigned int)lbl_83211320 * 0xd8;
      *(unsigned int *)(iVar1 + lbl_83211328) = param_2;
      iVar1 = iVar1 + iVar2;
      lbl_83211320 = lbl_83211320 + 1;
      *(float *)(iVar1 + 4) = (float)param_1;
      fn_82F68CC0(iVar1 + 0xb0,param_4,0x18);
      fn_82811700(param_7,iVar1 + 200);
      fn_82811700(param_8,iVar1 + 0xd0);
      param_6 = lbl_83211320 - 1;
    }
    else {
      param_6 = -1;
    }
  }
  else {
    iVar2 = param_6 * 0xd8 + lbl_83211328;
    fn_8285AF28(iVar2 + 0xb0);
    fn_8285AFA0(iVar2 + 200,iVar2 + 0xd0,param_7,param_8);
  }
  return param_6;
}

