extern int fn_82BE1A10();
extern int fn_82BE1FC0();
extern int fn_82BE5240();
extern int fn_82BEA420();
extern int fn_82BEF330();
extern int fn_82BEF948();
extern int fn_82BF1AE0();


unsigned __int64 fn_82BEFD98(int *param_1)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar4;
  __int64 lVar3;
  
  uVar2 = fn_82BE1A10();
  iVar4 = fn_82BE1FC0(uVar2,2);
  if (iVar4 == 0) {
    lVar3 = (**(int (***)())(*param_1 + 0x1c))(param_1);
    *(unsigned char *)((int)param_1 + 0x42) = 1;
    if (lVar3 == 0) {
      fn_82BEF330(param_1,1);
      param_1[4] = 2;
      uVar2 = fn_82BE5240(param_1,0x193,0xffffffff82196582);
      return uVar2;
    }
    if ((param_1[0xb] == 0) && (param_1[0xf] == 0)) {
      fn_82BEF330(param_1,1);
    }
    if (param_1[6] != 0) {
      iVar4 = fn_82BEA420(param_1[6],lVar3);
      param_1[0xc] = iVar4;
    }
    if (param_1[0xc] == 0) {
      param_1[4] = 2;
      uVar2 = fn_82BE5240(param_1,0x193,0xffffffff820eb2b0,lVar3,param_1[5]);
      return uVar2;
    }
    piVar1 = *(int **)(param_1[0xc] + 0x34);
    if (piVar1 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(int (***)())(*piVar1 + 4))();
    }
    iVar4 = fn_82BEF948(param_1,uVar2);
    if (iVar4 == 0) {
      iVar4 = 0x12;
    }
    else {
      fn_82BF1AE0(param_1[0xc]);
      iVar4 = 0x11;
    }
  }
  else {
    fn_82BEF330(param_1,1);
    iVar4 = 2;
  }
  param_1[4] = iVar4;
  return 0;
}

