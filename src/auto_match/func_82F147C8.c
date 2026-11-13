extern unsigned int lbl_831B8D18;


void fn_82F147C8(unsigned __int64 param_1,int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  uVar2 = (unsigned __int64)((int)param_1 >> 0x1f);
  uVar2 = (param_1 ^ uVar2) - uVar2;
  if (uVar2 == 0) {
    *param_3 = 0;
    *param_2 = 0;
  }
  else {
    iVar3 = (int)uVar2;
    if (iVar3 < 3) {
      iVar3 = 1;
      uVar1 = (int)((uVar2 & 0xffffffff) << 1) - 2;
    }
    else {
      if (iVar3 < 7) {
        uVar2 = uVar2 - 3;
        iVar3 = 2;
      }
      else if (iVar3 < 0xf) {
        uVar2 = uVar2 - 7;
        iVar3 = 3;
      }
      else if (iVar3 < 0x1f) {
        uVar2 = uVar2 - 0xf;
        iVar3 = 4;
      }
      else {
        uVar2 = uVar2 - 0x1f;
        iVar3 = 5;
      }
      uVar1 = (unsigned int)((uVar2 & 0xffffffff) << 1);
    }
    *param_3 = uVar1 | (int)param_1 >> 0x10 & 1U;
    *param_2 = iVar3;
  }
  *param_4 = *(unsigned int *)(&lbl_831B8D18 + *param_2 * 4);
  return;
}

