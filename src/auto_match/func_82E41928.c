extern int fn_82E59440();
extern int fn_82E62630();
extern int fn_82E626B0();
extern int fn_82E626F0();
extern int fn_82E62730();
extern unsigned int iStack_34;


__int64 fn_82E41928(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int iStack_34;
  int aiStack_30;
  
  if ((param_2 & 0xffffffff) == 0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    piStack_3c = (int *)0x0;
    piStack_38 = (int *)0x0;
    piStack_40 = (int *)0x0;
    lVar1 = fn_82E59440(param_2,0xffffffff820ed018,0xffffffff82154c58,&piStack_3c);
    if (((-1 < lVar1) &&
        (lVar1 = (**(int (***)())*piStack_3c)(piStack_3c,0xffffffff82154c18,&piStack_38), -1 < lVar1))
       && (lVar1 = (**(int (***)())(*piStack_38 + 0x10))(piStack_38,0xffffffff82154aa8,0,&piStack_40),
          -1 < lVar1)) {
      iStack_34 = 0;
      lVar1 = fn_82E626B0(piStack_40,&iStack_34);
      if (-1 < lVar1) {
        aiStack_30 = 0;
        lVar1 = fn_82E626F0(piStack_40,&aiStack_30);
        if (-1 < lVar1) {
          if ((iStack_34 == aiStack_30) && (aiStack_30 != 0)) {
            *(int *)(param_1 + 0x50) = aiStack_30;
            lVar1 = fn_82E62630(piStack_40,param_1 + 0x58);
            if (-1 < lVar1) {
              lVar1 = fn_82E62730(piStack_40,param_1 + 0x68);
            }
          }
          else {
            lVar1 = -0x3ff2c566;
          }
        }
      }
    }
    if (piStack_3c != (int *)0x0) {
      (**(int (***)())(*piStack_3c + 8))();
      piStack_3c = (int *)0x0;
    }
    if (piStack_38 != (int *)0x0) {
      (**(int (***)())(*piStack_38 + 8))();
      piStack_38 = (int *)0x0;
    }
    if (piStack_40 != (int *)0x0) {
      (**(int (***)())(*piStack_40 + 8))();
    }
  }
  return lVar1;
}

