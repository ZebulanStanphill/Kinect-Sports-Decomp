#define true 1
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_2d8;
extern int fn_82CE5410();
extern int fn_82CEAC20();
extern int fn_82CEAE80();
extern int fn_82CEAEA8();
extern int fn_82CEAFA8();
extern int fn_82CEB1A8();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFD5B0();
extern int fn_82CFD5B8();
extern int fn_82CFD5F0();
extern int fn_82CFD8C0();
extern int fn_82CFDF48();
extern int fn_82CFDFE0();
extern int fn_82CFE180();
extern int fn_82CFE1F0();
extern int fn_82CFE3B8();
extern int fn_82CFE418();
extern int fn_82CFE818();
extern int fn_82CFE870();
extern int fn_82CFEA08();
extern int fn_82E17EE8();
extern int fn_82E17FC8();
extern int fn_82E18118();
extern int fn_82E18210();
extern int fn_82E18418();
extern unsigned int iStack0000001c;
extern unsigned int iStack_314;
extern unsigned int iStack_318;
extern unsigned int lbl_8214B5D8;
extern unsigned int lbl_821C7F2C;
extern unsigned int *lbl_8323B464;
extern unsigned int uStack00000024;
extern unsigned int uStack_2a8;
extern unsigned int uStack_2b0;
extern unsigned int uStack_2c8;
extern unsigned int uStack_2e0;
extern unsigned int uStack_2f4;
extern unsigned int uStack_300;
extern unsigned int uStack_308;
extern unsigned int uStack_30c;
extern unsigned int uStack_310;
extern unsigned int uStack_31c;
extern unsigned int uStack_320;


