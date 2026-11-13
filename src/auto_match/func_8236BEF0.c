extern unsigned int *auStack_260;
extern unsigned int *auStack_460;
extern unsigned int *auStack_468;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_8225F160();
extern int fn_8229ECE8();
extern int fn_8229EE18();
extern int fn_8229F618();
extern int fn_82358FD8();
extern int fn_82522588();
extern int fn_825604A0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_464;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82192A78;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D3014;
extern unsigned int lbl_831D3060;
extern unsigned int lbl_831D30AC;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;


void fn_8236BEF0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned char *puVar4;
  int iVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  unsigned char auStack_468 [4];
  int iStack_464;
  unsigned char auStack_460 [512];
  unsigned char auStack_260 [608];
  
  iVar1 = fn_82F6A548();
  uVar6 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x30);
  if (uVar6 != *(unsigned int *)(iVar1 + 0x34)) {
    dVar9 = (double)lbl_82192A78;
    dVar8 = (double)lbl_8218E8E8;
    dVar10 = (double)lbl_821CA460;
    dVar7 = (double)ltcg_pool_0_0f;
    do {
      piVar2 = (int *)fn_82522588(auStack_468,uVar6);
      iVar3 = *piVar2;
      *(unsigned int *)(iVar3 + 0x390) = 1;
      puVar4 = &lbl_831D3060;
      if (*(int *)(iVar3 + 0x370) == 0) {
        puVar4 = &lbl_831D3014;
      }
      *(unsigned char **)(iVar3 + 0x36c) = puVar4;
      if ((*(int *)(iVar3 + 0x3c0) != 0) && (dVar8 < (double)*(float *)(iVar3 + 0x3a4))) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        if (dVar9 < (double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar10))
        {
          *(unsigned char **)(iVar3 + 0x36c) = &lbl_831D30AC;
        }
      }
      iVar5 = *(int *)(iVar3 + 0x290);
      *(int *)(iVar3 + 0x370) = 1 - *(int *)(iVar3 + 0x370);
      if (iVar5 != 0x18) {
        if ((iVar5 == 5) || (iVar5 == 0x11)) {
          *(unsigned int *)(iVar3 + 0x368) = 1;
        }
        iVar5 = *(int *)(iVar3 + 0x260);
        *(unsigned int *)(iVar3 + 0x364) = 0;
        *(unsigned int *)(iVar3 + 0x290) = 0x18;
        if (iVar5 < 1) {
          iVar5 = 1;
        }
        *(float *)(iVar3 + 0x29c) = (float)dVar7;
        *(int *)(iVar3 + 0x260) = iVar5;
      }
      if (iStack_464 != 0) {
        fn_822315A0();
      }
      uVar6 = uVar6 + 8;
    } while ((uVar6 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(iVar1 + 0x34));
  }
  iVar3 = fn_8225F160();
  if (*(int *)(iVar3 + 8) == 1) {
    iVar3 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar3 = fn_82250A18();
    }
    if (*(char *)(iVar3 + 4) == '\0') {
      iVar3 = *(int *)(((unsigned int)LZCOUNT(*(unsigned int *)(iVar1 + 0xee8)) >> 2 & 8) +
                      *(int *)(iVar1 + 0x30));
      if (*(int *)(iVar3 + 0x22c) != 0) {
        fn_825604A0(iVar3 + 0x20);
        *(unsigned int *)(iVar3 + 0x22c) = 0;
      }
    }
  }
  fn_8229F618(*(unsigned int *)(*(int *)(**(int **)(iVar1 + 0x4b0) + 0xd4) + 0xc));
  fn_82358FD8(iVar1,auStack_260,0x100,0xffffffff821aadb8);
  fn_82358FD8(iVar1,auStack_460,0x100,0xffffffff821aaeec);
  if (*(int *)(iVar1 + 0xe7c) == 0) {
    fn_8229EE18(*(unsigned int *)(*(int *)(iVar1 + 0x94) + 0x5c),auStack_260,auStack_460);
  }
  else {
    fn_8229ECE8();
  }
  *(unsigned int *)(iVar1 + 0x348) = 1;
  fn_82F6A594();
  return;
}

