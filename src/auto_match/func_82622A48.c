extern int fn_82540308();
extern int fn_826230E8();
extern int fn_8265C9E0();
extern unsigned int lbl_821CAD7C;


unsigned int *
fn_82622A48(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned __int64 param_7)

{
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar1;
  __int64 lVar4;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  *param_1 = &lbl_821CAD7C;
  param_1[5] = param_6;
  uVar2 = fn_82540308(0);
  param_1[6] = uVar2;
  puVar3 = (unsigned int *)fn_8265C9E0(0xc);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  param_1[7] = puVar3;
  if ((param_7 & 0xffffffff) == 0) {
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  else {
    puVar3 = param_1 + 8;
    lVar4 = 3;
    do {
      uVar1 = fn_8265C9E0(0x20);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_826230E8(uVar1,param_7);
      }
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar2;
    } while (lVar4 != 0);
  }
  return param_1;
}

