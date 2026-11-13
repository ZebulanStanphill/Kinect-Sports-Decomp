extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82E3BDF8();
extern int fn_82E3C690();
extern int fn_82E6EEC0();
extern unsigned int uStack_94;


__int64 fn_82E3E1D0(__int64 param_1,int *param_2,unsigned __int64 param_3,__int64 param_4,
                      unsigned __int64 param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  __int64 lVar5;
  int *piStack_a0;
  int *piStack_9c;
  int *piStack_98;
  unsigned int uStack_94;
  unsigned char auStack_90 [8];
  __int64 lStack_88;
  unsigned __int64 auStack_80 [2];
  unsigned char auStack_70 [112];
  
  if ((param_2 == (int *)0x0) || ((param_3 & 0xffffffff) == 0)) {
    lVar5 = -0x7fffbffd;
  }
  else {
    param_1 = param_1 + 0x1ac;
    piStack_a0 = (int *)0x0;
    piStack_9c = (int *)0x0;
    piStack_98 = (int *)0x0;
    iVar1 = fn_82E3BDF8(param_1,auStack_90);
    if (iVar1 == 0) {
      lVar5 = -0x3ff2b9aa;
    }
    else {
      iVar1 = fn_82E3C690(param_1,auStack_90,auStack_70,&piStack_98);
      piVar3 = (int *)0x0;
      piVar2 = piStack_98;
      while (piStack_98 = piVar2, iVar1 != 0) {
        lVar5 = (**(int (***)())(*piVar2 + 0xc))(piVar2,&piStack_a0);
        piVar4 = piStack_a0;
        piVar3 = piStack_9c;
        if (lVar5 < 0) goto LAB_82e3e43c;
        if (piStack_a0 == param_2) {
LAB_82e3e2ec:
          if (piVar2 == (int *)0x0) {
            lVar5 = -0x3ff2c945;
            piVar4 = piStack_a0;
            piVar3 = piStack_9c;
          }
          else {
            lStack_88 = 0;
            lVar5 = fn_82E6EEC0(piVar2,&piStack_9c,&lStack_88);
            piVar4 = piStack_a0;
            piVar3 = piStack_9c;
            if (-1 < lVar5) {
              if (piStack_9c == (int *)0x0) {
                lVar5 = -0x3ff2c945;
                piVar3 = (int *)0x0;
              }
              else {
                auStack_80[0] = 0;
                lVar5 = (**(int (***)())(*piStack_9c + 0x18))(piStack_9c,auStack_80);
                piVar4 = piStack_a0;
                piVar3 = piStack_9c;
                if ((-1 < lVar5) &&
                   (lVar5 = (**(int (***)())(*piStack_9c + 0x1c))(piStack_9c,lStack_88 + param_4),
                   piVar4 = piStack_a0, piVar3 = piStack_9c, -1 < lVar5)) {
                  uStack_94 = 0;
                  lVar5 = (**(int (***)())(*piStack_9c + 0x24))(piStack_9c,param_3,param_5,&uStack_94);
                  (**(int (***)())(*piStack_9c + 0x1c))(piStack_9c,auStack_80[0]);
                  piVar4 = piStack_a0;
                  piVar3 = piStack_9c;
                  if ((-1 < (int)lVar5) && ((unsigned __int64)uStack_94 != (param_5 & 0xffffffff))) {
                    lVar5 = -0x3ff2c945;
                  }
                }
              }
            }
          }
          goto LAB_82e3e43c;
        }
        piVar2 = (int *)(**(int (***)())(*piVar2 + 0x20))(piVar2);
        if (piVar2 != (int *)0x0) {
          if (piStack_a0 != (int *)0x0) {
            (**(int (***)())(*piStack_a0 + 8))();
            piStack_a0 = (int *)0x0;
          }
          lVar5 = (**(int (***)())(*piVar2 + 0xc))(piVar2,&piStack_a0);
          piVar4 = piStack_a0;
          piVar3 = piStack_9c;
          if (lVar5 < 0) goto LAB_82e3e43c;
          if (piStack_a0 == param_2) goto LAB_82e3e2ec;
        }
        if (piStack_a0 != (int *)0x0) {
          (**(int (***)())(*piStack_a0 + 8))(piStack_a0);
          piStack_a0 = (int *)0x0;
        }
        iVar1 = fn_82E3C690(param_1,auStack_90,auStack_70,&piStack_98);
        piVar3 = piStack_9c;
        piVar2 = piStack_98;
      }
      lVar5 = -0x3ff2b9aa;
      piVar4 = (int *)0x0;
LAB_82e3e43c:
      if (piVar4 != (int *)0x0) {
        (**(int (***)())(*piVar4 + 8))(piVar4);
        piStack_a0 = (int *)0x0;
        piVar3 = piStack_9c;
      }
      if (piVar3 != (int *)0x0) {
        (**(int (***)())(*piVar3 + 8))(piVar3);
      }
    }
  }
  return lVar5;
}

