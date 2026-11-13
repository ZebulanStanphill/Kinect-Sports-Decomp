typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82693A98();
extern int fn_82695520();
extern int fn_82695FA0();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_82696480();
extern int fn_82696AD0();
extern int fn_82696BC8();
extern int fn_826A18A8();
extern int fn_826A1F38();
extern int fn_826A2AB8();
extern int fn_826A2CB0();
extern int fn_826A87D8();
extern int fn_826A9138();
extern int fn_826AB790();
extern int fn_826AE0C0();
extern int fn_826B0F90();
extern int fn_826B2BE8();
extern int fn_826B35F0();
extern unsigned int iStack_60;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_88;
extern unsigned int uStack_af;
extern unsigned int uStack_b0;


bool fn_826B3798(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  char cVar7;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar3;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar10;
  __int64 lVar11;
  int *piVar12;
  bool bVar13;
  unsigned char uStack_b0;
  unsigned char uStack_af;
  char acStack_ae [6];
  int iStack_a8;
  int iStack_a4;
  unsigned char bStack_a0;
  unsigned char auStack_90 [8];
  unsigned int uStack_88;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  int iStack_60;
  unsigned char *puStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  if (param_2[1] == 0) {
LAB_826b3df8:
    bVar13 = false;
  }
  else {
    if (param_2[4] != 0) {
      uStack_88 = 0;
      auStack_90[0] = 4;
      fn_82695FA0(param_2[4],auStack_90);
      fn_82696330(auStack_90);
    }
    if ((param_2[2] != 0) &&
       (uVar9 = (unsigned __int64)*(unsigned int *)(param_2[2] + 4) - 1, -1 < (__int64)uVar9)) {
      lVar11 = (uVar9 & 0x1fffffff) << 3;
      do {
        piVar12 = (int *)(*(int *)param_2[2] + (int)lVar11);
        iVar4 = *piVar12;
        if (piVar12[1] < 0) {
          if (iVar4 == 0) {
LAB_826b3834:
            piVar12 = (int *)0x0;
          }
          else {
            piVar12 = (int *)(iVar4 + 0x10);
          }
        }
        else {
          piVar12 = (int *)(iVar4 + 0x68);
          if (iVar4 == 0) goto LAB_826b3834;
        }
        if (piVar12 == (int *)0x0) goto LAB_826b3df8;
        cVar7 = (**(int (***)())(*piVar12 + 0x10))(piVar12,param_1,*param_2,param_2[1]);
        if (cVar7 != '\0') {
          if (param_2[4] == 0) goto LAB_826b3908;
          iVar4 = (**(int (***)())(*piVar12 + 8))(piVar12);
          if ((iVar4 < 2) || (bVar13 = true, 5 < iVar4)) {
            bVar13 = false;
          }
          uVar5 = param_2[4];
          if (bVar13) {
            piVar12 = piVar12 + -0x1a;
            goto LAB_826b38f8;
          }
          fn_82696BC8(uVar5,piVar12 + -4);
          goto LAB_826b3908;
        }
        uVar9 = uVar9 - 1;
        lVar11 = lVar11 + -8;
      } while (-1 < (__int64)uVar9);
    }
    if ((param_2[5] & 1) == 0) {
      iVar4 = param_2[1];
      lVar11 = fn_826B0F90(param_1,*param_2);
      if ((lVar11 == 0) || (iVar4 == 0)) {
        bVar13 = lVar11 != 0;
      }
      else {
        fn_82695FA0(iVar4);
        bVar13 = true;
      }
      if (!bVar13) {
        if (4 < *(unsigned char *)(param_1 + 0x7c)) {
          puVar10 = (unsigned int *)(param_1 + 0x78);
          cVar7 = fn_826A18A8((unsigned __int64)*(unsigned int *)(param_1 + 0x78) + 0x110,*param_2,
                                    -(6 < *(unsigned char *)(param_1 + 0x7c)) & 1);
          if (cVar7 == '\0') {
            if ((5 < *(unsigned char *)(param_1 + 0x7c)) &&
               (cVar7 = fn_826A18A8((unsigned __int64)*puVar10 + 0xf8,*param_2,
                                          -(6 < *(unsigned char *)(param_1 + 0x7c)) & 1), cVar7 != '\0')) {
              if (*(int *)(param_1 + 0xcc) == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = *(int *)(*(int *)(param_1 + 0xcc) * 4 + *(int *)(param_1 + 200) + -4);
              }
              if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) &&
                 (iVar4 = *(int *)(*(int *)(iVar4 + 0x18) + 4), iVar4 != 0)) {
                puStack_5c = auStack_80;
                *(unsigned int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
                uStack_58 = param_2[2];
                iStack_60 = *puVar10 + 0xf4;
                auStack_80[0] = 0;
                uStack_54 = 0;
                uStack_50 = 0;
                uStack_4c = 0;
                fn_826AE0C0(param_1,&iStack_60);
                (**(int (***)())(*(int *)(iVar4 + 0x10) + 0x38))(&iStack_a8,iVar4 + 0x10,puVar10);
                lVar11 = fn_8267B890(*(unsigned int *)(*puVar10 + 0x288),0x48,0);
                if (lVar11 == 0) {
                  iVar6 = 0;
                }
                else {
                  uVar5 = *(unsigned int *)(iVar4 + 0x14);
                  uVar3 = fn_82696AD0(auStack_80,param_1);
                  iVar6 = fn_826AB790(lVar11,uVar5,uVar3,&iStack_a8);
                }
                fn_82696BC8(param_2[1],iVar6);
                fn_826B35F0(param_1,(unsigned __int64)*puVar10 + 0xf8,param_2[1]);
                if (((bStack_a0 & 2) == 0) && (iStack_a8 != 0)) {
                  fn_826824B0();
                }
                iStack_a8 = 0;
                if (((bStack_a0 & 1) == 0) && (iStack_a4 != 0)) {
                  fn_826824B0();
                }
                iStack_a4 = 0;
                fn_82696330(auStack_80);
                fn_826824B0(iVar4);
                if (iVar6 == 0) goto LAB_826b3908;
                goto LAB_826b3ad0;
              }
            }
          }
          else {
            if (*(int *)(param_1 + 0xcc) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(*(int *)(param_1 + 0xcc) * 4 + *(int *)(param_1 + 200) + -4);
            }
            if (iVar4 != 0) {
              uVar9 = fn_8267B890(*(unsigned int *)(*puVar10 + 0x288),0x48,0);
              if ((uVar9 & 0xffffffff) == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = fn_826A2AB8(uVar9,param_1);
              }
              fn_826A2CB0(iVar6,*(unsigned int *)(iVar4 + 0x20));
              lVar11 = 0;
              if (0 < *(int *)(iVar4 + 0x20)) {
                do {
                  iVar1 = *(int *)(iVar4 + 0x1c);
                  lVar8 = 0;
                  uVar9 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x24) - lVar11;
                  if ((uVar9 & 0xffffffff) <=
                      ((__int64)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc) >> 4) +
                       ((unsigned __int64)*(unsigned int *)(iVar1 + 0x1c) - 1 & 0x7ffffff) * 0x20 & 0xffffffff)) {
                    lVar8 = (unsigned __int64)
                            *(unsigned int *)(((unsigned int)((uVar9 & 0xffffffff) >> 3) & 0x1ffffffc) +
                                     *(int *)(iVar1 + 0x18)) + (uVar9 & 0x1f) * 0x10;
                  }
                  fn_826A1F38(iVar6,lVar11,lVar8);
                  lVar11 = lVar11 + 1;
                } while ((int)lVar11 < *(int *)(iVar4 + 0x20));
              }
              uVar2 = *puVar10;
              uVar3 = fn_826961B0(auStack_70,iVar6);
              fn_826B2BE8(param_1,(unsigned __int64)uVar2 + 0x110,uVar3);
              fn_82696330(auStack_70);
              uStack_b0 = 7;
              (**(int (***)())(*(int *)(iVar6 + 0x10) + 0x28))
                        (iVar6 + 0x10,puVar10,(unsigned __int64)*puVar10 + 0x114,iVar4 + 0x28,&uStack_b0);
              uStack_af = 7;
              (**(int (***)())(*(int *)(iVar6 + 0x10) + 0x28))
                        (iVar6 + 0x10,puVar10,(unsigned __int64)*puVar10 + 0x118,iVar4 + 0x38,&uStack_af);
              fn_82696BC8(param_2[1],iVar6);
LAB_826b3ad0:
              fn_826824B0(iVar6);
              goto LAB_826b3908;
            }
          }
        }
        cVar7 = fn_826A18A8((unsigned __int64)*(unsigned int *)(param_1 + 0x78) + 0xf4,*param_2,
                                  -(6 < *(unsigned char *)(param_1 + 0x7c)) & 1);
        if (cVar7 == '\0') goto LAB_826b3cb0;
        piVar12 = *(int **)(param_1 + 0x74);
        uVar5 = param_2[1];
