extern unsigned int *puRam83155aa0;
typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_90;
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696480();
extern int fn_82696610();
extern int fn_82696AD0();
extern int fn_826A18A8();
extern int fn_826A8C78();
extern int fn_826B3660();
extern int fn_826B3798();
extern int fn_826BD868();
extern unsigned int iStack_a4;
extern unsigned int lbl_82007AA4;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


unsigned __int64 fn_826B3E08(int param_1,unsigned int *param_2,char param_3,int *param_4)

{
  unsigned char *puVar1;
  unsigned int *puVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  char cVar9;
  int iVar6;
  unsigned __int64 uVar5;
  int *piVar7;
  char cVar10;
  unsigned int uVar8;
  __int64 lVar11;
  int iVar12;
  unsigned char *puVar13;
  unsigned char *puVar14;
  char cVar15;
  char *pcVar16;
  char acStack_d0;
  char acStack_c0 [16];
  char *pcStack_b0;
  char *pcStack_ac;
  unsigned char *puStack_a8;
  int iStack_a4;
  char acStack_a0 [16];
  unsigned char auStack_90 [16];
  int *piStack_80;
  char *pcStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;

  if (*(int *)(*(int *)*param_2 + 0x10) == 0) {
    if (param_2[1] != 0) {
      fn_82696480(param_2[1],*(unsigned int *)(param_1 + 0x74));
    }
    uVar4 = 1;
  }
  else {
    puVar1 = (unsigned char *)param_2[4];
    acStack_c0[0] = '\0';
    cVar15 = '\0';
    puVar2 = *(unsigned int **)*param_2;
    pcVar16 = (char *)*puVar2;
    iVar6 = puVar2[4];
    if (puVar1 != (unsigned char *)0x0) {
      fn_826959C8(puVar1);
      *puVar1 = 0;
    }
    if ((unsigned int *)param_2[3] != (unsigned int *)0x0) {
      *(unsigned int *)param_2[3] = 0;
    }
    if (*pcVar16 == '/') {
      uVar4 = (**(int (***)())(**(int **)(param_1 + 0x74) + 0x54))(*(int **)(param_1 + 0x74),0);
      fn_82696480(acStack_c0,uVar4);
      puVar14 = puRam83155aa0;
      cVar15 = '\x01';
      pcVar16 = pcVar16 + 1;
      iVar6 = iVar6 + -1;
      if (param_2[4] != 0) {
        fn_82695FA0(param_2[4],acStack_c0);
      }
    }
    else {
      puVar14 = &lbl_82007AA4;
      if (*pcVar16 == '.') {
        puVar14 = puRam83155aa0;
      }
    }
    pcStack_ac = pcVar16 + iVar6;
    uVar4 = 1;
    acStack_d0 = '\0';
    iStack_a4 = *(int *)(*(int *)(param_1 + 0x78) + 8);
    *(int *)(iStack_a4 + 8) = *(int *)(iStack_a4 + 8) + 1;
    pcStack_b0 = pcVar16;
    puStack_a8 = puVar14;
    while (cVar10 = fn_826A8C78(&pcStack_b0,&acStack_d0), iVar6 = iStack_a4, cVar10 != '\0') {
      if (*(int *)(iStack_a4 + 0x10) != 0) {
        if (param_4 != (int *)0x0) {
          *(int *)(iStack_a4 + 8) = *(int *)(iStack_a4 + 8) + 1;
          lVar11 = (unsigned __int64)*(unsigned int *)(*param_4 + 8) - 1;
          *(int *)(*param_4 + 8) = (int)lVar11;
          if (lVar11 == 0) {
            fn_826944C8();
          }
          *param_4 = iVar6;
        }
        cVar10 = '\0';
        acStack_a0[0] = '\0';
        if (acStack_c0[0] == '\a') {
LAB_826b3fec:
          if (cVar15 == '\0') {
            if ((param_2[2] != 0) && (*(int *)(param_2[2] + 4) != 0)) {
              iVar12 = ((int *)param_2[2])[1] * 8 + *(int *)param_2[2];
              iVar6 = *(int *)(iVar12 + -8);
              if (*(int *)(iVar12 + -4) < 0) {
                if (iVar6 == 0) {
LAB_826b4048:
                  piVar7 = (int *)0x0;
                }
                else {
                  piVar7 = (int *)(iVar6 + 0x10);
                }
              }
              else {
                piVar7 = (int *)(iVar6 + 0x68);
                if (iVar6 == 0) goto LAB_826b4048;
              }
              iVar6 = (**(int (***)())(*piVar7 + 8))(piVar7);
              if ((iVar6 < 2) || (bVar3 = true, 5 < iVar6)) {
                bVar3 = false;
              }
              if (bVar3) {
                uVar5 = fn_826BD868(piVar7);
                fn_82696480(acStack_c0,uVar5);
              }
            }
            if ((acStack_c0[0] == '\0') || (bVar3 = false, acStack_c0[0] == '\n')) {
              bVar3 = true;
            }
            if (bVar3) {
              fn_82696480(acStack_c0,*(unsigned int *)(param_1 + 0x74));
            }
            cVar15 = '\x01';
          }
          piVar7 = (int *)fn_82695370(acStack_c0,param_1);
          if ((piVar7 != (int *)0x0) &&
             (lVar11 = (**(int (***)())(*piVar7 + 0xec))(piVar7,&iStack_a4,uVar4), lVar11 != 0)) {
            fn_82696480(acStack_a0);
            cVar10 = '\x01';
          }
        }
        else if (cVar15 == '\0') {
          if (*(int *)(*(int *)(param_1 + 0x78) + 200) == iStack_a4) {
LAB_826b3fe0:
            bVar3 = true;
          }
          else {
            cVar9 = fn_826A18A8(*(int *)(param_1 + 0x78) + 0x104,&iStack_a4,
                                      -(6 < *(unsigned char *)(param_1 + 0x7c)) & 1);
            bVar3 = false;
            if (cVar9 != '\0') goto LAB_826b3fe0;
          }
          if (bVar3) goto LAB_826b3fec;
        }
        if (cVar10 == '\0') {
          if (cVar15 == '\0') {
            uStack_78 = param_2[2];
            piStack_80 = &iStack_a4;
            pcStack_7c = acStack_a0;
            uStack_74 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            cVar10 = fn_826B3798(param_1,&piStack_80);
          }
          else {
            if ((acStack_c0[0] == '\x03') || (bVar3 = false, acStack_c0[0] == '\x04')) {
              bVar3 = true;
            }
            if (((bVar3) || (acStack_c0[0] == '\x02')) || (acStack_c0[0] == '\x05')) {
              uVar4 = fn_826B3660(auStack_90,param_1,acStack_c0);
              fn_82695FA0(acStack_c0,uVar4);
              fn_82696330(auStack_90);
            }
            if ((acStack_c0[0] == '\x06') || (acStack_c0[0] == '\a')) {
LAB_826b41dc:
              piVar7 = (int *)fn_82696AD0(acStack_c0,param_1);
              if (piVar7 != (int *)0x0) {
                cVar10 = (**(int (***)())(*piVar7 + 0x10))(piVar7,param_1,&iStack_a4,acStack_a0);
                if (cVar10 == '\0') goto LAB_826b4218;
              }
            }
            else {
              if ((acStack_c0[0] == '\b') || (bVar3 = false, acStack_c0[0] == '\v')) {
                bVar3 = true;
              }
              if (bVar3) goto LAB_826b41dc;
LAB_826b4218:
              fn_826959C8(acStack_a0);
              acStack_a0[0] = '\0';
              cVar10 = '\0';
            }
          }
        }
        cVar15 = cVar10;
        if (param_2[4] != 0) {
          fn_82695FA0(param_2[4],acStack_c0);
        }
        if (((param_3 != '\0') && (acStack_a0[0] != '\a')) || (cVar15 == '\0')) {
          fn_826959C8(acStack_c0);
          acStack_c0[0] = '\0';
          cVar15 = '\0';
          cVar10 = fn_826A8C78(&pcStack_b0,&acStack_d0);
          if (cVar10 != '\0') {
            puVar1 = (unsigned char *)param_2[4];
            if (puVar1 != (unsigned char *)0x0) {
              fn_826959C8(puVar1);
              *puVar1 = 0;
            }
            if ((unsigned int *)param_2[3] != (unsigned int *)0x0) {
              *(unsigned int *)param_2[3] = 0;
            }
            if (param_4 != (int *)0x0) {
              iVar6 = *(int *)(*(int *)(param_1 + 0x78) + 8);
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
              lVar11 = (unsigned __int64)*(unsigned int *)(*param_4 + 8) - 1;
              *(int *)(*param_4 + 8) = (int)lVar11;
              if (lVar11 == 0) {
                fn_826944C8();
              }
              *param_4 = iVar6;
            }
          }
          fn_82696330(acStack_a0);
          break;
        }
        if (acStack_a0[0] == '\t') {
          uVar4 = fn_82696AD0(acStack_c0,param_1);
          fn_82696610(acStack_a0,param_1,uVar4,acStack_c0);
        }
        else {
          fn_82695FA0(acStack_c0,acStack_a0);
        }
        fn_82696330(acStack_a0);
      }
      cVar10 = acStack_d0;
      puVar13 = puRam83155aa0;
      if (puVar14 == puRam83155aa0) {
        if (acStack_d0 == ':') {
          puStack_a8 = &lbl_82007AA4;
          puVar14 = &lbl_82007AA4;
LAB_826b42cc:
          if ((param_2[3] != 0) && (acStack_c0[0] == '\a')) {
            uVar8 = fn_82695370(acStack_c0,param_1);
            puVar13 = puRam83155aa0;
            *(unsigned int *)param_2[3] = uVar8;
          }
        }
      }
      else if (acStack_d0 == '.') goto LAB_826b42cc;
      if (cVar10 == '/') {
        puVar14 = puVar13;
        puStack_a8 = puVar13;
      }
      uVar4 = 0;
    }
    if ((param_2[3] != 0) && (acStack_c0[0] == '\a')) {
      uVar8 = fn_82695370(acStack_c0,param_1);
      *(unsigned int *)param_2[3] = uVar8;
    }
    pcVar16 = (char *)param_2[4];
    if (((pcVar16 != (char *)0x0) && (cVar10 = *pcVar16, cVar10 != '\x06')) && (cVar10 != '\a')) {
      if ((cVar10 == '\b') || (bVar3 = false, cVar10 == '\v')) {
        bVar3 = true;
      }
      if (!bVar3) {
        fn_826959C8(pcVar16);
        *pcVar16 = '\0';
      }
    }
    if (cVar15 == '\0') {
      lVar11 = (unsigned __int64)*(unsigned int *)(iStack_a4 + 8) - 1;
      *(int *)(iStack_a4 + 8) = (int)lVar11;
      if (lVar11 == 0) {
        fn_826944C8(iStack_a4);
      }
      uVar4 = 0;
    }
    else {
      if (param_2[1] != 0) {
        fn_82695FA0(param_2[1],acStack_c0);
      }
      lVar11 = (unsigned __int64)*(unsigned int *)(iStack_a4 + 8) - 1;
      *(int *)(iStack_a4 + 8) = (int)lVar11;
      if (lVar11 == 0) {
        fn_826944C8(iStack_a4);
      }
      uVar4 = 1;
    }
    fn_82696330(acStack_c0);
  }
  return uVar4;
}
