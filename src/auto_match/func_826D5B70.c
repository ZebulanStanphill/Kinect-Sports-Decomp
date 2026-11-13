extern unsigned int *auStack_130;
extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_82681BF8();
extern int fn_82681E98();
extern int fn_826824B0();
extern int fn_82687270();
extern int fn_8268CC00();
extern int fn_8268D758();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_826972E0();
extern int fn_8269A418();
extern int fn_8269AD40();
extern int fn_8269B718();
extern int fn_8269F500();
extern int fn_826A7398();
extern int fn_826C59F8();
extern int fn_826C7308();
extern int fn_826D2B68();
extern int fn_826D4148();
extern int fn_826F6FF8();
extern unsigned int iStack_13c;
extern unsigned int iStack_d0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_140;


void fn_826D5B70(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  int *piVar5;
  unsigned int uVar6;
  unsigned __int64 uVar3;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar4;
  __int64 lVar10;
  double dVar11;
  double dVar12;
  unsigned int uStack_140;
  int iStack_13c;
  __int64 lStack_138;
  unsigned char auStack_130 [32];
  int aiStack_110 [16];
  int iStack_d0;
  int aiStack_c0 [20];
  unsigned char auStack_70 [112];
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  piVar5 = (int *)fn_826C59F8(param_1);
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) < 2) {
    return;
  }
  uVar6 = fn_8269A418(piVar5);
  if (uVar6 < 8) {
    return;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x18);
  uVar3 = fn_826957D0(param_1,0);
  iVar7 = fn_82696958(uVar3,uVar2);
  if (iVar7 != 0) {
    *(unsigned int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1U & 0x8fffffff;
    iVar8 = (**(int (***)())(*(int *)(iVar7 + 0x10) + 8))(iVar7 + 0x10);
    if (iVar8 == 0x1a) {
      iVar8 = *(int *)(iVar7 + 0x30);
      if (iVar8 == 0) {
        iVar8 = piVar5[0x20];
        if (iVar8 == 0) {
          iVar8 = fn_8269F500(piVar5);
        }
        if (iVar8 == 0) {
          iVar8 = (**(int (***)())(*piVar5 + 0x58))(piVar5);
          iVar8 = *(int *)(iVar8 + 0x78);
        }
        fn_82681E98(piVar5 + 3,0xffffffff8200c414,**(unsigned int **)(iVar8 + 8));
      }
      else {
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uStack_140 = 1;
        uVar3 = fn_826957D0(param_1,1);
        dVar11 = (double)fn_826972E0(uVar3,uVar2);
        lStack_138 = (__int64)(int)dVar11;
        dVar12 = (double)lbl_821AAD20;
        fn_82681BF8(dVar12,aiStack_110,&uStack_140,(unsigned __int64)(unsigned int)(int)dVar11 + 0x4000,1,
                        0xffffffff831552e0,1,0xffffffff83155190);
        if ((iStack_d0 < 0) || (0x7efffffd < iStack_d0)) {
          iVar8 = piVar5[0x20];
          if (iVar8 == 0) {
            iVar8 = fn_8269F500(piVar5);
          }
          fn_82681E98(piVar5 + 3,0xffffffff8200c3d8,**(unsigned int **)(iVar8 + 0xc),iStack_d0);
        }
        else {
          if (*(int *)(param_1 + 0x1c) < 4) {
            uVar3 = 0;
          }
          else {
            uVar2 = *(unsigned int *)(param_1 + 0x18);
            uVar3 = fn_826957D0(param_1,3);
            uVar3 = fn_82695608(uVar3,uVar2);
          }
          iVar9 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
          iVar8 = fn_826F6FF8(iVar9,iVar8,uVar3,0xffffffff82196582,0);
          if (iVar8 != 0) {
            uVar4 = fn_8267B890(*(unsigned int *)(iVar9 + 0x14),0x1d8,0);
            if ((uVar4 & 0xffffffff) == 0) {
              uVar4 = 0;
            }
            else {
              uStack_140 = 0x10001;
              uVar4 = fn_826D4148(uVar4,*(unsigned int *)(*(int *)(iVar8 + 0x1c) + 0xc),iVar8,iVar9,
                                    piVar5,&uStack_140,1);
            }
            if ((uVar4 & 0xffffffff) != 0) {
              fn_8268CC00(auStack_130);
              uStack_140 = 1;
              uVar3 = fn_8268D758(auStack_70);
              fn_82681BF8(dVar12,aiStack_c0,&uStack_140,1,0,uVar3,1,auStack_130);
              iStack_13c = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 8);
              *(int *)(iStack_13c + 8) = *(int *)(iStack_13c + 8) + 1;
              fn_8269AD40(uVar4,iVar9);
              fn_8269B718(uVar4,iVar9);
              fn_826D2B68(uVar4,aiStack_c0,&iStack_13c,0,0,1,0,0);
              fn_826C7308(piVar5,aiStack_110,uVar4,&iStack_13c);
              (**(int (***)())(*piVar5 + 0x14))(piVar5,0);
              lVar10 = (unsigned __int64)*(unsigned int *)(iStack_13c + 8) - 1;
              *(int *)(iStack_13c + 8) = (int)lVar10;
              if (lVar10 == 0) {
                fn_826944C8(iStack_13c);
              }
              if (aiStack_c0[0] != 0) {
                fn_8267C498();
              }
              fn_8267C498(uVar4);
            }
            fn_82687270(iVar8);
          }
        }
        if (aiStack_110[0] != 0) {
          fn_8267C498();
        }
      }
      goto LAB_826d5f38;
    }
  }
  iVar8 = piVar5[0x20];
  if (iVar8 == 0) {
    iVar8 = fn_8269F500(piVar5);
  }
  fn_82681E98(piVar5 + 3,0xffffffff8200c390,**(unsigned int **)(iVar8 + 0xc));
  if (iVar7 == 0) {
    return;
  }
LAB_826d5f38:
  fn_826824B0(iVar7);
  return;
}