unsigned __int64 fn_82E18720(int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned __int64 in_r0;
  int *piVar10;
  unsigned __int64 uVar2;
  int iVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar14;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int iVar15;
  int iVar16;
  unsigned int uVar17;
  __int64 lVar18;
  int *piVar19;
  int iStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack_320;
  unsigned int uStack_31c;
  struct { int first; int second; } stack_pair_318;

  unsigned int uStack_310;
  unsigned int uStack_30c;
  unsigned int uStack_308;
  unsigned __int64 uStack_300;
  unsigned char *puStack_2f8;
  unsigned int uStack_2f4;
  char *pcStack_2f0;
  char *pcStack_2ec;
  unsigned char *puStack_2e8;
  unsigned __int64 uStack_2e0;
  unsigned char auStack_2d8 [16];
  unsigned __int64 uStack_2c8;
  unsigned char auStack_2c0 [16];
  unsigned __int64 uStack_2b0;
  unsigned __int64 uStack_2a8;
  unsigned char auStack_2a0 [512];
  
  uStack00000024 = (unsigned int)param_3;
  iStack0000001c = param_2;
  piVar10 = (int *)fn_82CFE1F0(param_4);
  uVar2 = (**(int (***)())(*piVar10 + 0x20))();
  uStack_308 = (unsigned int)uVar2;
  lVar18 = 0;
  iVar11 = fn_82CEAE80(param_5);
  if (iVar11 < 1) {
LAB_82e18f4c:
    piVar10 = (int *)fn_82CFE1F0(param_4);
    iVar11 = *piVar10;
    lVar18 = fn_82CEB1A8(param_5);
    (**(int (***)())(iVar11 + 0x1c))(piVar10,lVar18 + uVar2,0);
    return uVar2;
  }
  pcStack_2f0 = "Unknown class member found during write of data.";
  puStack_2f8 = &lbl_821C7F2C;
  puStack_2e8 = &lbl_8214B5D8;
  pcStack_2ec = "Can\'t copy homogeneous array. No hkClass for ";
  do {
    puVar12 = (unsigned int *)fn_82CEAEA8(param_5,lVar18);
    (**(int (***)())(*piVar10 + 0x1c))(piVar10,*(unsigned short *)((int)puVar12 + 0x12) + uVar2,0);
    if ((*(unsigned short *)(puVar12 + 4) & 0x400) == 0) {
LAB_82e18838:
      puVar13 = (unsigned int *)fn_82CEAFA8(param_3,*puVar12);
      if ((puVar13 == (unsigned int *)0x0) ||
         (iVar11 = (**(int (***)())(*param_1 + 0x10))(param_1,puVar13,puVar12), iVar11 == 0)) {
LAB_82e18f20:
        fn_82E18118(param_5,puVar12,lVar18,piVar10);
      }
      else {
        uVar17 = (unsigned int)*(unsigned char *)(puVar12 + 3);
        piVar19 = (int *)((unsigned int)*(unsigned short *)((int)puVar13 + 0x12) + iStack0000001c);
        if (0x20 < uVar17 - 1) {
switchD_82e188a4_caseD_17:
          fn_82CEE578(auStack_2d8,auStack_2a0,0x200);
          fn_82CEDB38(auStack_2d8,pcStack_2f0);
          iVar11 = (**(int (***)())(*lbl_8323B464 + 0xc))
                             (lbl_8323B464,3,0x641e3e03,auStack_2a0,0xffffffff8214b528,0x227);
          if (iVar11 != 0) {
            trapWord(0x1f,in_r0,0x16);
          }
                    /* WARNING: Subroutine does not return */
          fn_82CED958(auStack_2d8);
        }
        in_r0 = (unsigned __int64)*(unsigned int *)((uVar17 - 1) * 4 + -0x7d1e7758);
        switch(uVar17) {
        default:
          uVar2 = fn_82E17EE8(puVar13);
          uVar3 = fn_82E17EE8(puVar12);
          if ((int)uVar3 <= (int)uVar2) {
            uVar2 = uVar3;
          }
          uVar4 = fn_82CFD5F0(puVar12);
          trapWord(6,uVar3,0);
          trapWord(5,uVar3 & ~(((uVar4 & 0x7fffffff) << 1 | (uVar4 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          fn_82E17FC8(param_4,*(unsigned char *)(puVar12 + 3),(int)uVar4 / (int)uVar3,uVar2,piVar19);
          break;
        case 0x13:
          break;
        case 0x14:
        case 0x15:
        case 0x1d:
        case 0x21:
          lVar5 = fn_82E17EE8(puVar12);
          uStack_2c8 = 0;
          if (0 < (int)lVar5) {
            do {
              fn_82CFE180(param_4,&uStack_2c8,*(unsigned char *)(param_1 + 3));
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
          break;
        case 0x16:
        case 0x1a:
        case 0x1b:
          if (uVar17 == 0x1b) {
            uStack_300 = 0;
            fn_82CFDFE0(param_4,&uStack_300,*(unsigned char *)(param_1 + 3),1);
            if (*piVar19 == 0) {
              fn_82CEE578(auStack_2c0,auStack_2a0,0x200);
              uVar1 = *puVar13;
              uVar7 = fn_82CEAC20(param_3);
              uVar8 = fn_82CEDB38(auStack_2c0,pcStack_2ec);
              uVar7 = fn_82CEDB38(uVar8,uVar7);
              uVar7 = fn_82CEDB38(uVar7,puStack_2e8);
              uVar7 = fn_82CEDB38(uVar7,uVar1);
              fn_82CEDB38(uVar7,puStack_2f8);
              (**(int (***)())(*lbl_8323B464 + 0xc))
                        (lbl_8323B464,1,0xffffffffabba5a55,auStack_2a0,0xffffffff8214b528,0x1ba);
                    /* WARNING: Subroutine does not return */
              fn_82CED958(auStack_2c0);
            }
            uVar2 = (unsigned __int64)(unsigned int)piVar19[2];
          }
          else {
            uVar2 = 0;
            if (*(char *)((int)puVar12 + 0xd) != '\0') {
              uVar2 = (unsigned __int64)(unsigned int)piVar19[1];
            }
          }
          uStack_2e0 = 0;
          fn_82CFDFE0(param_4,&uStack_2e0,*(unsigned char *)(param_1 + 3),1);
          fn_82CFE418(param_4,uVar2);
          if (*(char *)(puVar12 + 3) == '\x16') {
            fn_82CFE418(param_4,uVar2 | 0xffffffff80000000);
          }
          break;
        case 0x17:
          goto switchD_82e188a4_caseD_17;
        case 0x18:
          if ((puVar13[2] != 0) && (puVar12[2] != 0)) {
            uVar3 = fn_82E17EE8(puVar13);
            uVar4 = fn_82E17EE8(puVar12);
            uVar2 = uVar3;
            if ((int)uVar4 <= (int)uVar3) {
              uVar2 = uVar4;
            }
            uVar7 = fn_82CFD5B8(puVar13);
            uVar8 = fn_82CFD5B8(puVar12);
            uVar4 = fn_82CFD5F0(puVar13);
            iVar11 = (int)uVar4 / (int)uVar3;
            trapWord(6,uVar3,0);
            trapWord(5,uVar3 & ~(((uVar4 & 0x7fffffff) << 1 | (uVar4 & 0xffffffff) >> 0x1f) - 1),
                     0xffff);
            if (0 < (int)uVar2) {
              do {
                uVar9 = fn_82CFD8C0(puVar13,piVar19);
                uStack_31c = 0;
                iVar16 = fn_82CFE818(uVar7,uVar9,&uStack_2f4);
                if (iVar16 == 0) {
                  fn_82CFE870(uVar8,uStack_2f4,&uStack_31c);
                }
                if (iVar11 == 1) {
                  fn_82CFDF48(param_4,(char)uStack_31c);
                }
                else if (iVar11 == 2) {
                  fn_82CFE3B8(param_4,(short)uStack_31c);
                }
                else if (iVar11 == 4) {
                  fn_82CFE418(param_4,uStack_31c);
                }
                uVar2 = uVar2 - 1;
                piVar19 = (int *)((int)piVar19 + iVar11);
              } while (uVar2 != 0);
            }
          }
          break;
        case 0x19:
          uVar2 = fn_82CFD5B0(puVar13);
          uVar3 = fn_82CFD5B0(puVar12);
          if (((uVar2 & 0xffffffff) != 0) && ((uVar3 & 0xffffffff) != 0)) {
            iVar16 = fn_82E17EE8(puVar12);
            iVar11 = fn_82E17EE8(puVar13);
            if (iVar16 <= iVar11) {
              iVar11 = iVar16;
            }
            iVar16 = 0;
            if (0 < iVar11) {
              do {
                iVar14 = fn_82CEB1A8(uVar2);
                fn_82E18720(param_1,(int *)(iVar14 * iVar16 + (int)piVar19),uVar2,param_4,uVar3);
                iVar16 = iVar16 + 1;
              } while (iVar16 < iVar11);
            }
          }
          break;
        case 0x1c:
          uStack_2b0 = 0;
          uStack_2a8 = 0;
          lVar5 = fn_82E17EE8(puVar12);
          lVar6 = fn_82E17EE8(puVar13);
          if ((int)lVar6 < (int)lVar5) {
            lVar5 = lVar6;
          }
          if (0 < (int)lVar5) {
            do {
              fn_82CFDFE0(param_4,&uStack_2b0,*(unsigned char *)(param_1 + 3),2);
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
          break;
        case 0x1e:
          uVar7 = fn_82E17EE8(puVar13);
          uVar8 = fn_82E17EE8(puVar12);
          if ((int)uVar8 <= (int)uVar7) {
            uVar7 = uVar8;
          }
          fn_82E18210(param_4,*(unsigned char *)(param_1 + 3),uVar7,piVar19);
          break;
        case 0x1f:
          if ((puVar13[2] != 0) && (puVar12[2] != 0)) {
            uVar3 = fn_82E17EE8(puVar13);
            uVar4 = fn_82E17EE8(puVar12);
            uVar2 = uVar3;
            if ((int)uVar4 <= (int)uVar3) {
              uVar2 = uVar4;
            }
            uVar7 = fn_82CFD5B8(puVar13);
            uVar8 = fn_82CFD5B8(puVar12);
            uVar4 = fn_82CFD5F0(puVar13);
            iVar11 = (int)uVar4 / (int)uVar3;
            trapWord(6,uVar3,0);
            trapWord(5,uVar3 & ~(((uVar4 & 0x7fffffff) << 1 | (uVar4 & 0xffffffff) >> 0x1f) - 1),
                     0xffff);
            if (0 < (int)uVar2) {
              do {
                uVar9 = fn_82CFD8C0(puVar13,piVar19);
                stack_pair_318.first = 0;
                stack_pair_318.second = 0;
                uStack_310 = 0x80000000;
                uStack_320 = 0;
                fn_82CFEA08(uVar7,uVar9,&stack_pair_318.first,&uStack_320);
                uVar17 = 0;
                iVar16 = 0;
                if (0 < stack_pair_318.second) {
                  iVar14 = 0;
                  do {
                    iVar15 = fn_82CFE870(uVar8,*(unsigned int *)(stack_pair_318.first + iVar14),
                                               &uStack_30c);
                    if (iVar15 == 0) {
                      uVar17 = uStack_30c | uVar17;
                    }
                    else {
                      uStack_320 = uStack_30c | uStack_320;
                    }
                    iVar16 = iVar16 + 1;
                    iVar14 = iVar14 + 4;
                  } while (iVar16 < stack_pair_318.second);
                }
                if (uStack_320 != 0) {
                  uStack_300 = uStack_300 & 0xffffffff;
                  fn_82CFEA08(uVar8,uStack_320,&stack_pair_318.first,&uStack_300);
                  uVar17 = (((unsigned __int64)(uStack_300) >> 0) & 0xFFFFFFFF) | uVar17;
                }
                if (iVar11 == 1) {
                  fn_82CFDF48(param_4,(char)uVar17);
                }
                else if (iVar11 == 2) {
                  fn_82CFE3B8(param_4,(short)uVar17);
                }
                else if (iVar11 == 4) {
                  fn_82CFE418(param_4,uVar17);
                }
                piVar19 = (int *)((int)piVar19 + iVar11);
                iVar16 = fn_82CE5410();
                stack_pair_318.second = 0;
                if ((uStack_310 & 0x80000000) == 0) {
                  (**(int (***)())(**(int **)(iVar16 + 0x10) + 0x10))
                            (*(int **)(iVar16 + 0x10),stack_pair_318.first,uStack_310 & 0x3fffffff,4);
                }
                uVar2 = uVar2 - 1;
                stack_pair_318.first = 0;
                uStack_310 = 0x80000000;
              } while (uVar2 != 0);
            }
          }
        }
      }
    }
    else {
      if ((param_1[4] & 2U) == 0) {
        if ((param_1[4] & 1U) == 0) goto LAB_82e18838;
        goto LAB_82e18f20;
      }
      fn_82E18418(param_1,param_4,puVar12);
    }
    lVar18 = lVar18 + 1;
    iVar11 = fn_82CEAE80(param_5);
    uVar2 = (unsigned __int64)uStack_308;
    if (iVar11 <= (int)lVar18) goto LAB_82e18f4c;
    param_3 = (unsigned __int64)uStack00000024;
  } while( true );
}

