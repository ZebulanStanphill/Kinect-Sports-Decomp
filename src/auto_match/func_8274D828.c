typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82687270();
extern int fn_8268C510();
extern int fn_8268C928();
extern int fn_8268CAB0();
extern int fn_826A7398();
extern int fn_826ADF90();
extern int fn_826DB990();
extern int fn_826E5600();
extern int fn_8274CF30();
extern int fn_8274D4F8();
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_8274D828(int param_1,unsigned int *param_2)

{
  bool bVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  bool bVar5;
  bool bVar6;
  __int64 lVar7;
  unsigned int *puVar9;
  int iVar10;
  unsigned __int64 uVar8;
  int *piVar11;
  char cVar12;
  unsigned __int64 uVar13;
  char *pcVar14;
  char *pcVar16;
  __int64 lVar15;
  unsigned __int64 uVar17;
  int iVar18;
  char in_RESERVE;
  unsigned char bVar19;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  int *piStack_50;
  unsigned int uStack_4c;
  
  uVar17 = 0;
  lVar7 = (**(int (***)())(**(int **)(param_1 + 0x74) + 0x48))();
  if (lVar7 == 0) {
    return 0;
  }
  fn_8267C4C8(lVar7);
  bVar6 = false;
  iVar18 = (*param_2 & 0xfffffffc) + 8;
  cVar12 = *(char *)((*param_2 & 0xfffffffc) + 8);
  if ((cVar12 == 'i') || (cVar12 == 'I')) {
    fn_8268CAB0(&uStack_60,param_2);
    puVar9 = (unsigned int *)fn_8268C928(&uStack_58,&uStack_60,0,6);
    pcVar14 = "img://";
    pcVar16 = (char *)((*puVar9 & 0xfffffffc) + 8);
    do {
      cVar12 = *pcVar16;
      cVar2 = *pcVar14;
      bVar1 = cVar12 == '\0';
      if (bVar1) break;
      pcVar16 = pcVar16 + 1;
      pcVar14 = pcVar14 + 1;
    } while (cVar12 == cVar2);
    bVar5 = cVar12 != cVar2;
    lVar15 = ((unsigned __int64)uStack_58 & 0xfffffffc) + 4;
    do {
      puVar9 = (unsigned int *)lVar15;
      uVar13 = (unsigned __int64)*puVar9;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(uVar13 - 1,0,lVar15);
        *puVar9 = uVar4;
        bVar1 = true;
      }
    } while (!bVar1);
    if (uVar13 == 1) {
      fn_8267BE38();
    }
    if (bVar5) {
      puVar9 = (unsigned int *)fn_8268C928(&uStack_54,&uStack_60,0,8);
      pcVar14 = "imgps://";
      pcVar16 = (char *)((*puVar9 & 0xfffffffc) + 8);
      do {
        cVar12 = *pcVar16;
        cVar2 = *pcVar14;
        bVar1 = cVar12 == '\0';
        if (bVar1) break;
        pcVar16 = pcVar16 + 1;
        pcVar14 = pcVar14 + 1;
      } while (cVar12 == cVar2);
      bVar5 = cVar12 != cVar2;
      lVar15 = ((unsigned __int64)uStack_54 & 0xfffffffc) + 4;
      do {
        puVar9 = (unsigned int *)lVar15;
        uVar13 = (unsigned __int64)*puVar9;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(uVar13 - 1,0,lVar15);
          *puVar9 = uVar4;
          bVar1 = true;
        }
      } while (!bVar1);
      if (uVar13 == 1) {
        fn_8267BE38();
      }
      if (!bVar5) goto LAB_8274d9c4;
    }
    else {
LAB_8274d9c4:
      bVar6 = true;
    }
    lVar15 = ((unsigned __int64)uStack_60 & 0xfffffffc) + 4;
    do {
      puVar9 = (unsigned int *)lVar15;
      uVar13 = (unsigned __int64)*puVar9;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(uVar13 - 1,0,lVar15);
        *puVar9 = uVar4;
        bVar5 = true;
      }
    } while (!bVar5);
    if (uVar13 == 1) {
      fn_8267BE38();
    }
  }
  bVar19 = !bVar6 << 1;
  if (!bVar6) {
    piStack_50 = (int *)0x0;
    uStack_4c = 0;
    fn_8268C510(&uStack_5c,((unsigned __int64)*param_2 & 0xfffffffc) + 8);
    cVar12 = fn_826DB990(lVar7,&piStack_50,&uStack_5c);
    lVar15 = ((unsigned __int64)uStack_5c & 0xfffffffc) + 4;
    do {
      puVar9 = (unsigned int *)lVar15;
      uVar13 = (unsigned __int64)*puVar9;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(uVar13 - 1,0,lVar15);
        *puVar9 = uVar4;
        bVar19 = 2;
      }
    } while (!(bool)(bVar19 >> 1 & 1));
    if (uVar13 == 1) {
      fn_8267BE38();
    }
    if ((cVar12 == '\0') ||
       (uVar13 = (**(int (***)())(*piStack_50 + 8))(), piVar11 = piStack_50, (uVar13 & 0xff00) != 0x100)
       ) {
      if (piStack_50 != (int *)0x0) {
        fn_82687270();
      }
      fn_82687270(lVar7);
      return 0;
    }
    if (piStack_50 == (int *)0x0) goto LAB_8274dc1c;
    uVar13 = fn_8267B890(*(unsigned int *)(*(int *)(param_1 + 0x78) + 0x288),0x38,0);
    if ((uVar13 & 0xffffffff) != 0) {
      uVar17 = fn_8274CF30(uVar13,param_1);
    }
    fn_8274D4F8(uVar17,param_1,piVar11,lVar7);
    piVar11 = piStack_50;
  }
  else {
    iVar10 = fn_826A7398(param_1);
    piVar11 = (int *)(*(int *)(iVar10 + 0x100) + 8);
    if (*(int *)(iVar10 + 0x100) == 0) {
      piVar11 = (int *)0x0;
    }
    uVar3 = *(unsigned int *)(*(int *)(param_1 + 0x78) + 0x288);
    uVar13 = (**(int (***)())(*piVar11 + 0xc))(piVar11,4);
    uVar8 = (**(int (***)())(*piVar11 + 0xc))(piVar11,5);
    piVar11 = (int *)fn_826E5600(iVar18,uVar8,uVar13,uVar3);
    if ((uVar8 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar8);
    }
    if ((uVar13 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar13);
    }
    if (piVar11 == (int *)0x0) {
      fn_826ADF90(param_1,0xffffffff82013610,iVar18);
    }
    else {
      uVar13 = fn_8267B890(uVar3,0x38,0);
      if ((uVar13 & 0xffffffff) != 0) {
        uVar17 = fn_8274CF30(uVar13,param_1);
      }
      fn_8274D4F8(uVar17,param_1,piVar11,0);
    }
  }
  if (piVar11 != (int *)0x0) {
    fn_82687270(piVar11);
  }
LAB_8274dc1c:
  fn_82687270(lVar7);
  return uVar17;
}

