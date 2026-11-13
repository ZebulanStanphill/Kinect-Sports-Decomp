extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82250A18();
extern int fn_82365BD8();
extern int fn_823B7660();
extern int fn_823B77E8();
extern int fn_824543B0();
extern int fn_82454BE0();
extern int fn_8265C9E0();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821BA394;
extern unsigned int lbl_821BA420;
extern unsigned int lbl_821BA458;
extern unsigned int lbl_821BA470;
extern unsigned int lbl_824543A0;
extern unsigned int lbl_832975B0;


void fn_82453DE8(int param_1)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  char cVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned char **ppuStack_60;
  int (**pcStack_5c)();
  int iStack_58;
  int iStack_54;
  unsigned char ***pppuStack_50;
  
  iVar3 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar3 = fn_82250A18();
  }
  if (*(char *)(iVar3 + 4) != '\0') {
    uVar8 = 4;
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x114) != 4) {
      uVar8 = 2;
    }
    uVar7 = 6;
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x114) != 4) {
      uVar7 = 4;
    }
    if (uVar8 < uVar7) {
      lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x44) + 8;
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x44) == 0) {
        lVar9 = 0;
      }
      uVar1 = *(unsigned int *)(**(int **)(param_1 + 0x40) + 0x8c);
      uVar2 = fn_82365BD8(&ppuStack_60,
                                (unsigned __int64)
                                *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 4) + 0x308) + 0x30);
      fn_823B7660(uVar1,lVar9,uVar8,uVar2);
    }
    puVar4 = (unsigned int *)fn_8265C9E0(0x30);
    if (puVar4 == (unsigned int *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      puVar4[1] = 1;
      puVar4[2] = 1;
      *puVar4 = &lbl_821A8D8C;
      if (puVar4 + 4 != (unsigned int *)0x0) {
        puVar4[10] = 0;
        puVar4[4] = &lbl_821BA394;
      }
    }
    puVar5 = (unsigned int *)fn_8265C9E0(0x30);
    if (puVar5 == (unsigned int *)0x0) {
      puVar5 = (unsigned int *)0x0;
    }
    else {
      puVar5[1] = 1;
      puVar5[2] = 1;
      *puVar5 = &lbl_821A8D8C;
      if (puVar5 + 4 != (unsigned int *)0x0) {
        puVar5[10] = 0;
        puVar5[4] = &lbl_821BA420;
      }
    }
    pppuStack_50 = &ppuStack_60;
    pcStack_5c = (int (**)())&lbl_824543A0;
    iStack_54 = iStack_58;
    ppuStack_60 = &lbl_821BA458;
    iStack_58 = param_1;
    fn_82454BE0(puVar4 + 4,&ppuStack_60);
    pppuStack_50 = &ppuStack_60;
    iStack_54 = iStack_58;
    ppuStack_60 = &lbl_821BA470;
    pcStack_5c = fn_824543B0;
    iStack_58 = param_1;
    fn_82454BE0(puVar5 + 4,&ppuStack_60);
    ppuStack_60 = (unsigned char **)0x0;
    pcStack_5c = (int (**)())0x0;
    uVar8 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x114);
    if ((puVar4 != (unsigned int *)0x0) && (cVar6 = fn_8223AAC0(puVar4), cVar6 != '\0')) {
      ppuStack_60 = (unsigned char **)(puVar4 + 4);
      pcStack_5c = (int (**)())puVar4;
    }
    lVar9 = uVar8 - 4;
    fn_823B77E8(*(unsigned int *)(**(int **)(param_1 + 0x40) + 0x8c),&ppuStack_60,
                    lVar9 - ((uVar8 - 5) + (unsigned __int64)(lVar9 == 0)));
    ppuStack_60 = (unsigned char **)0x0;
    pcStack_5c = (int (**)())0x0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x114);
    if ((puVar5 != (unsigned int *)0x0) && (cVar6 = fn_8223AAC0(puVar5), cVar6 != '\0')) {
      ppuStack_60 = (unsigned char **)(puVar5 + 4);
      pcStack_5c = (int (**)())puVar5;
    }
    fn_823B77E8(*(unsigned int *)(**(int **)(param_1 + 0x40) + 0x8c),&ppuStack_60,
                    (iVar3 != 4) + '\x02');
    if (puVar5 != (unsigned int *)0x0) {
      fn_822315A0(puVar5);
    }
    if (puVar4 != (unsigned int *)0x0) {
      fn_822315A0(puVar4);
    }
  }
  return;
}

