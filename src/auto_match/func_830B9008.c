typedef unsigned char bool;
extern unsigned int lbl_831769B8;


void fn_830B9008(int param_1,int param_2)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  bool bVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar7;
  unsigned __int64 uVar6;
  int iVar8;
  unsigned char *puVar9;
  unsigned __int64 uVar10;
  
  uVar5 = 0;
  uVar2 = (unsigned int)(*(unsigned short *)(param_2 + 0x34) >> 1);
  uVar1 = (unsigned __int64)(*(unsigned short *)(param_2 + 0x32) >> 1);
  if (uVar2 != 0) {
    iVar4 = 0;
    puVar9 = (unsigned char *)(*(int *)(param_2 + 0x524) + -1);
    do {
      if ((uVar5 == 0) || (iVar7 = 0, *(int *)(*(int *)(param_1 + 0x55d0) + iVar4) != 0)) {
        iVar7 = 1;
      }
      iVar8 = 0;
      if (uVar1 != 0) {
        uVar10 = uVar1;
        do {
          bVar3 = iVar8 == 0;
          iVar8 = iVar8 + 1;
          uVar6 = *(unsigned __int64 *)(&lbl_831769B8 + ((unsigned int)bVar3 + iVar7 * 2) * 8) & 0xf0f0f0f0f0f;
          puVar9[1] = (char)uVar6;
          puVar9[2] = (char)(uVar6 >> 8);
          puVar9[3] = (char)(uVar6 >> 0x10);
          puVar9[4] = (char)(uVar6 >> 0x18);
          puVar9[5] = (char)(uVar6 >> 0x20);
          puVar9 = puVar9 + 6;
          *puVar9 = (char)(uVar6 >> 0x28);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < uVar2);
  }
  return;
}

