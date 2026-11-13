typedef unsigned char bool;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8267BE38();
extern int fn_82687270();
extern int fn_8268C3A8();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826DC448();
extern int fn_826DF328();
extern int fn_826DFA28();
extern int fn_826E9530();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826E0638(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  char cVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  int iVar8;
  char in_RESERVE;
  unsigned char bVar9;
  unsigned int auStack_60;
  int iStack_58;
  int iStack_54;
  unsigned int auStack_50 [20];
  
  uVar1 = fn_826A6A38();
  uVar1 = uVar1 & 0xffff;
  iVar8 = param_1 + 0x14;
  fn_826A9280(iVar8,0xffffffff8200cbc4,uVar1);
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    uVar2 = fn_826A6A38(param_1);
    fn_8268C3A8(auStack_50,*(unsigned int *)(*(int *)(param_1 + 0x20) + 0x1c));
    iVar3 = *(int *)(param_1 + 0x314);
    if (iVar3 == 0) {
      iVar3 = param_1 + 0x28;
    }
    fn_826E9530(iVar3,auStack_50);
    uVar2 = uVar2 & 0xffff;
    fn_826A9280(iVar8,0xffffffff8200cb68,uVar2,((unsigned __int64)auStack_50[0] & 0xfffffffc) + 8);
    iStack_58 = 0;
    iStack_54 = 0;
    auStack_60 = uVar2;
    cVar4 = fn_826DC448(*(unsigned int *)(param_1 + 0x20),&iStack_58,&auStack_60);
    bVar9 = (cVar4 == '\0') << 1;
    if (cVar4 == '\0') {
      fn_826DFA28(iVar8,0xffffffff8200cb88,((unsigned __int64)auStack_50[0] & 0xfffffffc) + 8);
    }
    else {
      auStack_60 = uVar2;
      fn_826DF328(*(unsigned int *)(param_1 + 0x20),auStack_50,&auStack_60,&iStack_58);
    }
    if ((iStack_58 == 0) && (iStack_54 != 0)) {
      fn_82687270();
    }
    lVar6 = ((unsigned __int64)auStack_50[0] & 0xfffffffc) + 4;
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
  return;
}

