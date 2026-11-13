typedef unsigned char bool;
extern unsigned int *auStack_70;
extern unsigned int *auStack_7c;
extern int fn_82526A20();
extern int fn_82526C70();
extern int fn_82569CF8();
extern int fn_82837BA0();
extern int fn_82839198();
extern int fn_8284DF78();
extern int fn_82851760();
extern int fn_82851858();
extern int iRam83282204;
extern int iRam8328220c;
extern unsigned int iStack_80;
extern unsigned int uRam83282208;


unsigned char fn_825B4F08(int *param_1,int param_2)

{
  bool bVar1;
  unsigned __int64 uVar2;
  char cVar4;
  int iVar3;
  unsigned int uVar5;
  unsigned char bVar6;
  unsigned int uVar7;
  int *piVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  unsigned __int64 uVar12;
  int iStack_80;
  unsigned int auStack_7c [3];
  unsigned char auStack_70 [112];
  
  iVar3 = *param_1;
  bVar6 = 1;
  uVar12 = 0;
  if (*(int *)(iVar3 + 0x1c) != 0) {
    iVar10 = 0;
    piVar8 = (int *)(param_2 + 0x14);
    do {
      if (*(int *)(*(int *)(iVar3 + 0x98) + iVar10) == 0) {
        if (*piVar8 == 0) {
          iStack_80 = 0;
          fn_82526C70(auStack_70,0x20,0xffffffff821c8460,uVar12);
          iVar3 = fn_82851760(*param_1,auStack_70,0,auStack_7c);
          if (iVar3 != 0) {
            fn_82851858(auStack_7c[0],&iStack_80);
          }
          if ((iStack_80 != 0) && (iVar3 = fn_82526A20(iStack_80,0xffffffff821c8450), iVar3 == 0))
          {
            bVar1 = iRam8328220c == 0;
            iRam8328220c = iRam8328220c + 1;
            if (bVar1) {
              uRam83282208 = 0xffffffff;
            }
            uVar5 = *(unsigned int *)(iRam83282204 + 0x14);
            goto LAB_825b5024;
          }
        }
        else {
          uVar2 = fn_8284DF78(iVar3,uVar12);
          cVar4 = fn_82569CF8(uVar2,piVar8 + -5);
          bVar6 = -(cVar4 != '\0') & bVar6;
          if (*piVar8 != 0) {
            uVar5 = *(unsigned int *)(*piVar8 + 0x10);
LAB_825b5024:
            *(unsigned int *)(*(int *)(*param_1 + 0x98) + iVar10) = uVar5;
          }
        }
      }
      iVar3 = *param_1;
      uVar12 = uVar12 + 1;
      piVar8 = piVar8 + 8;
      iVar10 = iVar10 + 4;
    } while ((uVar12 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar3 + 0x1c));
  }
  uVar7 = 0;
  if (*(int *)(iVar3 + 300) != 0) {
    iVar10 = 0;
    do {
      if (*(int *)(*(int *)(iVar3 + 0x128) + iVar10 + 4) != 0) {
        fn_82839198(0);
        iVar3 = *(int *)(*(int *)(*param_1 + 0x128) + iVar10 + 4);
        if ((*(int *)(iVar3 + 0x28) != 0) && (uVar9 = 0, *(int *)(iVar3 + 0x2c) != 0)) {
          iVar11 = 0;
          do {
            if (*(int *)(iVar11 + *(int *)(iVar3 + 0x28)) != 0) {
              fn_82837BA0(0xffffffff82196582);
            }
            uVar9 = uVar9 + 1;
            iVar11 = iVar11 + 4;
          } while (uVar9 < *(unsigned int *)(iVar3 + 0x2c));
        }
      }
      iVar3 = *param_1;
      uVar7 = uVar7 + 1;
      iVar10 = iVar10 + 0x20;
    } while (uVar7 < *(unsigned int *)(iVar3 + 300));
  }
  return bVar6;
}

