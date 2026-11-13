extern int fn_82540308();
extern int fn_826230E8();
extern int fn_8265C9E0();
extern unsigned int lbl_821CAD88;


unsigned int *
fn_82623520(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned __int64 param_5)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  __int64 lVar4;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = &lbl_821CAD88;
  uVar2 = fn_82540308(0);
  param_1[4] = uVar2;
  if ((param_5 & 0xffffffff) == 0) {
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    puVar3 = param_1 + 4;
    lVar4 = 3;
    do {
      uVar1 = fn_8265C9E0(0x20);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_826230E8(uVar1,param_5);
      }
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar2;
    } while (lVar4 != 0);
  }
  return param_1;
}

