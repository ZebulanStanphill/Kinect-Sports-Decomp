typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_40;
extern int fn_82813428();
extern int fn_82813680();
extern int fn_82813720();
extern int fn_82813AE0();
extern int fn_82813CB8();
extern unsigned int iStack_28;
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82813ED8(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  char cVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  char in_RESERVE;
  unsigned char auStack_40 [16];
  unsigned __int64 uStack_30;
  int iStack_28;
  unsigned __int64 *puStack_24;
  
  do {
    cVar4 = fn_82813AE0(param_1,auStack_40);
    bVar1 = cVar4 == '\0';
  } while (!bVar1);
  lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20) + 0xc;
  do {
    puVar6 = (unsigned int *)lVar5;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,lVar5);
      *puVar6 = uVar2;
      bVar1 = true;
    }
  } while (!bVar1);
  fn_82813680(param_1);
  fn_82813720(param_1);
  lVar5 = fn_82813CB8(param_1,0x10);
  bVar1 = lVar5 == 0;
  iVar3 = (int)lVar5;
  if (!bVar1) {
    *(unsigned int *)(iVar3 + 8) = 0;
    do {
      puVar6 = (unsigned int *)(lVar5 + 0xc);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,lVar5 + 0xc);
        *puVar6 = uVar2;
        bVar1 = true;
      }
    } while (!bVar1);
  }
  uStack_30 = *(unsigned __int64 *)(param_1 + 0x20);
  iStack_28 = iVar3;
  puStack_24 = (unsigned __int64 *)(param_1 + 0x20);
  fn_82813428(&uStack_30);
  puStack_24 = (unsigned __int64 *)(param_1 + 0x28);
  uStack_30 = *(unsigned __int64 *)(param_1 + 0x28);
  iStack_28 = iVar3;
  fn_82813428(&uStack_30);
  if (*(__int64 *)(param_1 + 0x10) == 0) {
    sync(1);
  }
  return;
}

