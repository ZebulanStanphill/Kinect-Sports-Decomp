extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82E43BE8();
extern int fn_82E5D2F8();
extern int fn_82E5D5F0();
extern int fn_82E5FC30();
extern int fn_82E5FEE8();
extern int fn_82E61058();
extern int fn_82E61548();
extern int fn_82E617F8();


__int64 fn_82E43DC0(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned short auStack_40;
  int *piStack_3c;
  unsigned int auStack_38 [2];
  
  if (((*(int *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x1c) == 0)) ||
     (*(int *)(param_1 + 0x78) == 0)) {
    lVar1 = -0x3ff2c94e;
  }
  else {
    piStack_3c = (int *)0x0;
    lVar1 = fn_82E61058();
    if (((-1 < lVar1) &&
        (lVar1 = fn_82E61548(*(unsigned int *)(param_1 + 0x78),*(unsigned int *)(param_1 + 0x18),
                                   *(unsigned int *)(param_1 + 0x1c)), -1 < lVar1)) &&
       (lVar1 = fn_82E5FC30(*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c)),
       -1 < lVar1)) {
      auStack_38[0] = 0;
      lVar1 = (**(int (***)())(**(int **)(param_1 + 0x78) + 0x84))(*(int **)(param_1 + 0x78),auStack_38)
      ;
      if (-1 < lVar1) {
        uVar2 = 0;
        if (auStack_38[0] != 0) {
          do {
            auStack_40 = 0;
            lVar1 = (**(int (***)())(**(int **)(param_1 + 0x78) + 0x88))
                              (*(int **)(param_1 + 0x78),uVar2,&auStack_40,&piStack_3c);
            if ((lVar1 < 0) ||
               (lVar1 = fn_82E617F8(piStack_3c,*(unsigned int *)(param_1 + 0x18),
                                          *(unsigned int *)(param_1 + 0x1c)), lVar1 < 0))
            goto LAB_82e43f14;
            if (piStack_3c != (int *)0x0) {
              (**(int (***)())(*piStack_3c + 8))();
              piStack_3c = (int *)0x0;
            }
            uVar2 = uVar2 + 1;
          } while ((uVar2 & 0xffffffff) < (unsigned __int64)auStack_38[0]);
        }
        lVar1 = fn_82E5FEE8(*(unsigned int *)(param_1 + 0x78),*(unsigned int *)(param_1 + 0x18),
                                  *(unsigned int *)(param_1 + 0x1c));
        if ((-1 < lVar1) && (lVar1 = fn_82E5D2F8(*(unsigned int *)(param_1 + 0x18)), -1 < lVar1)
           ) {
          lVar1 = fn_82E5D5F0(*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c))
          ;
        }
      }
    }
LAB_82e43f14:
    if (piStack_3c != (int *)0x0) {
      (**(int (***)())(*piStack_3c + 8))();
      piStack_3c = (int *)0x0;
    }
    if ((int)lVar1 < 0) {
      fn_82E43BE8(param_1);
    }
  }
  return lVar1;
}

