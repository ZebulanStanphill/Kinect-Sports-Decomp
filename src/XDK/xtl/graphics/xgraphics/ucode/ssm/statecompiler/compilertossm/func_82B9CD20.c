extern int fn_82AB15D0();
extern int fn_82AB6EC0();
extern unsigned int lbl_8316E574;


unsigned __int64 fn_82B9CD20(unsigned __int64 param_1,unsigned int *param_2,int (**param_3)(),unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar1 = fn_82AB6EC0(param_1,0x237);
  iVar2 = fn_82AB6EC0(param_1,0x3ce);
  if (iVar1 == 2) {
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    else if (iVar2 == 1) {
      uVar3 = 5;
    }
    else if (iVar2 == 3) {
      uVar3 = 8;
    }
    else {
      if (iVar2 != 2) goto LAB_82b9cda0;
      uVar3 = 0xb;
    }
    *param_2 = uVar3;
  }
  else {
LAB_82b9cda0:
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820ddb08,0xb00);
  }
  if ((param_3 != (int (**)())0x0) && ((param_4 & 0xffffffff) != 0)) {
    (*param_3)(param_4,0xffffffff820ddaf8,lbl_8316E574,0x3d,*param_2);
  }
  return 1;
}

