extern int fn_82F65350();
extern unsigned int lbl_82015CF0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83223458;


unsigned __int64 fn_82A82350(unsigned short *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  if (lbl_83223458 == '\0') {
    uVar2 = 0xffffffff8000ffff;
  }
  else {
    param_1[1] = 0;
    *param_1 = 0xf1ea;
    uVar1 = lbl_821AAD20;
    *(unsigned int *)(param_1 + 4) = 0;
    *(unsigned int *)(param_1 + 2) = uVar1;
    iVar3 = fn_82F65350();
    uVar2 = 0;
    *(float *)(param_1 + 6) = (float)(__int64)iVar3 * lbl_82015CF0;
  }
  return uVar2;
}

