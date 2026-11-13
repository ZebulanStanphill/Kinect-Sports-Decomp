extern int fn_822B54F8();
extern int fn_822B6788();
extern int fn_823369B0();
extern int fn_82526C70();
extern int fn_8265C9E0();
extern float lbl_82192604;
extern unsigned int lbl_821B0C78;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


unsigned int * fn_82336A70(unsigned int *param_1,unsigned __int64 param_2)

{
  float fVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  fn_822B54F8();
  *param_1 = &lbl_821B0C78;
  uVar2 = fn_8265C9E0(0x1a0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_823369B0(uVar2,param_1,param_2);
  }
  param_1[0x68] = uVar3;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fVar1 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192604 +
          lbl_821CA460;
  iVar4 = fn_822B6788(param_1);
  if (iVar4 == 0) {
    uVar5 = 0xffffffff821b0c2c;
  }
  else {
    uVar5 = 0xffffffff821b0c38;
  }
  fn_82526C70((unsigned __int64)(unsigned int)param_1[0x68] + 0x60,0x20,uVar5,(int)fVar1);
  return param_1;
}

