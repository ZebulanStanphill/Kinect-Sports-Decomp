extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E6FC88();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


__int64 fn_82E715A8(int param_1,int *param_2)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  __int64 alStack_38;
  
  if (param_2 == (int *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    alStack_38 = 0;
    lVar1 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x4c))
                      (*(int **)(param_1 + 0x58),param_2,&alStack_38);
    if (-1 < lVar1) {
      uStack_40 = 0;
      lVar1 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x44))(*(int **)(param_1 + 0x58),&uStack_40)
      ;
      if (-1 < lVar1) {
        lVar2 = fn_82E50BE8(uStack_40,0,0,0,0);
        if (lVar2 == 0) {
          lVar1 = -0x7ff8fff2;
        }
        else {
          uStack_3c = 0;
          lVar1 = (**(int (***)())(*param_2 + 0x30))(param_2,lVar2,uStack_40,&uStack_3c);
          if (((-1 < lVar1) &&
              (lVar1 = fn_82E6FC88(param_1,*(__int64 *)(param_1 + 0x30) + alStack_38),
              -1 < lVar1)) &&
             (lVar1 = (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x1c))
                                (*(int **)(param_1 + 0x2c),
                                 *(__int64 *)(param_1 + 0x30) + alStack_38), -1 < lVar1)) {
            lVar1 = (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x30))
                              (*(int **)(param_1 + 0x2c),lVar2,uStack_40,&uStack_3c);
          }
          fn_82E4FE40(lVar2);
        }
      }
    }
  }
  return lVar1;
}

