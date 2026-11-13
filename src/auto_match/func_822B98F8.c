extern int fn_82554260();
extern int fn_827F04B0();
extern int fn_827F2DD0();
extern unsigned int ltcg_pool_0_0f;


void fn_822B98F8(int *param_1)

{
  int *piVar1;
  int iVar3;
  unsigned __int64 uVar2;
  
  if ((param_1[10] == 0) && (param_1[7] == 0)) {
    piVar1 = *(int **)(*param_1 + 0x8c0);
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(int (***)())(*piVar1 + 0x50))(piVar1,param_1 + 6);
      param_1[7] = iVar3;
      if (iVar3 != 0) {
        uVar2 = fn_827F04B0(0x1a0);
        if ((uVar2 & 0xffffffff) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = fn_82554260(uVar2,param_1[7],1);
        }
        param_1[8] = iVar3;
        fn_827F2DD0((double)ltcg_pool_0_0f,param_1[7]);
        (**(int (***)())(*piVar1 + 0x9c))(piVar1,param_1[6]);
      }
    }
  }
  return;
}

