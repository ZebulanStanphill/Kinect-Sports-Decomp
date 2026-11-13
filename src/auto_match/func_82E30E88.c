extern unsigned int *auStack_58;
extern int fn_82E2F4C8();
extern int fn_82E2F530();
extern int fn_82E5D7B8();
extern int fn_82E5DCA8();
extern int fn_82E5DFB8();
extern unsigned int uStack_5c;


__int64 fn_82E30E88(int param_1,int *param_2)

{
  int *piVar1;
  __int64 lVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int *piStack_60;
  unsigned int uStack_5c;
  unsigned __int64 auStack_58;
  
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  auStack_58 = 0;
  lVar2 = 0;
  piStack_60 = (int *)0x0;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x168) != 0) {
    do {
      piVar1 = piStack_60;
      lVar2 = fn_82E2F4C8(param_1 + 0x100,uVar4,&uStack_5c);
      uVar3 = -(unsigned int)(lVar2 != 0) & uStack_5c;
      if (uVar3 == 0) goto LAB_82e310d8;
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 8))(piVar1);
        piStack_60 = (int *)0x0;
      }
      lVar2 = fn_82E5D7B8(uVar3,*(unsigned int *)(param_1 + 0x90),&piStack_60);
      piVar1 = piStack_60;
      if ((lVar2 < 0) ||
         (lVar2 = (**(int (***)())(*piStack_60 + 0x14))(piStack_60,0,&auStack_58), piVar1 = piStack_60,
         lVar2 < 0)) goto LAB_82e310fc;
      if (0xffffffff < auStack_58) goto LAB_82e310cc;
      uVar4 = uVar4 + 1;
      *param_2 = (int)auStack_58 + *param_2;
    } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x168));
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x1d4) != 0) {
    do {
      piVar1 = piStack_60;
      lVar2 = fn_82E2F530(param_1 + 0x16c,uVar4,&uStack_5c);
      uVar3 = -(unsigned int)(lVar2 != 0) & uStack_5c;
      if (uVar3 == 0) goto LAB_82e310d8;
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 8))(piVar1);
        piStack_60 = (int *)0x0;
      }
      lVar2 = fn_82E5DCA8(uVar3,*(unsigned int *)(param_1 + 0x90),&piStack_60);
      piVar1 = piStack_60;
      if ((lVar2 < 0) ||
         (lVar2 = (**(int (***)())(*piStack_60 + 0x14))(piStack_60,0,&auStack_58), piVar1 = piStack_60,
         lVar2 < 0)) goto LAB_82e310fc;
      if (0xffffffff < auStack_58) goto LAB_82e310cc;
      uVar4 = uVar4 + 1;
      *param_2 = (int)auStack_58 + *param_2;
    } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1d4));
  }
  piVar1 = piStack_60;
  if (*(int *)(param_1 + 0x1d8) != 0) {
    if (piStack_60 != (int *)0x0) {
      (**(int (***)())(*piStack_60 + 8))(piStack_60);
      piStack_60 = (int *)0x0;
    }
    lVar2 = fn_82E5DFB8(*(unsigned int *)(param_1 + 0x1d8),*(unsigned int *)(param_1 + 0x90),
                              &piStack_60);
    piVar1 = piStack_60;
    if ((-1 < lVar2) &&
       (lVar2 = (**(int (***)())(*piStack_60 + 0x14))(piStack_60,0,&auStack_58), piVar1 = piStack_60,
       -1 < lVar2)) {
      if (auStack_58 < 0x100000000) {
        *param_2 = (int)auStack_58 + *param_2;
      }
      else {
LAB_82e310cc:
        lVar2 = -0x7fff0001;
        piVar1 = piStack_60;
      }
    }
  }
LAB_82e310fc:
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 8))(piVar1);
  }
  return lVar2;
LAB_82e310d8:
  lVar2 = -0x3ff2c945;
  goto LAB_82e310fc;
}