LAB_826b38f8:
        fn_82696480(uVar5,piVar12);
      }
    }
    else {
LAB_826b3cb0:
      iVar4 = *(int *)(param_1 + 0x74);
      if (iVar4 == 0) goto LAB_826b3df8;
      cVar7 = (**(int (***)())(*(int *)(iVar4 + 0x68) + 0x2c))
                        (iVar4 + 0x68,(int *)(param_1 + 0x78),*param_2,param_2[1]);
      if (cVar7 == '\0') {
        iVar4 = *(int *)(*(int *)(param_1 + 0x78) + 0x2a0);
        if (((((param_2[5] & 2) == 0) && (iVar6 = fn_82693A98(*param_2), iVar6 != 0)) &&
            (*(char *)**(unsigned int **)*param_2 == '_')) &&
           (fn_826A87D8(acStack_ae,param_1,param_2), acStack_ae[0] != '\0')) {
          return acStack_ae[0] == '\x01';
        }
        if ((iVar4 == 0) ||
           (cVar7 = (**(int (***)())(*(int *)(iVar4 + 0x10) + 0x10))
                              (iVar4 + 0x10,param_1,*param_2,param_2[1]), cVar7 == '\0')) {
          if ((param_2[5] & 4) == 0) {
            fn_826A9138(param_1,0xffffffff82007a70,**(unsigned int **)*param_2);
          }
          goto LAB_826b3df8;
        }
        if (param_2[4] != 0) {
          fn_826961B0(auStack_70,iVar4);
          goto LAB_826b3d04;
        }
      }
      else if (param_2[4] != 0) {
        fn_82695520(auStack_70,*(unsigned int *)(param_1 + 0x74));
LAB_826b3d04:
        fn_82695FA0(param_2[4],auStack_70);
        fn_82696330(auStack_70);
      }
    }
LAB_826b3908:
    bVar13 = true;
  }
  return bVar13;
}

