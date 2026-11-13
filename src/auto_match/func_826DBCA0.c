typedef unsigned char bool;
extern unsigned int *auStack_28;
extern unsigned int *auStack_40;
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_826A8E58();
extern int fn_826D7C00();
extern int fn_826D9530();
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_826DBCA0(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  char cVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  int iVar8;
  char in_RESERVE;
  unsigned char bVar9;
  unsigned int auStack_40 [2];
  unsigned int *puStack_38;
  unsigned int uStack_34;
  unsigned int *puStack_30;
  unsigned int uStack_2c;
  unsigned char auStack_28 [40];
  
  if (param_2 != 0) {
    fn_8268C510(auStack_40);
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x20);
    iVar8 = 0;
    if (*(int *)(iVar1 + 0x74) < 2) {
      RtlEnterCriticalSection(iVar1 + 0xac);
      iVar8 = iVar1;
    }
    puStack_38 = auStack_40;
    fn_826D9530(&puStack_30,
                  (unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x20) + 0xcc,
                  &puStack_38);
    puStack_38 = (unsigned int *)0x0;
    uStack_34 = 0;
    cVar4 = fn_826A8E58(auStack_28,&puStack_38);
    bVar9 = (cVar4 == '\0') << 1;
    if (cVar4 == '\0') {
      uVar3 = fn_826D7C00((unsigned __int64)uStack_2c * 0x14 + (unsigned __int64)*puStack_30 + 0x14,
                            (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + 0x18);
      if (iVar8 != 0) {
        RtlLeaveCriticalSection(iVar8 + 0xac);
      }
      lVar6 = ((unsigned __int64)auStack_40[0] & 0xfffffffc) + 4;
      do {
        puVar7 = (unsigned int *)lVar6;
        uVar5 = (unsigned __int64)*puVar7;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
          *puVar7 = uVar2;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      if (uVar5 != 1) {
        return uVar3;
      }
      fn_8267BE38();
      return uVar3;
    }
    if (iVar8 != 0) {
      RtlLeaveCriticalSection(iVar8 + 0xac);
    }
    lVar6 = ((unsigned __int64)auStack_40[0] & 0xfffffffc) + 4;
    do {
      puVar7 = (unsigned int *)lVar6;
      uVar5 = (unsigned __int64)*puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
        *puVar7 = uVar2;
        bVar9 = 2;
      }
    } while (!(bool)(bVar9 >> 1 & 1));
    if (uVar5 == 1) {
      fn_8267BE38();
    }
  }
  return 0;
}

