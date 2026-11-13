#define true 1
extern unsigned int *auStack_68;
extern int fn_82A2D578();
extern int fn_82A2E058();
extern int fn_82A2E6A8();
extern int fn_82F68CC0();
extern unsigned int iStack_70;
extern unsigned int uStack_6c;


unsigned __int64 fn_82A2E9B0(int param_1,int param_2,unsigned short *param_3,unsigned int *param_4,int param_5)

{
  short sVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  int iStack_70;
  unsigned int uStack_6c;
  unsigned char auStack_68 [104];
  
  sVar1 = *(short *)(param_2 + 0x36);
  if (*(char *)(param_1 + 0x90) == '\0') {
    uVar6 = *(unsigned int *)(param_1 + 0x54);
    uVar9 = 0;
  }
  else {
    uVar9 = (unsigned int)*(unsigned short *)(param_2 + 0x18) << 6;
    uVar6 = (*(unsigned short *)(param_2 + 0x1a) + 1) * 0x40;
  }
  if ((param_4 != (unsigned int *)0x0) && (uVar9 < *param_4)) {
    uVar9 = *param_4;
  }
  iVar10 = 0;
  iVar11 = 0;
  iStack_70 = 0;
  iVar8 = 0;
  uVar7 = 0xffffffff;
  do {
    if (iVar11 == iVar8) {
      if (iVar10 != 0) {
        uVar5 = iVar10 - *(int *)(param_1 + 0x34);
        iVar10 = 0;
        iStack_70 = 0;
        iVar8 = (((int)uVar5 >> 0xc) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 0xfff) != 0)) * 8 +
                *(int *)(param_1 + 0x30);
        *(char *)(iVar8 + 4) = *(char *)(iVar8 + 4) + -1;
      }
      if (uVar6 <= uVar9) {
        uVar3 = 0xffffffffc0000034;
        goto LAB_82a2eb28;
      }
      uVar3 = fn_82A2E6A8(param_1,param_1 + 0x38,uVar9,&uStack_6c,auStack_68,0);
      if ((int)uVar3 < 0) goto LAB_82a2eb28;
      uVar3 = fn_82A2E058(param_1,uStack_6c,&iStack_70);
      iVar10 = iStack_70;
      if ((int)uVar3 < 0) goto LAB_82a2eb28;
      iVar8 = iStack_70 + 0x1000;
      iVar11 = (uVar9 & 0xfff) + iStack_70;
    }
    bVar2 = *(unsigned char *)(iVar11 + 0x28) & 0x3f;
    if ((*(unsigned char *)(iVar11 + 0x28) & 0x3f) == 0) {
      if (uVar7 == 0xffffffff) {
        uVar7 = uVar9;
      }
    }
    else if (*(short *)(iVar11 + 0x32) == sVar1) {
      if (param_4 == (unsigned int *)0x0) {
        iVar4 = RtlCompareStringN(*(unsigned int *)(param_3 + 2),*param_3,iVar11,bVar2,1);
        if (iVar4 == 0) goto LAB_82a2eb10;
      }
      else {
        if (param_4[2] == 0) {
LAB_82a2eb10:
          fn_82F68CC0(param_5,iVar11,0x40);
          *(unsigned int *)(param_5 + 0x40) = uVar9;
          uVar3 = 0;
LAB_82a2eb28:
          if (iVar10 != 0) {
            uVar6 = iVar10 - *(int *)(param_1 + 0x34);
            iVar10 = (((int)uVar6 >> 0xc) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 0xfff) != 0)) * 8 +
                     *(int *)(param_1 + 0x30);
            *(char *)(iVar10 + 4) = *(char *)(iVar10 + 4) + -1;
          }
          *(unsigned int *)(param_5 + 0x44) = uVar7;
          return uVar3;
        }
        iVar4 = fn_82A2D578(param_4 + 1,iVar11,bVar2,0);
        if (iVar4 != 0) goto LAB_82a2eb10;
      }
    }
    iVar11 = iVar11 + 0x40;
    uVar9 = uVar9 + 0x40;
  } while( true );
}

