typedef unsigned char bool;
#define true 1
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_82687270();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826A7398();
extern int fn_826ADE60();
extern int fn_826DB990();
extern int fn_8274A8E0();
extern int fn_8275C268();
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8275C328(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  char cVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int *puVar11;
  int iVar12;
  char in_RESERVE;
  unsigned char bVar13;
  unsigned int *puStack_40;
  unsigned int uStack_3c;
  int *piStack_38;
  unsigned int uStack_34;
  
  uVar5 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
  if ((uVar5 & 0xffffffff) == 0) {
    return;
  }
  lVar6 = fn_8274A8E0(uVar5 + 8);
  if (lVar6 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) < 1) {
    fn_826ADE60(*(unsigned int *)(param_1 + 0x18),0xffffffff8201477c);
    return;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x18);
  uVar7 = fn_826957D0(param_1,0);
  fn_82696D38(&puStack_40,uVar7,uVar2,0xffffffffffffffff,0);
  iVar12 = *(int *)(param_1 + 8) + -0x10;
  if (*(int *)(param_1 + 8) == 0) {
    iVar12 = 0;
  }
  uVar5 = (**(int (***)())(**(int **)(*(int *)(param_1 + 0x18) + 0x74) + 0x48))();
  bVar13 = (uVar5 == 0) << 1;
  if (uVar5 != 0) {
    fn_8267C4C8(uVar5);
  }
  if (iVar12 == 0) {
LAB_8275c534:
    if ((uVar5 & 0xffffffff) == 0) goto LAB_8275c544;
  }
  else {
    if ((uVar5 & 0xffffffff) == 0) goto LAB_8275c544;
    piStack_38 = (int *)0x0;
    uStack_34 = 0;
    fn_8268C510(&uStack_3c,*puStack_40);
    cVar8 = fn_826DB990(uVar5,&piStack_38,&uStack_3c);
    lVar10 = ((unsigned __int64)uStack_3c & 0xfffffffc) + 4;
    do {
      puVar11 = (unsigned int *)lVar10;
      uVar9 = (unsigned __int64)*puVar11;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar9 - 1,0,lVar10);
        *puVar11 = uVar3;
        bVar13 = 2;
      }
    } while (!(bool)(bVar13 >> 1 & 1));
    if (uVar9 == 1) {
      fn_8267BE38();
    }
    if ((cVar8 != '\0') &&
       (uVar9 = (**(int (***)())(*piStack_38 + 8))(), piVar4 = piStack_38, (uVar9 & 0xff00) == 0x400)) {
      if (piStack_38 != (int *)0x0) {
        lVar6 = (**(int (***)())(*(int *)piStack_38[3] + 0xc))((int *)piStack_38[3],lVar6);
        bVar1 = lVar6 == 0;
        if (!bVar1) {
          do {
            puVar11 = (unsigned int *)(lVar6 + 4);
            if (in_RESERVE != '\0') {
              uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar11 + 1,0,lVar6 + 4);
              *puVar11 = uVar3;
              bVar1 = true;
            }
          } while (!bVar1);
        }
        if (*(int *)(iVar12 + 0x30) != 0) {
          fn_8275C268();
        }
        *(int *)(iVar12 + 0x30) = (int)lVar6;
        fn_8267C4C8(piVar4);
        if (*(int *)(iVar12 + 0x34) != 0) {
          fn_82687270();
        }
        *(int **)(iVar12 + 0x34) = piVar4;
        if (piStack_38 != (int *)0x0) {
          fn_82687270();
        }
      }
      goto LAB_8275c534;
    }
    if (piStack_38 != (int *)0x0) {
      fn_82687270();
    }
  }
  fn_82687270(uVar5);
LAB_8275c544:
  uVar3 = puStack_40[2];
  puStack_40[2] = (int)((unsigned __int64)uVar3 - 1);
  if ((unsigned __int64)uVar3 - 1 == 0) {
    fn_826944C8(puStack_40);
  }
  return;
}

