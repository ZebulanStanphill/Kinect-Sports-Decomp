extern int fn_82E2DF38();
extern int fn_82E2FB40();
extern int fn_82E30388();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E53480();
extern unsigned int uStack_48;


__int64 fn_82E30558(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  unsigned int uStack_48;
  int aiStack_44 [17];
  
  fn_82E50CB8(param_1 + 8);
  if (param_2 == (unsigned int *)0x0) {
    lVar3 = -0x7fffbffd;
  }
  else {
    piStack_50 = (int *)0x0;
    piStack_54 = (int *)0x0;
    piStack_60 = (int *)0x0;
    piStack_5c = (int *)0x0;
    piStack_58 = (int *)0x0;
    piStack_4c = (int *)0x0;
    lVar3 = (**(int (***)())*param_2)(param_2,0xffffffff82153dcc,&piStack_50);
    if (-1 < lVar3) {
      lVar3 = fn_82E2FB40(param_1 + -0x4c);
      if (-1 < lVar3) {
        uStack_48 = 0;
        lVar3 = (**(int (***)())(*piStack_50 + 0x84))(piStack_50,&uStack_48);
        if (-1 < lVar3) {
          uVar2 = 0;
          if (uStack_48 != 0) {
            do {
              if (piStack_54 != (int *)0x0) {
                (**(int (***)())(*piStack_54 + 8))();
                piStack_54 = (int *)0x0;
              }
              aiStack_44[0] = 0;
              lVar3 = (**(int (***)())(*piStack_50 + 0x88))(piStack_50,uVar2,aiStack_44,&piStack_54);
              if (lVar3 < 0) goto LAB_82e30844;
              if (aiStack_44[0] != 0) {
                if (piStack_5c != (int *)0x0) {
                  (**(int (***)())(*piStack_5c + 8))();
                  piStack_5c = (int *)0x0;
                }
                lVar3 = (**(int (***)())(*piStack_54 + 0x88))(piStack_54,&piStack_5c);
                if (lVar3 < 0) goto LAB_82e30844;
                if (piStack_60 != (int *)0x0) {
                  (**(int (***)())(*piStack_60 + 8))();
                  piStack_60 = (int *)0x0;
                }
                iVar1 = (**(int (***)())(*piStack_5c + 0x1c))(piStack_5c,&piStack_60);
                if ((iVar1 < 0) &&
                   ((lVar3 = (**(int (***)())(*piStack_5c + 0x14))(piStack_5c,0,&piStack_60), lVar3 < 0
                    || (lVar3 = (**(int (***)())(*piStack_5c + 0x18))(piStack_5c,piStack_60), lVar3 < 0)
                    ))) goto LAB_82e30844;
                if (piStack_58 != (int *)0x0) {
                  (**(int (***)())(*piStack_58 + 8))();
                  piStack_58 = (int *)0x0;
                }
                lVar3 = fn_82E53480(piStack_60,&piStack_58);
                if (lVar3 < 0) goto LAB_82e30844;
                if (piStack_4c != (int *)0x0) {
                  (**(int (***)())(*piStack_4c + 8))();
                  piStack_4c = (int *)0x0;
                }
                lVar3 = (**(int (***)())*piStack_58)(piStack_58,0xffffffff821545bc,&piStack_4c);
                if ((lVar3 < 0) ||
                   (lVar3 = (**(int (***)())(*piStack_4c + 0xc))(piStack_4c,piStack_54), lVar3 < 0))
                goto LAB_82e30844;
                iVar1 = fn_82E2DF38(param_1 + 0x48,piStack_58,0);
                if (iVar1 == 0) {
                  lVar3 = -0x7ff8fff2;
                  goto LAB_82e30844;
                }
                piStack_58 = (int *)0x0;
              }
              uVar2 = uVar2 + 1;
            } while ((uVar2 & 0xffffffff) < (unsigned __int64)uStack_48);
          }
          if (*(int *)(param_1 + 0xb0) == 0) {
            lVar3 = -0x3ff2b5bf;
          }
          else {
            lVar3 = fn_82E30388(param_1 + -0x4c,piStack_50);
          }
        }
      }
    }
LAB_82e30844:
    if (piStack_50 != (int *)0x0) {
      (**(int (***)())(*piStack_50 + 8))();
      piStack_50 = (int *)0x0;
    }
    if (piStack_54 != (int *)0x0) {
      (**(int (***)())(*piStack_54 + 8))();
      piStack_54 = (int *)0x0;
    }
    if (piStack_60 != (int *)0x0) {
      (**(int (***)())(*piStack_60 + 8))();
      piStack_60 = (int *)0x0;
    }
    if (piStack_5c != (int *)0x0) {
      (**(int (***)())(*piStack_5c + 8))();
      piStack_5c = (int *)0x0;
    }
    if (piStack_58 != (int *)0x0) {
      (**(int (***)())(*piStack_58 + 8))();
      piStack_58 = (int *)0x0;
    }
    if (piStack_4c != (int *)0x0) {
      (**(int (***)())(*piStack_4c + 8))();
      piStack_4c = (int *)0x0;
    }
    if ((int)lVar3 < 0) {
      fn_82E2FB40(param_1 + -0x4c);
    }
  }
  fn_82E50F10(param_1 + 8);
  return lVar3;
}

