extern unsigned int *auStack_2c;
extern unsigned int *auStack_40;
extern int fn_82E46BE8();
extern int fn_82E59F28();
extern int fn_82E59F50();
extern int fn_82E59FA0();
extern int fn_82E5A100();
extern int fn_82E7CF08();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


__int64 fn_82E7D7A0(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  __int64 lVar3;
  unsigned short auStack_40;
  int *piStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int auStack_2c [1];
  
  lVar3 = 0;
  piStack_3c = (int *)0x0;
  auStack_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  auStack_2c[0] = 0;
  if (param_3 == (int *)0x0) {
    lVar3 = -0x7fffbffd;
  }
  else {
    iVar2 = fn_82E7CF08(param_1,param_2,&piStack_3c);
    piVar1 = piStack_3c;
    if (-1 < iVar2) {
      lVar3 = fn_82E5A100(piStack_3c,&auStack_40);
      if (-1 < lVar3) {
        lVar3 = fn_82E59F28(piVar1,&uStack_38);
        if (-1 < lVar3) {
          lVar3 = fn_82E59F50(piVar1,&uStack_34);
          if (-1 < lVar3) {
            lVar3 = fn_82E46BE8(piVar1,&uStack_30);
            if (-1 < lVar3) {
              lVar3 = fn_82E59FA0(piVar1,auStack_2c);
              if (-1 < lVar3) {
                lVar3 = (**(int (***)())(*param_3 + 0x54))(param_3,0xffffffff8214c1d0,auStack_40);
                if (-1 < lVar3) {
                  lVar3 = (**(int (***)())(*param_3 + 0x54))(param_3,0xffffffff8214c1e0,uStack_38);
                  if (-1 < lVar3) {
                    lVar3 = (**(int (***)())(*param_3 + 0x54))(param_3,0xffffffff8214c1f0,uStack_34);
                    if ((-1 < lVar3) &&
                       (lVar3 = (**(int (***)())(*param_3 + 0x54))(param_3,0xffffffff8214c200,uStack_30)
                       , -1 < lVar3)) {
                      lVar3 = (**(int (***)())(*param_3 + 0x54))
                                        (param_3,0xffffffff8214c210,auStack_2c[0]);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 8))(piVar1);
    }
  }
  return lVar3;
}

