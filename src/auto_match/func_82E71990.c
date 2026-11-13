extern int fn_82E6F498();
extern int fn_82E70AB8();
extern int fn_82E71048();
extern int fn_82E71308();
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


__int64 fn_82E71990(int *param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                      __int64 *param_5,unsigned __int64 *param_6)

{
  int *piVar1;
  __int64 lVar2;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  int *piStack_68;
  unsigned int uStack_64;
  __int64 alStack_60;
  
  if (param_5 == (__int64 *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    *param_5 = 0;
    if ((param_1[0x16] == 0) || (param_1[0xb] == 0)) {
      lVar2 = -0x3ff2c945;
    }
    else {
      if (param_6 != (unsigned __int64 *)0x0) {
        *param_6 = 0xffffffffffffffff;
      }
      uStack_6c = 0;
      piStack_68 = (int *)0x0;
      uStack_64 = 0;
      lVar2 = (**(int (***)())(*param_1 + 8))(param_1,&uStack_6c);
      if (-1 < lVar2) {
        if (uStack_6c == 0) {
          lVar2 = -0x3ff2c945;
        }
        else {
          alStack_60 = 0;
          param_2 = param_2 / uStack_6c;
          trapDoubleWordImmediate(6,(unsigned __int64)uStack_6c,0);
          lVar2 = fn_82E71308(param_1,param_2,param_4,&alStack_60,&piStack_68,&uStack_64);
          piVar1 = piStack_68;
          if (-1 < lVar2) {
            uStack_70 = 0;
            lVar2 = fn_82E6F498(param_1,alStack_60,&uStack_70);
            if (-1 < lVar2) {
              if ((param_3 == 0) || ((int)param_4 != 3)) {
                alStack_60 = 0;
                lVar2 = (**(int (***)())(*piVar1 + 0x20))
                                  (piVar1,*(unsigned short *)(param_1 + 2),param_4,&alStack_60);
                if (-1 < lVar2) {
                  *param_5 = (unsigned __int64)uStack_70 + alStack_60;
                  if (param_6 != (unsigned __int64 *)0x0) {
                    lVar2 = fn_82E70AB8(param_1,param_2,(unsigned __int64)uStack_70,uStack_6c * 10000,
                                          param_6);
                  }
                }
              }
              else {
                lVar2 = fn_82E71048(param_1,param_2 + 1,3,uStack_64,uStack_70,param_5);
              }
            }
          }
          if (piVar1 != (int *)0x0) {
            (**(int (***)())(*piVar1 + 8))(piVar1);
          }
        }
      }
    }
  }
  return lVar2;
}

