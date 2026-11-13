extern unsigned int *auStack_48;


__int64 fn_82E3A1C0(int param_1,__int64 *param_2)

{
  __int64 lVar1;
  int *piVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int *piStack_50;
  int *piStack_4c;
  unsigned int auStack_48 [2];
  __int64 alStack_40 [8];
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    lVar1 = -0x3ff2b9ab;
  }
  else if (param_2 == (__int64 *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    *param_2 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar1 = -0x3ff2c94a;
    }
    else {
      piStack_4c = (int *)0x0;
      piStack_50 = (int *)0x0;
      lVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x48))
                        (*(unsigned int **)(param_1 + 0x48),0xffffffff82154c18,&piStack_4c);
      piVar2 = piStack_50;
      if (-1 < lVar1) {
        auStack_48[0] = 0;
        lVar1 = (**(int (***)())(*piStack_4c + 0xc))(piStack_4c,0xffffffff8202e618,auStack_48);
        piVar2 = piStack_50;
        if (-1 < lVar1) {
          lVar3 = 0;
          uVar4 = 0;
          if (auStack_48[0] != 0) {
            do {
              lVar1 = (**(int (***)())(*piStack_4c + 0x10))
                                (piStack_4c,0xffffffff8202e618,uVar4,&piStack_50);
              piVar2 = piStack_50;
              if (lVar1 < 0) goto LAB_82e3a330;
              alStack_40[0] = 0;
              lVar1 = (**(int (***)())(*piStack_50 + 0x14))(piStack_50,0,alStack_40);
              piVar2 = piStack_50;
              if (lVar1 < 0) goto LAB_82e3a330;
              lVar3 = alStack_40[0] + lVar3;
              if (piStack_50 != (int *)0x0) {
                (**(int (***)())(*piStack_50 + 8))();
                piStack_50 = (int *)0x0;
              }
              piVar2 = (int *)0x0;
              uVar4 = uVar4 + 1;
            } while ((uVar4 & 0xffffffff) < (unsigned __int64)auStack_48[0]);
          }
          *param_2 = lVar3;
        }
      }
LAB_82e3a330:
      if (piStack_4c != (int *)0x0) {
        (**(int (***)())(*piStack_4c + 8))(piStack_4c);
        piStack_4c = (int *)0x0;
        piVar2 = piStack_50;
      }
      if (piVar2 != (int *)0x0) {
        (**(int (***)())(*piVar2 + 8))();
      }
    }
  }
  return lVar1;
}

