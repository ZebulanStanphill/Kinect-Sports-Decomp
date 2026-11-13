extern unsigned int *auStack_58;
extern int fn_82E3B468();
extern unsigned int iStack_70;
extern unsigned int uStack_5c;


__int64 fn_82E3C118(int param_1,int *param_2)

{
  __int64 lVar1;
  int iVar2;
  int *piVar3;
  int *piStack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int iStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  unsigned int uStack_5c;
  unsigned int auStack_58 [2];
  __int64 lStack_50;
  __int64 alStack_48 [9];
  
  if (param_2 == (int *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    piStack_68 = (int *)0x0;
    piStack_64 = (int *)0x0;
    piStack_60 = (int *)0x0;
    piStack_7c = (int *)0x0;
    piVar3 = (int *)0x0;
    piStack_80 = (int *)0x0;
    piStack_78 = (int *)0x0;
    piStack_74 = (int *)0x0;
    piStack_6c = (int *)0x0;
    lVar1 = (**(int (***)())*param_2)(param_2,0xffffffff82154c58,&piStack_68);
    if ((-1 < lVar1) &&
       (lVar1 = (**(int (***)())(*piStack_68 + 0x10))(piStack_68,&piStack_64), -1 < lVar1)) {
      iStack_70 = 0;
      lVar1 = (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff82154a18,&iStack_70);
      if ((-1 < lVar1) &&
         (((lVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x48))
                              (*(unsigned int **)(param_1 + 0x48),0xffffffff82154c18,&piStack_60),
           -1 < lVar1 &&
           (lVar1 = (**(int (***)())(*piStack_60 + 0x24))(piStack_60,0xffffffff8202e618,&piStack_7c),
           -1 < lVar1)) && (lVar1 = (**(int (***)())(*piStack_7c + 0x14))(), -1 < lVar1)))) {
        uStack_5c = 0;
        iVar2 = (**(int (***)())(*piStack_7c + 0xc))(piStack_7c,1,&piStack_80,&uStack_5c);
        while (piVar3 = (int *)0x0, iVar2 == 0) {
          iVar2 = (**(int (***)())*piStack_80)(piStack_80,0xffffffff82154c98,&piStack_78);
          if (-1 < iVar2) {
            if (piStack_80 != (int *)0x0) {
              (**(int (***)())(*piStack_80 + 8))();
              piStack_80 = (int *)0x0;
            }
            lVar1 = fn_82E3B468(param_1,piStack_78,piStack_64,&piStack_6c);
            piVar3 = piStack_6c;
            if (-1 < lVar1) {
              if (piStack_78 != (int *)0x0) {
                (**(int (***)())(*piStack_78 + 8))();
                piStack_78 = (int *)0x0;
              }
              piVar3 = piStack_6c;
              lStack_50 = 0;
              lVar1 = (**(int (***)())(*piStack_6c + 0x14))(piStack_6c,0,&lStack_50);
              if (-1 < lVar1) {
                if (iStack_70 != 0) {
                  lVar1 = (**(int (***)())(*param_2 + 0x10))(param_2,0xffffffff82154a18,0,&piStack_74);
                  if (lVar1 < 0) break;
                  alStack_48[0] = 0;
                  lVar1 = (**(int (***)())(*piStack_74 + 0x14))(piStack_74,0,alStack_48);
                  if (lVar1 < 0) break;
                  if (lStack_50 == alStack_48[0]) {
                    lVar1 = (**(int (***)())(*param_2 + 0x18))(param_2,0xffffffff82154a18,0,0);
                    if (-1 < lVar1) {
                      auStack_58[0] = 0;
                      lVar1 = (**(int (***)())(*param_2 + 0x14))(param_2,piVar3,auStack_58);
                      if (-1 < lVar1) {
                        iStack_70 = iStack_70 + -1;
                        if (piStack_74 != (int *)0x0) {
                          (**(int (***)())(*piStack_74 + 8))();
                          piStack_74 = (int *)0x0;
                        }
                        (**(int (***)())(*piVar3 + 8))(piVar3);
                        piStack_6c = (int *)0x0;
                        goto LAB_82e3c44c;
                      }
                    }
                    break;
                  }
                }
                lVar1 = -0x3ff2b9a9;
              }
            }
            break;
          }
          if (piStack_80 != (int *)0x0) {
            (**(int (***)())(*piStack_80 + 8))();
            piStack_80 = (int *)0x0;
          }
LAB_82e3c44c:
          iVar2 = (**(int (***)())(*piStack_7c + 0xc))(piStack_7c,1,&piStack_80,&uStack_5c);
        }
      }
    }
    if (piStack_68 != (int *)0x0) {
      (**(int (***)())(*piStack_68 + 8))();
      piStack_68 = (int *)0x0;
    }
    if (piStack_64 != (int *)0x0) {
      (**(int (***)())(*piStack_64 + 8))();
      piStack_64 = (int *)0x0;
    }
    if (piStack_60 != (int *)0x0) {
      (**(int (***)())(*piStack_60 + 8))();
      piStack_60 = (int *)0x0;
    }
    if (piStack_7c != (int *)0x0) {
      (**(int (***)())(*piStack_7c + 8))();
      piStack_7c = (int *)0x0;
    }
    if (piStack_80 != (int *)0x0) {
      (**(int (***)())(*piStack_80 + 8))();
      piStack_80 = (int *)0x0;
    }
    if (piStack_78 != (int *)0x0) {
      (**(int (***)())(*piStack_78 + 8))();
      piStack_78 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      (**(int (***)())(*piVar3 + 8))(piVar3);
    }
    if (piStack_74 != (int *)0x0) {
      (**(int (***)())(*piStack_74 + 8))();
    }
  }
  return lVar1;
}

