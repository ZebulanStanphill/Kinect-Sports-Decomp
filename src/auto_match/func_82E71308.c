extern int fn_82E6FC88();
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


__int64 fn_82E71308(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 *param_4,
                      unsigned int *param_5,unsigned int *param_6)

{
  __int64 lVar1;
  int *piStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned __int64 uStack_60;
  __int64 lStack_58;
  __int64 alStack_50;
  
  if (param_4 == (__int64 *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    *param_4 = 0;
    if (param_1[0x16] == 0) {
      lVar1 = -0x3ff2c945;
    }
    else {
      piStack_70 = (int *)0x0;
      uStack_64 = 0;
      uStack_6c = 0;
      lVar1 = (**(int (***)())(*param_1 + 8))(param_1,&uStack_6c);
      if ((-1 < lVar1) &&
         (lVar1 = (**(int (***)())(*(int *)param_1[0x16] + 0x48))
                            ((int *)param_1[0x16],uStack_6c * param_2,&piStack_70,&uStack_64),
         -1 < lVar1)) {
        alStack_50 = 0;
        lVar1 = (**(int (***)())(*(int *)param_1[0x16] + 0x4c))
                          ((int *)param_1[0x16],piStack_70,&alStack_50);
        if (-1 < lVar1) {
          uStack_68 = 0;
          lVar1 = (**(int (***)())(*(int *)param_1[0x16] + 0x44))((int *)param_1[0x16],&uStack_68);
          if (-1 < lVar1) {
            uStack_60 = 0;
            lVar1 = (**(int (***)())(*(int *)param_1[0x16] + 0x50))
                              ((int *)param_1[0x16],piStack_70,&uStack_60);
            if (-1 < lVar1) {
              if (param_2 - uStack_60 < 0x100000000) {
                lStack_58 = 0;
                lVar1 = (**(int (***)())(*piStack_70 + 0x2c))
                                  (piStack_70,(param_2 & 0xffffffff) - (uStack_60 & 0xffffffff),
                                   *(unsigned short *)(param_1 + 2),param_3,&lStack_58);
                if (-1 < lVar1) {
                  *param_4 = *(__int64 *)(param_1 + 0xc) + (unsigned __int64)uStack_68 + lStack_58 +
                             alStack_50;
                  lVar1 = fn_82E6FC88(param_1);
                  if (-1 < lVar1) {
                    if (param_5 != (unsigned int *)0x0) {
                      *param_5 = piStack_70;
                      (**(int (***)())(*piStack_70 + 4))();
                    }
                    if (param_6 != (unsigned int *)0x0) {
                      *param_6 = uStack_64;
                    }
                  }
                }
              }
              else {
                lVar1 = -0x3ff2c566;
              }
            }
          }
        }
      }
      if (piStack_70 != (int *)0x0) {
        (**(int (***)())(*piStack_70 + 8))();
      }
    }
  }
  return lVar1;
}

