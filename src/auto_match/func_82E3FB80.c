extern int fn_82E3B888();
extern int fn_82E3C118();
extern int fn_82E3DC18();
extern int fn_82E3F8D0();
extern int fn_82E59440();


__int64 fn_82E3FB80(int param_1,unsigned int *param_2)

{
  __int64 lVar1;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int * apiStack_34;
  
  if (((*(unsigned int *)(param_1 + 0x44) & 1) == 0) || (*(int *)(param_1 + 0x6c) != 0)) {
    return -0x3ff2c94e;
  }
  piStack_3c = (int *)0x0;
  piStack_38 = (int *)0x0;
  apiStack_34 = (int *)0x0;
  piStack_40 = (int *)0x0;
  lVar1 = fn_82E3F8D0(param_1);
  if (-1 < lVar1) {
    *(unsigned int *)(param_1 + 0x6c) = 1;
    lVar1 = (**(int (***)())*param_2)(param_2,0xffffffff8215ed68,&piStack_3c);
    if ((((-1 < lVar1) &&
         (lVar1 = (**(int (***)())(*piStack_3c + 0x28))(piStack_3c,&piStack_38), -1 < lVar1)) &&
        (lVar1 = fn_82E59440(piStack_38,0xffffffff820ed018,0xffffffff82154c58,&apiStack_34),
        -1 < lVar1)) &&
       (((lVar1 = (**(int (***)())*apiStack_34)(apiStack_34,0xffffffff82154c18,&piStack_40),
         -1 < lVar1 && (lVar1 = fn_82E3B888(param_1,param_2,piStack_40), -1 < lVar1)) &&
        ((lVar1 = fn_82E3DC18(param_1,piStack_40), -1 < lVar1 &&
         (lVar1 = fn_82E3C118(param_1,piStack_40), -1 < lVar1)))))) goto LAB_82e3fcbc;
  }
  *(unsigned int *)(param_1 + 0x6c) = 0;
LAB_82e3fcbc:
  if (piStack_3c != (int *)0x0) {
    (**(int (***)())(*piStack_3c + 8))();
    piStack_3c = (int *)0x0;
  }
  if (piStack_38 != (int *)0x0) {
    (**(int (***)())(*piStack_38 + 8))();
    piStack_38 = (int *)0x0;
  }
  if (apiStack_34 != (int *)0x0) {
    (**(int (***)())(*apiStack_34 + 8))();
    apiStack_34 = (int *)0x0;
  }
  if (piStack_40 != (int *)0x0) {
    (**(int (***)())(*piStack_40 + 8))();
  }
  return lVar1;
}

