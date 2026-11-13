extern int fn_829D4038();
extern int fn_829D4800();
extern int fn_829D55E0();
extern int fn_829DFCD8();
extern int fn_82A1DDC0();
extern int fn_82A1F2F8();
extern unsigned int iStack_7c;
extern unsigned int lbl_832179FC;
extern unsigned int uStack_80;


void fn_829D6F40(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned int *puVar12;
  unsigned __int64 uVar11;
  unsigned int uStack_80;
  int iStack_7c;
  
  if (lbl_832179FC != 0) {
    iVar5 = lbl_832179FC + 0x24980;
    RtlEnterCriticalSection(iVar5);
    iVar1 = lbl_832179FC;
    puVar9 = (unsigned int *)(param_1 + 0x30);
    puVar10 = (unsigned int *)(lbl_832179FC + 0x200);
    lVar6 = 6;
    puVar8 = puVar10;
    puVar12 = puVar9;
    do {
      puVar7 = (unsigned int *)0x0;
      if (*puVar8 < 8) {
        puVar7 = (unsigned int *)(*puVar8 * 0x18 + iVar1);
      }
      if (*puVar12 == 2) {
        fn_82A1DDC0(puVar8 + -0x50,puVar12 + 8,0x140);
      }
      if ((puVar8[2] == 2) && ((*puVar12 != 2 || (puVar12[1] != puVar8[1])))) {
        if (puVar7 != (unsigned int *)0x0) {
          *puVar7 = 1;
          puVar7[4] = *(unsigned int *)(param_1 + 8);
        }
        uVar4 = 0;
        puVar3 = (unsigned int *)(iVar1 + 0x8bc);
        do {
          if (*puVar3 == puVar8[1]) {
            iVar2 = uVar4 * 0x58 + iVar1 + 0x8a0;
            goto LAB_829d7038;
          }
          uVar4 = uVar4 + 1;
          puVar3 = puVar3 + 0x16;
        } while (uVar4 < 2);
        iVar2 = 0;
LAB_829d7038:
        if (iVar2 != 0) {
          if ((*puVar12 == 1) && (puVar12[1] == puVar8[1])) {
            DbgPrint(0xffffffff82057568);
          }
          fn_829D4038(iVar1,iVar2,4);
        }
        *puVar8 = 0xffffffff;
      }
      puVar12[2] = *puVar8;
      if (puVar7 == (unsigned int *)0x0) {
        uVar4 = 0xfe;
      }
      else {
        uVar4 = puVar7[3];
      }
      lVar6 = lVar6 + -1;
      puVar12[3] = uVar4;
      puVar8[2] = *puVar12;
      puVar3 = puVar12 + 1;
      puVar12 = puVar12 + 0x70;
      puVar8[1] = *puVar3;
      puVar8 = puVar8 + 0x54;
    } while (lVar6 != 0);
    uVar11 = 0;
    *(unsigned int *)(iVar1 + 0x24970) = *(unsigned int *)(param_1 + 8);
    do {
      if (puVar10[2] == 2) {
        iVar2 = fn_829D55E0(iVar1,uVar11);
        if (((*puVar10 == 0xfffffffc) || (*puVar10 == 0xffffffff)) && (*puVar9 == 2)) {
          iStack_7c = lbl_832179FC + 0x8f3e8;
          uStack_80 = fn_82A1F2F8();
          fn_829DFCD8(iVar2 * 0x11fb0 + iVar1 + 0xa10,uVar11,param_1);
          fn_829D4800(&uStack_80);
        }
      }
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 0x70;
      puVar10 = puVar10 + 0x54;
    } while ((uVar11 & 0xffffffff) < 6);
    RtlLeaveCriticalSection(iVar5);
  }
  return;
}

