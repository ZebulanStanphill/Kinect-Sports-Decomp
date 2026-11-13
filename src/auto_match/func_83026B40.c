extern int fn_82A1DDC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC770;


void fn_83026B40(unsigned __int64 param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    uVar8 = (unsigned __int64)*(unsigned short *)(param_2 + 0x10);
    uVar10 = 0;
    if (uVar8 != 0) {
      puVar6 = (unsigned int *)(*(int *)(param_2 + 0x14) + 4);
      do {
        if ((param_4 <= *puVar6) && (*puVar6 < param_4 + param_5)) {
          uVar10 = uVar10 + 1 & 0xffff;
        }
        puVar6 = puVar6 + 5;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (uVar10 != 0) {
      iVar2 = fn_82FA5060(lbl_831BC770,(*(unsigned short *)(param_3 + 0x10) + uVar10) * 0x14);
      iVar5 = *(int *)(param_3 + 0x14);
      if (iVar2 == 0) {
        if (iVar5 != 0) {
          fn_82FA5190(lbl_831BC770);
        }
        *(unsigned int *)(param_3 + 0x14) = 0;
        *(unsigned short *)(param_3 + 0x10) = 0;
      }
      else {
        if (iVar5 != 0) {
          fn_82A1DDC0(iVar2,iVar5,(unsigned __int64)*(unsigned short *)(param_3 + 0x10) * 0x14);
        }
        uVar4 = 0;
        puVar9 = *(unsigned int **)(param_2 + 0x14);
        iVar5 = (unsigned int)*(unsigned short *)(param_3 + 0x10) * 0x14 + iVar2;
        if (*(short *)(param_2 + 0x10) != 0) {
          puVar7 = (unsigned int *)(iVar5 + 8);
          puVar3 = (unsigned int *)(iVar5 + -0x14);
          do {
            if ((param_4 <= (unsigned int)puVar9[1]) && ((unsigned int)puVar9[1] < param_4 + param_5)) {
              uVar1 = *puVar9;
              puVar7[-1] = 0;
              puVar3 = puVar3 + 5;
              *puVar3 = uVar1;
              *puVar7 = puVar9[2];
              puVar7[1] = puVar9[3];
              puVar7[2] = puVar9[4];
              puVar7 = puVar7 + 5;
            }
            uVar4 = uVar4 + 1;
            puVar9 = puVar9 + 5;
          } while (uVar4 < *(unsigned short *)(param_2 + 0x10));
        }
        if (*(int *)(param_3 + 0x14) != 0) {
          fn_82FA5190(lbl_831BC770);
        }
        *(int *)(param_3 + 0x14) = iVar2;
        *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + (short)uVar10;
      }
    }
  }
  return;
}

