extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_82CEAE80();
extern int fn_82CEAEA8();
extern int fn_82CEB1A8();
extern int fn_82CFD5A8();
extern int fn_82CFD5C0();
extern int fn_82CFFC68();
extern int fn_82CFFD68();
extern int fn_82CFFEB8();
extern int fn_82CFFEC8();
extern int fn_82E0A208();


void fn_82E0A578(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar10;
  unsigned __int64 uVar7;
  int *piVar11;
  unsigned int uVar12;
  __int64 lVar13;
  unsigned char auStack_80 [8];
  unsigned char auStack_78 [8];
  unsigned char auStack_70 [8];
  unsigned char auStack_68 [8];
  unsigned char auStack_60 [96];
  
  lVar13 = 0;
  iVar8 = fn_82CEAE80(param_2);
  if (0 < iVar8) {
    do {
      iVar8 = fn_82CEAEA8(param_2,lVar13);
      if (((*(unsigned short *)(iVar8 + 0x10) >> 10 & 1) == 0) &&
         (uVar12 = (unsigned int)*(unsigned char *)(iVar8 + 0xc), uVar12 - 0x16 < 7)) {
        if (uVar12 == 0x16) {
LAB_82e0a668:
          lVar2 = param_1;
          lVar3 = param_4;
          if (*(char *)(iVar8 + 0xd) == '\x1c') {
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_78,lVar2,iVar8);
              puVar10 = (unsigned int *)fn_82CFFEB8(auStack_78,0);
              fn_82E0A208(*puVar10,puVar10[1],param_3);
              lVar6 = fn_82CEB1A8(param_2);
              lVar2 = lVar6 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
          else if (*(char *)(iVar8 + 0xd) == '\x19') {
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_70,lVar2,iVar8);
              puVar10 = (unsigned int *)fn_82CFFEB8(auStack_70,0);
              uVar1 = puVar10[1];
              uVar4 = fn_82CFD5A8(iVar8);
              fn_82E0A578(*puVar10,uVar4,param_3,uVar1);
              lVar6 = fn_82CEB1A8(param_2);
              lVar2 = lVar6 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
        }
        else if ((uVar12 != 0x17) && (uVar12 != 0x18)) {
          if (uVar12 == 0x19) {
            iVar9 = fn_82CFD5C0(iVar8);
            lVar2 = param_1;
            lVar3 = param_4;
            if (iVar9 == 0) {
              uVar4 = 1;
            }
            else {
              uVar4 = fn_82CFD5C0(iVar8);
            }
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_68,lVar2,iVar8);
              uVar5 = fn_82CFD5A8(iVar8);
              uVar7 = fn_82CFFD68(auStack_68);
              fn_82E0A578(uVar7,uVar5,param_3,uVar4);
              lVar6 = fn_82CEB1A8(param_2);
              lVar2 = lVar6 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
          else {
            if (uVar12 == 0x1a) goto LAB_82e0a668;
            lVar2 = param_1;
            lVar3 = param_4;
            if (uVar12 == 0x1b) {
              while (-1 < lVar3 + -1) {
                fn_82CFFC68(auStack_60,lVar2,iVar8);
                piVar11 = (int *)fn_82CFFEC8(auStack_60,0);
                if ((piVar11[1] != 0) && (*piVar11 != 0)) {
                  fn_82E0A578(piVar11[1],*piVar11,param_3,piVar11[2]);
                }
                lVar6 = fn_82CEB1A8(param_2);
                lVar2 = lVar6 + lVar2;
                lVar3 = lVar3 + -1;
              }
            }
            else {
              iVar9 = fn_82CFD5C0(iVar8);
              if (iVar9 == 0) {
                uVar4 = 1;
              }
              else {
                uVar4 = fn_82CFD5C0(iVar8);
              }
              while (-1 < lVar3 + -1) {
                fn_82CFFC68(auStack_80,lVar2,iVar8);
                uVar5 = fn_82CFFD68(auStack_80);
                fn_82E0A208(uVar5,uVar4,param_3);
                lVar6 = fn_82CEB1A8(param_2);
                lVar2 = lVar6 + lVar2;
                lVar3 = lVar3 + -1;
              }
            }
          }
        }
      }
      lVar13 = lVar13 + 1;
      iVar8 = fn_82CEAE80(param_2);
    } while ((int)lVar13 < iVar8);
  }
  return;
}

