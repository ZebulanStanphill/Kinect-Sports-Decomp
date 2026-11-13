extern unsigned int *auStack_1820;
extern unsigned int *auStack_1e20;
extern unsigned int *auStack_1f20;
extern int fn_82A5D160();
extern int fn_83142F5C();
extern unsigned int uStack_1f1c;
extern unsigned __int64 storeDoubleWordConditionalIndexed();


void fn_82A5D3A8(__int64 param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned char *puVar7;
  __int64 *plVar8;
  __int64 lVar9;
  unsigned char auStack_1f20 [4];
  unsigned int uStack_1f1c;
  unsigned char auStack_1e20 [1536];
  unsigned char auStack_1820 [6176];
  
  iVar2 = (int)param_1;
  if (0 < *(__int64 *)(iVar2 + 0x38)) {
    KeSetEvent(*(unsigned int *)(iVar2 + 0x28),1,0);
  }
  uStack_1f1c = *(unsigned int *)(iVar2 + 0x2c);
  iVar3 = KeWaitForMultipleObjects(2,auStack_1f20,1,3,1,0,0,auStack_1e20);
  if (iVar3 == 1) {
    puVar6 = *(unsigned int **)(iVar2 + 0x18);
    puVar7 = auStack_1820;
    lVar5 = 0x100;
    do {
      puVar4 = (unsigned int *)(puVar7 + -0x400);
      lVar9 = 6;
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 0x100;
        *puVar4 = uVar1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar5 = lVar5 + -1;
      puVar7 = puVar7 + 4;
    } while (lVar5 != 0);
    fn_82A5D160(param_1,auStack_1820);
    fn_83142F5C(*(unsigned int *)(iVar2 + 0x20),auStack_1820);
    plVar8 = (__int64 *)(param_1 + 0x38);
    lVar5 = storeDoubleWordConditionalIndexed(*plVar8 + 1,0,param_1 + 0x38);
    *plVar8 = lVar5;
  }
  return;
}

