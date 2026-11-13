typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c1;
extern unsigned int *auStack_e1;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern unsigned int *auStack_fc;
extern int fn_822315A0();
extern int fn_825089A0();
extern int fn_8288B4F8();
extern int fn_828C06A0();
extern int fn_828C1430();
extern int fn_828C1658();
extern int fn_82A1E740();
extern int fn_82CE0D80();
extern int fn_82F63108();
extern unsigned int iStack_ec;
extern unsigned int uRam83159fdc;
extern unsigned int uStack_100;


void fn_828C19A8(int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  bool bVar4;
  unsigned __int64 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  unsigned int *puVar9;
  unsigned char *puVar10;
  unsigned __int64 *puVar11;
  __int64 lVar12;
  unsigned int uStack_100;
  unsigned char auStack_fc [4];
  unsigned char auStack_f8 [8];
  unsigned char auStack_f0 [4];
  int iStack_ec;
  unsigned char auStack_e1 [17];
  int *piStack_d0;
  unsigned char auStack_c1 [17];
  int *piStack_b0;
  unsigned __int64 auStack_a0 [14];
  
  uRam83159fdc = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    uStack_100 = 0xffffffff;
    iVar6 = XNotifyGetNext(*(int *)(param_1 + 0x28),0x2000002,auStack_f8,&uStack_100);
    while (iVar6 != 0) {
      if (uStack_100 < 4) {
        auStack_a0[0] = 0;
        lVar12 = 9;
        puVar5 = auStack_a0;
        do {
          puVar11 = puVar5;
          puVar5 = puVar11 + 1;
          *puVar5 = 0;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        *(unsigned int *)(puVar11 + 2) = 0;
        iVar6 = fn_82CE0D80(uStack_100,auStack_a0);
        if ((iVar6 == 0) && (*(int *)(param_1 + 0x20) != 0)) {
          if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F63108();
          }
          (**(int (***)())(**(int **)(param_1 + 0x20) + 4))
                    (auStack_c1 + 1,*(int **)(param_1 + 0x20),auStack_a0);
          if (piStack_b0 != (int *)0x0) {
            fn_828C1430(auStack_f0,auStack_fc,&uStack_100,auStack_a0,auStack_c1 + 1);
            fn_828C1658(param_1 + 4,*(unsigned int *)(param_1 + 4),auStack_f0);
            if (iStack_ec != 0) {
              fn_822315A0();
            }
            if (piStack_b0 != (int *)0x0) {
              (**(int (***)())(*piStack_b0 + 0xc))
                        (piStack_b0,
                         (int)(auStack_c1 + -(int)piStack_b0 + 1) -
                         (int)(auStack_c1 +
                              (unsigned int)(auStack_c1 + -(int)piStack_b0 + 1 == (unsigned char *)0x0) +
                              -(int)piStack_b0));
              piStack_b0 = (int *)0x0;
            }
          }
        }
      }
      iVar6 = XNotifyGetNext(*(unsigned int *)(param_1 + 0x28),0x2000002,auStack_f8,&uStack_100);
    }
  }
  piVar8 = (int *)**(int **)(param_1 + 4);
  if (piVar8 != *(int **)(param_1 + 4)) {
    do {
      iVar6 = piVar8[2];
      iVar1 = *(int *)(*(int *)(iVar6 + 0x70) + 0x7c);
      if ((((iVar1 - 1U < 5) && (iVar1 != 1)) && (iVar1 != 2)) && (iVar1 != 3)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        if (*(int *)(iVar6 + 0x68) == 0) {
          piStack_d0 = (int *)0x0;
LAB_828c1d40:
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        puVar10 = auStack_e1 + 1;
        if (*(int *)(iVar6 + 0x68) != iVar6 + 0x58) {
          puVar10 = (unsigned char *)0x0;
        }
        piStack_d0 = (int *)(**(int (***)())**(unsigned int **)(iVar6 + 0x68))
                                      (*(unsigned int **)(iVar6 + 0x68),puVar10);
        if (piStack_d0 == (int *)0x0) goto LAB_828c1d40;
        (**(int (***)())(*piStack_d0 + 4))(piStack_d0,piVar8 + 2);
        piVar2 = (int *)*piVar8;
        if (piVar8 != *(int **)(param_1 + 4)) {
          *(int **)piVar8[1] = piVar2;
          *(int *)(*piVar8 + 4) = piVar8[1];
          if (piVar8[3] != 0) {
            fn_822315A0();
          }
          piVar7 = (int *)fn_825089A0();
          (**(int (***)())(*piVar7 + 0x28))(piVar7,piVar8);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        }
        piVar8 = piVar2;
        if (piStack_d0 != (int *)0x0) {
          (**(int (***)())(*piStack_d0 + 0xc))
                    (piStack_d0,
                     (int)(auStack_e1 + -(int)piStack_d0 + 1) -
                     (int)(auStack_e1 +
                          (unsigned int)(auStack_e1 + -(int)piStack_d0 + 1 == (unsigned char *)0x0) +
                          -(int)piStack_d0));
          piStack_d0 = (int *)0x0;
        }
      }
      else {
        piVar8 = (int *)*piVar8;
      }
    } while (piVar8 != *(int **)(param_1 + 4));
  }
  piVar8 = (int *)**(int **)(param_1 + 0x2c);
  if (piVar8 != *(int **)(param_1 + 0x2c)) {
    do {
      puVar3 = (unsigned int *)piVar8[2];
      if ((*(char *)(puVar3 + 0x13) == '\x01') && (puVar3[0xb] != 0x3e5)) {
        *(unsigned char *)(puVar3 + 0x13) = 0;
        uStack_100 = 0;
        fn_82A1E740(puVar3 + 0xb,&uStack_100,1);
        if (uStack_100 == 0x3e4) {
          *(unsigned char *)(puVar3 + 0x13) = 1;
        }
      }
      if (*(char *)(puVar3 + 0x13) == '\0') {
        piVar8[2] = 0;
        piVar2 = (int *)*piVar8;
        if (piVar8 != *(int **)(param_1 + 0x2c)) {
          *(int **)piVar8[1] = piVar2;
          *(int *)(*piVar8 + 4) = piVar8[1];
          piVar7 = (int *)fn_825089A0();
          (**(int (***)())(*piVar7 + 0x28))(piVar7,piVar8);
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
        }
        (**(int (***)())*puVar3)(puVar3,1);
      }
      else {
        piVar2 = (int *)*piVar8;
      }
      piVar8 = piVar2;
    } while (piVar2 != *(int **)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    piVar8 = (int *)fn_825089A0();
    lVar12 = (**(int (***)())(*piVar8 + 0xc))();
    uStack_100 = **(int **)(param_1 + 0x3c);
    if ((int *)uStack_100 != *(int **)(param_1 + 0x3c)) {
      do {
        if ((unsigned __int64)(lVar12 - *(__int64 *)(uStack_100 + 0x18)) < 5000) {
          fn_8288B4F8(&uStack_100);
        }
        else {
          puVar9 = (unsigned int *)fn_828C06A0(auStack_f8,param_1 + 0x38);
          uStack_100 = *puVar9;
        }
      } while (uStack_100 != *(unsigned int *)(param_1 + 0x3c));
    }
  }
  return;
}

