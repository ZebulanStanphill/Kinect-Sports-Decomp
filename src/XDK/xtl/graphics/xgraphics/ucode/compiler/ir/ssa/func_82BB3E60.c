extern int fn_82B7BD28();
extern int fn_82BA02A8();
extern int fn_82BA03B8();
extern int fn_82BA3FB0();
extern int fn_82BB3490();
extern int fn_82BBFE28();
extern int fn_82BC6DC0();


void fn_82BB3E60(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar4;
  __int64 lVar3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int aiStack_60;
  
  puVar4 = (unsigned int *)fn_82BA3FB0();
  lVar3 = fn_82BBFE28(param_1 + 0x80);
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar5 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar10 = puVar5 + 1;
  *puVar5 = uVar1;
  if (puVar10 == (unsigned int *)0x0) {
    puVar10 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar10,*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0));
  }
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar5 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar6 = puVar5 + 1;
  *puVar5 = uVar1;
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar6,*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0));
  }
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar5 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar7 = puVar5 + 1;
  *puVar5 = uVar1;
  if (puVar7 == (unsigned int *)0x0) {
    puVar7 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar7,*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0));
  }
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar5 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar8 = puVar5 + 1;
  *puVar5 = uVar1;
  if (puVar8 == (unsigned int *)0x0) {
    puVar8 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar8,*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0));
  }
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar5 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar9 = puVar5 + 1;
  *puVar5 = uVar1;
  if (puVar9 == (unsigned int *)0x0) {
    puVar9 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar9,*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0));
  }
  aiStack_60 = 0;
  if (0 < (int)lVar3) {
    do {
      puVar4 = puVar4 + 1;
      fn_82BB3490(param_1,*puVar4,puVar10,puVar6,puVar7,puVar8,puVar9,&aiStack_60);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  iVar2 = aiStack_60;
  if (puVar9 != (unsigned int *)0x0) {
    fn_82BC6DC0(puVar9,1);
  }
  if (puVar8 != (unsigned int *)0x0) {
    fn_82BC6DC0(puVar8,1);
  }
  if (puVar7 != (unsigned int *)0x0) {
    fn_82BC6DC0(puVar7,1);
  }
  if (puVar6 != (unsigned int *)0x0) {
    fn_82BC6DC0(puVar6,1);
  }
  if (puVar10 != (unsigned int *)0x0) {
    fn_82BC6DC0(puVar10,1);
  }
  *(unsigned char *)(*(int *)(param_1 + 0xc) + 0x574) = 1;
  if (iVar2 != 0) {
    fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820dfefc,iVar2);
  }
  return;
}

