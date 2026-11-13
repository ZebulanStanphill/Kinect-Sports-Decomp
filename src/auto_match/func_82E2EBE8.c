extern unsigned int *auStack_80;
extern int fn_82E2DFA0();
extern int fn_82E2E068();
extern int fn_82E55A50();
extern int fn_82E56698();
extern int fn_82E57548();
extern int fn_82E59298();
extern int fn_82F68CC0();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_82154978;
extern unsigned int lbl_82154988;
extern unsigned int lbl_821549D8;
extern unsigned int lbl_821549E8;
extern unsigned int lbl_82154A68;
extern unsigned int lbl_82154A78;
extern unsigned int lbl_82154A88;
extern unsigned int lbl_82154A98;
extern unsigned int lbl_82154AA8;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_84;
extern unsigned int uStack_88;


unsigned __int64 fn_82E2EBE8(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned __int64 uVar8;
  int *piStack_a0;
  int *piStack_9c;
  int *piStack_98;
  int *piStack_94;
  int *piStack_90;
  int *piStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int auStack_80 [4];
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  
  if ((param_2 & 0xffffffff) == 0) {
    uVar4 = -(unsigned __int64)(param_3 != 0) & 0xffffffff80004003;
  }
  else {
    piStack_9c = (int *)0x0;
    piStack_90 = (int *)0x0;
    piStack_a0 = (int *)0x0;
    piStack_98 = (int *)0x0;
    piStack_94 = (int *)0x0;
    piStack_8c = (int *)0x0;
    uVar4 = (**(int (***)())**(unsigned int **)(param_1 + 0x90))
                      (*(unsigned int **)(param_1 + 0x90),0xffffffff82154c18,&piStack_9c);
    if (((-1 < (__int64)uVar4) &&
        (uVar4 = (**(int (***)())(*piStack_9c + 0x20))(piStack_9c,0xffffffff8202e618),
        -1 < (__int64)uVar4)) &&
       (uVar4 = fn_82E59298(param_3,&piStack_90), -1 < (__int64)uVar4)) {
      uStack_84 = 0;
      uVar4 = (**(int (***)())(*piStack_90 + 0x14))(piStack_90,&uStack_84,0);
      if (-1 < (__int64)uVar4) {
        fn_82F68CC0(uStack_84,param_2,param_3);
        uVar4 = (**(int (***)())(*piStack_90 + 0xc))(piStack_90,param_3);
        if (-1 < (__int64)uVar4) {
          auStack_80[0] = 0;
          uVar4 = (**(int (***)())(*piStack_9c + 0x28))
                            (piStack_9c,*(unsigned int *)(param_1 + 0x90),piStack_90,auStack_80);
          if (-1 < (__int64)uVar4) {
            uStack_88 = 0;
            uVar4 = (**(int (***)())(*piStack_9c + 0xc))(piStack_9c,0xffffffff8202e618,&uStack_88);
            if (-1 < (__int64)uVar4) {
              uVar8 = 0;
              if (uStack_88 != 0) {
                do {
                  if (piStack_a0 != (int *)0x0) {
                    (**(int (***)())(*piStack_a0 + 8))();
                    piStack_a0 = (int *)0x0;
                  }
                  uVar4 = (**(int (***)())(*piStack_9c + 0x10))
                                    (piStack_9c,0xffffffff8202e618,uVar8,&piStack_a0);
                  if ((__int64)uVar4 < 0) goto LAB_82e2f048;
                  uStack_70 = lbl_8202E618;
                  uStack_6c = lbl_8202E61C;
                  uStack_68 = lbl_8202E620;
                  uStack_64 = lbl_8202E624;
                  uVar4 = (**(int (***)())(*piStack_a0 + 0xc))(piStack_a0,&uStack_70);
                  if ((__int64)uVar4 < 0) goto LAB_82e2f048;
                  pbVar6 = (unsigned char *)&uStack_70;
                  pbVar7 = &lbl_821549D8;
                  do {
                    bVar1 = *pbVar7;
                    bVar2 = *pbVar6;
                    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                    pbVar7 = pbVar7 + 1;
                    pbVar6 = pbVar6 + 1;
                  } while (pbVar7 != (unsigned char *)&lbl_821549E8);
                  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
LAB_82e2efd0:
                    if (piStack_98 != (int *)0x0) {
                      (**(int (***)())(*piStack_98 + 8))();
                      piStack_98 = (int *)0x0;
                    }
                    uVar4 = fn_82E55A50(piStack_a0,&piStack_98);
                    if ((__int64)uVar4 < 0) goto LAB_82e2f048;
                    iVar5 = fn_82E2DFA0(param_1 + 0x100,piStack_98,0);
                    if (iVar5 == 0) {
LAB_82e2f110:
                      uVar4 = 0xffffffff8007000e;
                      goto LAB_82e2f048;
                    }
                    piStack_98 = (int *)0x0;
                  }
                  else {
                    pbVar6 = (unsigned char *)&uStack_70;
                    pbVar7 = &lbl_82154A68;
                    do {
                      bVar1 = *pbVar7;
                      bVar2 = *pbVar6;
                      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                      pbVar7 = pbVar7 + 1;
                      pbVar6 = pbVar6 + 1;
                    } while (pbVar7 != &lbl_82154A78);
                    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) goto LAB_82e2efd0;
                    pbVar6 = (unsigned char *)&uStack_70;
                    pbVar7 = &lbl_82154A78;
                    do {
                      bVar1 = *pbVar7;
                      bVar2 = *pbVar6;
                      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                      pbVar7 = pbVar7 + 1;
                      pbVar6 = pbVar6 + 1;
                    } while (pbVar7 != (unsigned char *)&lbl_82154A88);
                    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) goto LAB_82e2efd0;
                    pbVar6 = (unsigned char *)&uStack_70;
                    pbVar7 = (unsigned char *)&lbl_82154978;
                    do {
                      bVar1 = *pbVar7;
                      bVar2 = *pbVar6;
                      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                      pbVar7 = pbVar7 + 1;
                      pbVar6 = pbVar6 + 1;
                    } while (pbVar7 != (unsigned char *)&lbl_82154988);
                    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
                      if (piStack_94 != (int *)0x0) {
                        (**(int (***)())(*piStack_94 + 8))();
                        piStack_94 = (int *)0x0;
                      }
                      uVar4 = fn_82E56698(piStack_a0,&piStack_94);
                      if (-1 < (__int64)uVar4) {
                        iVar5 = fn_82E2E068(param_1 + 0x16c,piStack_94,0);
                        if (iVar5 != 0) {
                          piStack_94 = (int *)0x0;
                          goto LAB_82e2f020;
                        }
                        goto LAB_82e2f110;
                      }
                      goto LAB_82e2f048;
                    }
                    pbVar6 = (unsigned char *)&uStack_70;
                    pbVar7 = &lbl_82154A98;
                    do {
                      bVar1 = *pbVar7;
                      bVar2 = *pbVar6;
                      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                      pbVar7 = pbVar7 + 1;
                      pbVar6 = pbVar6 + 1;
                    } while (pbVar7 != &lbl_82154AA8);
                    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
                      if (piStack_8c != (int *)0x0) {
                        (**(int (***)())(*piStack_8c + 8))();
                        piStack_8c = (int *)0x0;
                      }
                      uVar4 = fn_82E57548(piStack_a0,&piStack_8c);
                      if ((__int64)uVar4 < 0) goto LAB_82e2f048;
                      if (*(int **)(param_1 + 0x1d8) != (int *)0x0) {
                        (**(int (***)())(**(int **)(param_1 + 0x1d8) + 8))();
                        *(unsigned int *)(param_1 + 0x1d8) = 0;
                      }
                      piVar3 = piStack_8c;
                      piStack_8c = (int *)0x0;
                      *(int **)(param_1 + 0x1d8) = piVar3;
                    }
                  }
LAB_82e2f020:
                  uVar8 = uVar8 + 1;
                } while ((uVar8 & 0xffffffff) < (unsigned __int64)uStack_88);
              }
              (**(int (***)())(*piStack_9c + 0x20))(piStack_9c,0xffffffff8202e618);
            }
          }
        }
      }
    }
LAB_82e2f048:
    if (piStack_9c != (int *)0x0) {
      (**(int (***)())(*piStack_9c + 8))();
      piStack_9c = (int *)0x0;
    }
    if (piStack_90 != (int *)0x0) {
      (**(int (***)())(*piStack_90 + 8))();
      piStack_90 = (int *)0x0;
    }
    if (piStack_a0 != (int *)0x0) {
      (**(int (***)())(*piStack_a0 + 8))();
      piStack_a0 = (int *)0x0;
    }
    if (piStack_98 != (int *)0x0) {
      (**(int (***)())(*piStack_98 + 8))();
      piStack_98 = (int *)0x0;
    }
    if (piStack_94 != (int *)0x0) {
      (**(int (***)())(*piStack_94 + 8))();
      piStack_94 = (int *)0x0;
    }
    if (piStack_8c != (int *)0x0) {
      (**(int (***)())(*piStack_8c + 8))();
    }
  }
  return uVar4;
}

