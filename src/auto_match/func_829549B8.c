extern unsigned int *auStack_50;
extern int fn_828F0170();
extern int fn_82975B00();
extern int fn_82F65B18();
extern int fn_82F66A80();
extern int fn_82F6DF30();
extern unsigned int uStack_4c;


unsigned __int64 fn_829549B8(int param_1,int param_2,int param_3)

{
  unsigned short uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar2;
  char cVar6;
  unsigned char *puVar7;
  unsigned char *puVar8;
  unsigned char *puVar9;
  unsigned char *puVar10;
  char *pcVar11;
  unsigned char *puVar12;
  unsigned char auStack_50 [4];
  unsigned int uStack_4c;
  
  iVar5 = *(int *)(param_2 + 0x40);
  puVar10 = (unsigned char *)0x0;
  puVar7 = (unsigned char *)0x0;
  puVar8 = (unsigned char *)0x0;
  if (iVar5 != 0) {
    do {
      iVar4 = *(int *)(iVar5 + 8);
      puVar9 = puVar8;
      if (*(int *)(iVar4 + 4) == 0x12) {
        iVar3 = 0;
        if (*(int *)(iVar4 + 0x10) != 0) {
          iVar3 = *(int *)(*(int *)(iVar4 + 0x10) + 0x18);
        }
        puVar12 = (unsigned char *)0x0;
        if (*(int *)(iVar4 + 0x14) != 0) {
          puVar12 = *(unsigned char **)(*(int *)(iVar4 + 0x14) + 0x18);
        }
        if (iVar3 == 0) {
          if ((puVar12 != (unsigned char *)0x0) && (iVar4 = fn_82F6DF30(*puVar12), iVar4 == 99)) {
            puVar7 = puVar12;
          }
        }
        else if (((((puVar12 != (unsigned char *)0x0) &&
                   (iVar4 = fn_828F0170(iVar3,0,auStack_50), -1 < iVar4)) &&
                  (iVar4 = fn_82F6DF30(*puVar12), iVar4 == 99)) &&
                 ((puVar9 = puVar12, *(unsigned int *)(param_1 + 200) != uStack_4c &&
                  (puVar9 = puVar8, ((*(unsigned int *)(param_1 + 200) ^ uStack_4c) & 0xffff0000) == 0))))
                && ((uStack_4c & 0xffff) == 0)) {
          puVar10 = puVar12;
        }
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      puVar8 = puVar9;
    } while (iVar5 != 0);
    if (puVar9 != (unsigned char *)0x0) goto LAB_82954ad4;
  }
  puVar9 = puVar10;
  if ((puVar10 == (unsigned char *)0x0) && (puVar9 = puVar7, puVar7 == (unsigned char *)0x0)) {
    return 0;
  }
LAB_82954ad4:
  if (*(int *)(param_1 + 0x15c) == 0) {
    uVar1 = *(unsigned short *)(param_3 + 10);
  }
  else {
    iVar5 = fn_82F6DF30(*puVar9);
    if (iVar5 != 99) {
      return 0;
    }
    iVar5 = fn_82F66A80(puVar9[1]);
    if (iVar5 == 0) {
      return 0;
    }
    cVar6 = puVar9[2];
    pcVar11 = puVar9 + 2;
    while (iVar5 = fn_82F66A80(cVar6), iVar5 != 0) {
      pcVar11 = pcVar11 + 1;
      cVar6 = *pcVar11;
    }
    if (*pcVar11 != '\0') {
      return 0;
    }
    uVar2 = fn_82F65B18(puVar9 + 1);
    if (0x1fff < (uVar2 & 0xffffffff)) {
      fn_82975B00(param_1,0,0,0xffffffff8202f328,puVar9 + 2);
      return 0xffffffff80004005;
    }
    uVar1 = (unsigned short)((uVar2 & 0xffffffff) << 2) | *(unsigned short *)(param_3 + 10);
  }
  *(unsigned short *)(param_3 + 10) = uVar1 | 2;
  return 0;
}

