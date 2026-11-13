extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;


unsigned __int64 fn_82773958(int *param_1,unsigned int param_2)

{
  int iVar1;
  
  if (((unsigned int)param_1[1] < param_2) && ((unsigned int)param_1[3] <= param_2)) {
    iVar1 = fn_8267B890(lbl_831E7E64,param_2 * 2 + 2,0);
    if (iVar1 == 0) {
      return 0;
    }
    if (*param_1 != 0) {
      fn_82F68CC0(iVar1,*param_1,((unsigned __int64)(unsigned int)param_1[1] + 1 & 0x7fffffff) << 1);
    }
    *(unsigned short *)(param_2 * 2 + iVar1) = 0;
    if ((*param_1 != param_1[2]) && (*param_1 != 0)) {
      fn_8267BE38();
    }
    *param_1 = iVar1;
  }
  else if (*param_1 != 0) {
    *(unsigned short *)(param_2 * 2 + *param_1) = 0;
  }
  param_1[1] = param_2;
  return 1;
}

