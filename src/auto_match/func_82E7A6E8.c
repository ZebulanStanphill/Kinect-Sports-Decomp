extern int fn_82E49060();
extern int fn_82E76EB0();
extern int fn_82E79C08();
extern int fn_82E79F10();
extern int fn_82E7A3B8();


__int64 fn_82E7A6E8(int param_1,unsigned int *param_2)

{
  __int64 lVar1;
  unsigned short uVar2;
  int * apiStack_30;
  
  if (param_2 == (unsigned int *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    uVar2 = 0;
    *param_2 = 0;
    if (*(int *)(param_1 + 0x148) == 0) {
      lVar1 = -0x3ff2c94a;
    }
    else {
      apiStack_30 = (int *)0x0;
      lVar1 = fn_82E49060(&apiStack_30);
      if ((-1 < lVar1) && (lVar1 = fn_82E79C08(param_1,apiStack_30), -1 < lVar1)) {
        if ((unsigned int)*(unsigned short *)(param_1 + 0x146) == *(unsigned int *)(param_1 + 0x1e0)) {
          if (*(unsigned short *)(param_1 + 0x146) != 0) {
            do {
              lVar1 = fn_82E79F10(param_1,uVar2,apiStack_30);
              if ((lVar1 < 0) || (lVar1 = fn_82E7A3B8(param_1,uVar2,apiStack_30), lVar1 < 0))
              goto LAB_82e7a770;
              uVar2 = uVar2 + 1;
            } while (uVar2 < *(unsigned short *)(param_1 + 0x146));
          }
          lVar1 = fn_82E76EB0(param_1,apiStack_30);
          if (-1 < lVar1) {
            *param_2 = apiStack_30;
            return lVar1;
          }
        }
        else {
          lVar1 = -0x7fff0001;
        }
      }
LAB_82e7a770:
      if (apiStack_30 != (int *)0x0) {
        (**(int (***)())(*apiStack_30 + 8))();
      }
    }
  }
  return lVar1;
}

