extern int fn_82250A18();
extern int fn_8247F240();
extern int fn_82485850();
extern int fn_82485AC8();
extern int fn_82485BD8();
extern int fn_82F65390();
extern unsigned int lbl_831CB7D8;
extern unsigned int lbl_832975B0;


void fn_82480D10(int param_1)

{
  unsigned char **ppuVar1;
  char cVar2;
  unsigned int uVar3;
  char *pcVar4;
  unsigned char *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned char **ppuVar12;
  
  ppuVar12 = &lbl_831CB7D8;
  uVar3 = *(unsigned int *)(param_1 + 0x48);
  lVar9 = -1;
  lVar10 = 0;
  ppuVar1 = ppuVar12;
  puVar5 = lbl_831CB7D8;
  while ((puVar5 != (unsigned char *)0x0 && ((int)lVar9 == -1))) {
    pcVar4 = *ppuVar1;
    pcVar8 = pcVar4;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    iVar6 = fn_82F65390((unsigned __int64)uVar3 + 0x234,pcVar4,pcVar8 + (-1 - (int)pcVar4));
    if (iVar6 == 0) {
      lVar9 = lVar10;
    }
    ppuVar1 = ppuVar1 + 5;
    puVar5 = *ppuVar1;
    lVar10 = lVar10 + 1;
  }
  lVar10 = -1;
  lVar11 = 0;
  puVar5 = lbl_831CB7D8;
  while ((puVar5 != (unsigned char *)0x0 && ((int)lVar10 == -1))) {
    pcVar4 = *ppuVar12;
    pcVar8 = pcVar4;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    iVar6 = fn_82F65390((unsigned __int64)uVar3 + 0x634,pcVar4,pcVar8 + (-1 - (int)pcVar4));
    if (iVar6 == 0) {
      lVar10 = lVar11;
    }
    ppuVar12 = ppuVar12 + 5;
    puVar5 = *ppuVar12;
    lVar11 = lVar11 + 1;
  }
  iVar6 = (int)(lVar10 - lVar9);
  fn_82485850((unsigned __int64)*(unsigned int *)(param_1 + 0x48),
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x48) + 0x634);
  *(unsigned int *)(*(int *)(param_1 + 0x48) + 0x14) =
       *(unsigned int *)(*(int *)(param_1 + 0x48) + 0x20);
  fn_82485AC8(*(unsigned int *)(param_1 + 0x48));
  iVar7 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar7 = fn_82250A18();
  }
  fn_82485BD8(*(unsigned int *)(param_1 + 0x48),*(char *)(iVar7 + 4) == '\0');
  if (iVar6 != iVar6 + -1 + (unsigned int)(lVar10 - lVar9 == 0)) {
    fn_8247F240(param_1,1);
  }
  return;
}

