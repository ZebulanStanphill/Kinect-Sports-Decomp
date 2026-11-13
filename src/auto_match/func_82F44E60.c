extern int fn_8265C940();
extern int fn_82F691F0();
extern unsigned int lbl_821630B0;
extern unsigned int lbl_821630C0;
extern unsigned int lbl_82163110;
extern unsigned int lbl_82163138;
extern unsigned int lbl_831BA6C8;
extern unsigned int lbl_831BA6C9;
extern unsigned int lbl_831BA760;
extern unsigned int lbl_831BA761;


unsigned int * fn_82F44E60(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned char *puVar4;
  
  param_1[2] = param_2;
  param_1[8] = 0;
  param_1[3] = 1 << (param_2 & 0x3f);
  if ((int)param_2 < 4) {
    uVar3 = 0x4d;
    puVar4 = &lbl_821630C0;
  }
  else if (param_2 == 4) {
    uVar3 = 0xc;
    puVar4 = &lbl_821630B0;
  }
  else {
    if (param_2 == 8) {
      param_1[1] = (unsigned int)&lbl_82163138;
      param_1[6] = (unsigned int)&lbl_831BA6C8;
      *param_1 = 0x49;
      uVar3 = (unsigned int)lbl_831BA6C8;
      param_1[5] = uVar3;
      param_1[6] = (unsigned int)&lbl_831BA6C9;
      param_1[4] = 1 << (uVar3 & 0x3f);
      goto LAB_82f44f68;
    }
    if (param_2 == 10) {
      param_1[6] = (unsigned int)&lbl_831BA760;
      param_1[1] = (unsigned int)&lbl_821630B0;
      *param_1 = 0x40;
      uVar3 = (unsigned int)lbl_831BA760;
      param_1[6] = (unsigned int)&lbl_831BA761;
      param_1[5] = uVar3;
      param_1[4] = 1 << (uVar3 & 0x3f);
      goto LAB_82f44f68;
    }
    uVar3 = 0x22;
    puVar4 = &lbl_82163110;
  }
  *param_1 = uVar3;
  param_1[1] = (unsigned int)puVar4;
LAB_82f44f68:
  lVar1 = ((unsigned __int64)*param_1 & 0x1fffffff) << 3;
  if (0x3fffffff < ((unsigned __int64)*param_1 & 0x7fffffff) << 1) {
    lVar1 = -1;
  }
  uVar2 = fn_8265C940(lVar1,0x248c8000);
  param_1[8] = (unsigned int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    *param_3 = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,*param_1 << 3);
}

