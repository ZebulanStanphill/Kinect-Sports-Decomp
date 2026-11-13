typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_82687270();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826CE3B0();
extern int fn_826CE4B0();
extern int fn_826DB990();
extern int fn_8275BB38();
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8275BD70(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  char cVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  int iVar10;
  char in_RESERVE;
  unsigned char bVar11;
  unsigned int *puStack_40;
  unsigned int uStack_3c;
  int *piStack_38;
  unsigned int uStack_34;
  
  iVar10 = *(int *)(param_1 + 8) + -0x10;
  if (*(int *)(param_1 + 8) == 0) {
    iVar10 = 0;
  }
  if (iVar10 == 0) {
    return;
  }
  lVar3 = fn_8275BB38();
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) < 1) {
    fn_826CE3B0(lVar3);
    return;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x18);
  uVar4 = fn_826957D0(param_1,0);
  fn_82696D38(&puStack_40,uVar4,uVar1,0xffffffffffffffff,0);
  iVar10 = *(int *)(param_1 + 8) + -0x10;
  if (*(int *)(param_1 + 8) == 0) {
    iVar10 = 0;
  }
  uVar5 = (**(int (***)())(**(int **)(*(int *)(param_1 + 0x18) + 0x74) + 0x48))();
  bVar11 = (uVar5 == 0) << 1;
  if (uVar5 != 0) {
    fn_8267C4C8(uVar5);
  }
  if (iVar10 == 0) {
LAB_8275bf00:
    if ((uVar5 & 0xffffffff) == 0) goto LAB_8275bf10;
  }
  else {
    if ((uVar5 & 0xffffffff) == 0) goto LAB_8275bf10;
    piStack_38 = (int *)0x0;
    uStack_34 = 0;
    fn_8268C510(&uStack_3c,*puStack_40);
    cVar6 = fn_826DB990(uVar5,&piStack_38,&uStack_3c);
    lVar8 = ((unsigned __int64)uStack_3c & 0xfffffffc) + 4;
    do {
      puVar9 = (unsigned int *)lVar8;
      uVar7 = (unsigned __int64)*puVar9;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar8);
        *puVar9 = uVar2;
        bVar11 = 2;
      }
    } while (!(bool)(bVar11 >> 1 & 1));
    if (uVar7 == 1) {
      fn_8267BE38();
    }
    if ((cVar6 != '\0') && (uVar7 = (**(int (***)())(*piStack_38 + 8))(), (uVar7 & 0xff00) == 0x400)) {
      if ((piStack_38 != (int *)0x0) && (fn_826CE4B0(lVar3), piStack_38 != (int *)0x0)) {
        fn_82687270();
      }
      goto LAB_8275bf00;
    }
    if (piStack_38 != (int *)0x0) {
      fn_82687270();
    }
  }
  fn_82687270(uVar5);
LAB_8275bf10:
  uVar2 = puStack_40[2];
  puStack_40[2] = (int)((unsigned __int64)uVar2 - 1);
  if ((unsigned __int64)uVar2 - 1 == 0) {
    fn_826944C8(puStack_40);
  }
  return;
}

