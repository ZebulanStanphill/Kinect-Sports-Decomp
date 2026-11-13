extern int fn_82A403E8();
extern int fn_82A43118();
extern int fn_82A4FA30();
extern int fn_82A507C0();
extern int fn_82A51730();


__int64 fn_82A43A98(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  int * apiStack_30;
  
  lVar3 = 0;
  if (param_2 != *(int *)(param_1 + 0x40)) {
    if ((*(unsigned int *)(param_1 + 0x38) & 4) == 0) {
      *(int *)(param_1 + 0x44) = param_2;
      *(int *)(param_1 + 0x40) = param_2;
      *(unsigned int *)(param_1 + 0x3c) = *(unsigned int *)(param_1 + 0x3c);
      lVar3 = fn_82A51730(param_1);
      if (-1 < lVar3) {
        if (*(int *)(param_1 + 0x34) == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = fn_82A4FA30();
        }
        if (-1 < (int)lVar3) {
          if ((*(unsigned int *)(param_1 + 0x38) & 8) != 0) {
            fn_82A403E8(*(unsigned int *)(param_1 + 0x30),*(unsigned int *)(param_1 + 0x84));
            *(unsigned int *)(param_1 + 0x84) = 0;
            apiStack_30 = (int *)0x0;
            lVar3 = fn_82A43118(&apiStack_30);
            if (lVar3 < 0) {
              return lVar3;
            }
            uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x78) + 4);
            lVar3 = fn_82A507C0(param_1,apiStack_30,*(unsigned int *)(param_1 + 0x8c),uVar1,
                                      uVar1,(unsigned int *)(param_1 + 0x84));
            (**(int (***)())(*apiStack_30 + 8))(apiStack_30);
            if ((int)lVar3 < 0) {
              return lVar3;
            }
            if (*(int *)(param_1 + 4) == 0) {
              puVar2 = *(unsigned int **)(param_1 + 0x84);
              lVar3 = (**(int (***)())*puVar2)(puVar2,0x1337f001);
            }
          }
          if (-1 < (int)lVar3) {
            lVar3 = (**(int (***)())(**(int **)(param_1 + 0x8c) + 0x2c))
                              (*(int **)(param_1 + 0x8c),
                               *(unsigned int *)(*(int *)(param_1 + 0x78) + 4),0x1337f001);
          }
        }
      }
    }
    else {
      lVar3 = -0x7769ffff;
    }
  }
  return lVar3;
}

