extern unsigned int *auStack_28;
extern int fn_82E32058();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


__int64 fn_82E24438(int param_1)

{
  __int64 lVar1;
  int *piStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned __int64 uStack_30;
  unsigned __int64 auStack_28;
  
  uStack_30 = 0;
  auStack_28 = 0;
  piStack_40 = (int *)0x0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  lVar1 = (**(int (***)())(**(int **)(param_1 + 0x104) + 0x10))(*(int **)(param_1 + 0x104),&uStack_30);
  if (-1 < lVar1) {
    lVar1 = (**(int (***)())(**(int **)(param_1 + 0x104) + 0x1c))(*(int **)(param_1 + 0x104),uStack_30);
    if (-1 < lVar1) {
      lVar1 = (**(int (***)())(**(int **)(param_1 + 0x100) + 0x38))
                        (*(int **)(param_1 + 0x100),&auStack_28);
      if (-1 < lVar1) {
        lVar1 = fn_82E32058(auStack_28 & 0xffffffff,&piStack_40);
        if (-1 < lVar1) {
          lVar1 = (**(int (***)())(**(int **)(param_1 + 0x100) + 0x3c))
                            (*(int **)(param_1 + 0x100),piStack_40,0);
          if (-1 < lVar1) {
            lVar1 = (**(int (***)())(*piStack_40 + 0xc))(piStack_40,&uStack_3c,0,&uStack_38);
            if ((-1 < lVar1) &&
               (lVar1 = (**(int (***)())(**(int **)(param_1 + 0x104) + 0x30))
                                  (*(int **)(param_1 + 0x104),uStack_3c,uStack_38,&uStack_34),
               -1 < lVar1)) {
              lVar1 = (**(int (***)())(*piStack_40 + 0x10))();
              uStack_3c = (int)lVar1 >> 0x1f & uStack_3c;
            }
          }
        }
      }
    }
  }
  if (uStack_3c != 0) {
    (**(int (***)())(*piStack_40 + 0x10))();
  }
  if (piStack_40 != (int *)0x0) {
    (**(int (***)())(*piStack_40 + 8))();
  }
  return lVar1;
}

