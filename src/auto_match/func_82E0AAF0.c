extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CEB1A8();
extern int fn_82CFD5A8();
extern int fn_82CFD5C0();
extern int fn_82CFFC68();
extern int fn_82CFFD68();
extern int fn_82CFFEB8();
extern int fn_82CFFEC8();
extern int fn_82E09F28();


void fn_82E0AAF0(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  __int64 lVar1;
  __int64 lVar2;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int *piVar9;
  __int64 lVar6;
  unsigned int uVar10;
  __int64 lVar11;
  unsigned char auStack_70 [8];
  unsigned char auStack_68 [8];
  unsigned char auStack_60 [96];
  
  lVar11 = 0;
  iVar7 = fn_82CEAF18(param_3);
  if (0 < iVar7) {
    do {
      iVar7 = fn_82CEAF20(param_3,lVar11);
      if (((*(unsigned short *)(iVar7 + 0x10) >> 10 & 1) == 0) &&
         (uVar10 = (unsigned int)*(unsigned char *)(iVar7 + 0xc), uVar10 - 0x16 < 6)) {
        if (uVar10 == 0x16) {
LAB_82e0abf4:
          lVar1 = param_2;
          lVar2 = param_4;
          if (*(char *)(iVar7 + 0xd) == '\x19') {
            while (-1 < lVar2 + -1) {
              fn_82CFFC68(auStack_68,lVar1,iVar7);
              piVar9 = (int *)fn_82CFFEB8(auStack_68,0);
              if ((*piVar9 != 0) && (iVar8 = piVar9[1], iVar8 != 0)) {
                uVar5 = fn_82CFD5A8(iVar7);
                fn_82E0AAF0(param_1,*piVar9,uVar5,iVar8);
              }
              lVar6 = fn_82CEB1A8(param_3);
              lVar1 = lVar6 + lVar1;
              lVar2 = lVar2 + -1;
            }
          }
        }
        else if ((uVar10 != 0x17) && (uVar10 != 0x18)) {
          if (uVar10 == 0x19) {
            iVar8 = fn_82CFD5C0(iVar7);
            lVar1 = param_2;
            lVar2 = param_4;
            if (iVar8 == 0) {
              uVar5 = 1;
            }
            else {
              uVar5 = fn_82CFD5C0(iVar7);
            }
            while (-1 < lVar2 + -1) {
              fn_82CFFC68(auStack_70,lVar1,iVar7);
              uVar3 = fn_82CFD5A8(iVar7);
              uVar4 = fn_82CFFD68(auStack_70);
              fn_82E0AAF0(param_1,uVar4,uVar3,uVar5);
              lVar6 = fn_82CEB1A8(param_3);
              lVar1 = lVar6 + lVar1;
              lVar2 = lVar2 + -1;
            }
          }
          else {
            lVar1 = param_2;
            lVar2 = param_4;
            if (uVar10 == 0x1a) goto LAB_82e0abf4;
            while (-1 < lVar2 + -1) {
              fn_82CFFC68(auStack_60,lVar1,iVar7);
              piVar9 = (int *)fn_82CFFEC8(auStack_60,0);
              fn_82E09F28(param_1,*piVar9);
              if (((*piVar9 != 0) && (piVar9[1] != 0)) && (piVar9[2] != 0)) {
                ((int (*)())fn_82E0AAF0)(param_1);
              }
              lVar6 = fn_82CEB1A8(param_3);
              lVar1 = lVar6 + lVar1;
              lVar2 = lVar2 + -1;
            }
          }
        }
      }
      lVar11 = lVar11 + 1;
      iVar7 = fn_82CEAF18(param_3);
    } while ((int)lVar11 < iVar7);
  }
  return;
}

