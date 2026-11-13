typedef unsigned char bool;
extern int fn_82975B00();
extern int fn_829A0BE0();
extern int fn_829A0DC0();
extern int fn_829A0FD0();
extern int fn_829A1138();
extern int fn_829A12A0();
extern int fn_829A1470();


unsigned __int64 fn_829A44B8(int *param_1,int *param_2,unsigned int param_3)

{
  bool bVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int (**pcVar10)();
  unsigned int uVar11;
  
  uVar11 = 0;
  if (param_3 != 0) {
    do {
      param_1[0x40] = uVar11;
      iVar2 = *param_2;
      param_1[0x41] = iVar2;
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 0x3c);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0xe)) {
          param_1[0x42] = iVar2 + 0x30;
        }
        puVar3 = (unsigned int *)param_1[0x41];
        uVar4 = *puVar3;
        if (uVar4 != 0) {
          iVar2 = param_1[5];
          if (*(int *)(*(int *)(*(int *)puVar3[2] * 4 + iVar2) + 8) != -1) {
            fn_82975B00(param_1,puVar3[0xf],0x119f,0xffffffff8204fde4);
            return 0xffffffff80004005;
          }
          uVar8 = uVar4 & 0xfff00000;
          if (uVar8 < 0x70300001) {
            if (uVar8 == 0x70300000) {
LAB_829a4798:
              pcVar10 = *(int (***)())(*param_1 + 0xd0);
            }
            else {
              if (0x50000000 < uVar8) {
                if ((uVar8 != 0x60000000) && (uVar8 != 0x60500000)) {
                  if (uVar8 == 0x60700000) {
                    uVar9 = fn_829A1138(param_1);
                    goto LAB_829a48c4;
                  }
                  if ((uVar8 != 0x60a00000) && (uVar8 != 0x60f00000)) {
                    if (uVar8 != 0x70100000) goto LAB_829a4914;
                    pcVar10 = *(int (***)())(*param_1 + 200);
                    goto LAB_829a4618;
                  }
                }
                uVar9 = fn_829A12A0(param_1);
                goto LAB_829a48c4;
              }
              if (uVar8 == 0x50000000) {
                uVar4 = uVar4 & 0xfffff;
                if (uVar4 == 2) goto LAB_829a4914;
                if ((uVar4 == 4) && (*(short *)((int)param_1 + 0xca) == 0x101)) {
LAB_829a4648:
                  uVar9 = fn_829A0BE0(param_1);
                  goto LAB_829a48c4;
                }
                if (((*(short *)((int)param_1 + 0xca) == 0x102) ||
                    (*(short *)((int)param_1 + 0xca) == 0x103)) && (uVar4 == 4)) {
                  iVar5 = *(int *)(*(int *)puVar3[4] * 4 + iVar2);
                  iVar6 = *(int *)(*(int *)puVar3[2] * 4 + iVar2);
                  iVar7 = *(int *)(((int *)puVar3[2])[4] * 4 + iVar2);
                  iVar2 = *(int *)(iVar5 + 4);
                  if (iVar2 == param_1[0x21]) {
                    if (((*(int *)(iVar6 + 4) == param_1[0x22]) && (*(int *)(iVar6 + 0xc) == 0)) ||
                       ((*(int *)(iVar7 + 4) == param_1[0x22] && (*(int *)(iVar7 + 0xc) == 0)))) {
                      bVar1 = *(char *)(iVar5 + 0x6f) == '\x01';
LAB_829a46e8:
                      if (bVar1) goto LAB_829a4648;
                    }
                  }
                  else {
                    if ((*(int *)(iVar6 + 4) == iVar2) &&
                       (*(int *)(iVar6 + 0xc) == *(int *)(iVar5 + 0xc))) goto LAB_829a4648;
                    if (*(int *)(iVar7 + 4) == iVar2) {
                      bVar1 = *(int *)(iVar7 + 0xc) == *(int *)(iVar5 + 0xc);
                      goto LAB_829a46e8;
                    }
                  }
                }
                pcVar10 = *(int (***)())(*param_1 + 0xb4);
              }
              else {
                if ((uVar4 & 0xfff00000) == 0) goto LAB_829a48d4;
                if (uVar8 == 0x10000000) {
                  pcVar10 = *(int (***)())(*param_1 + 0x7c);
                }
                else if (uVar8 == 0x10100000) {
                  pcVar10 = *(int (***)())(*param_1 + 0x80);
                }
                else if (uVar8 == 0x11000000) {
                  pcVar10 = *(int (***)())(*param_1 + 0xdc);
                }
                else if (uVar8 == 0x20400000) {
                  pcVar10 = *(int (***)())(*param_1 + 0xac);
                }
                else if (uVar8 == 0x20500000) {
                  pcVar10 = *(int (***)())(*param_1 + 0xb0);
                }
                else {
                  if (uVar8 != 0x30000000) goto LAB_829a4914;
                  uVar9 = 0xffffffff80004001;
                  if (*(short *)((int)param_1 + 0xca) != 0x104) goto LAB_829a48c4;
                  pcVar10 = *(int (***)())(*param_1 + 0xbc);
                }
              }
            }
LAB_829a4618:
            uVar9 = (*pcVar10)(param_1);
          }
          else {
            if (uVar8 < 0x72600001) {
              if (uVar8 == 0x72600000) {
                uVar9 = 0x52;
              }
              else {
                if (uVar8 == 0x70400000) goto LAB_829a4798;
                if (uVar8 == 0x70f00000) {
                  pcVar10 = *(int (***)())(*param_1 + 0xc0);
                  goto LAB_829a4618;
                }
                if (uVar8 == 0x72100000) {
                  uVar9 = fn_829A1470(param_1);
                  goto LAB_829a48c4;
                }
                if (uVar8 == 0x72200000) {
                  uVar9 = 0x47;
                }
                else if (uVar8 == 0x72300000) {
                  uVar9 = 0x48;
                }
                else if (uVar8 == 0x72400000) {
                  uVar9 = 0x49;
                }
                else {
                  if (uVar8 != 0x72500000) goto LAB_829a4914;
                  uVar9 = 0x4a;
                }
              }
            }
            else if (uVar8 == 0x72700000) {
              uVar9 = 0x45;
            }
            else if (uVar8 == 0x72800000) {
              uVar9 = 0x46;
            }
            else if (uVar8 == 0x72900000) {
              uVar9 = 0x4d;
            }
            else if (uVar8 == 0x72a00000) {
              uVar9 = 0x4c;
            }
            else {
              if (uVar8 != 0x72b00000) {
                if (uVar8 != 0x72e00000) goto LAB_829a4914;
                uVar9 = fn_829A0FD0(param_1);
                goto LAB_829a48c4;
              }
              uVar9 = 0x53;
            }
            uVar9 = fn_829A0DC0(param_1,uVar9);
          }
LAB_829a48c4:
          if ((int)uVar9 == -0x7fffbfff) {
LAB_829a4914:
            fn_82975B00(param_1,*(unsigned int *)(param_1[0x41] + 0x3c),0x11b4,
                              0xffffffff82034330);
            return 0xffffffff80004001;
          }
          if ((int)uVar9 < 0) {
            return uVar9;
          }
        }
      }
LAB_829a48d4:
      uVar11 = uVar11 + 1;
      param_2 = param_2 + 1;
    } while (uVar11 < param_3);
  }
  return 0;
}

