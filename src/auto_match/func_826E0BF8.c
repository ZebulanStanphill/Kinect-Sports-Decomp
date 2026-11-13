typedef unsigned char bool;
extern unsigned int *auStack_58;
extern int fn_8267BE38();
extern int fn_82687270();
extern int fn_8268B330();
extern int fn_826A6A38();
extern int fn_826C8C70();
extern int fn_826DF558();
extern int fn_826E0920();
extern int fn_826E8660();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826E0BF8(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  int iVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char bVar9;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int auStack_58 [2];
  struct { int first; int second; } stack_pair_50;

  
  iVar8 = *(int *)(param_1 + 0x314);
  if (iVar8 == 0) {
    iVar8 = param_1 + 0x28;
  }
  uVar2 = fn_826DF558(param_1);
  uVar3 = fn_826A6A38(param_1);
  uVar4 = fn_826A6A38(param_1);
  uVar5 = fn_826A6A38(param_1);
  fn_8268B330(&uStack_5c);
  fn_8268B330(&uStack_60);
  fn_826E8660(iVar8,&uStack_5c);
  fn_826E8660(iVar8,&uStack_60);
  fn_826C8C70(iVar8,0xffffffff8200cc88,*param_2,uVar2,uVar3 & 0xffff,
                    ((unsigned __int64)uStack_60 & 0xfffffffc) + 8,((unsigned __int64)uStack_5c & 0xfffffffc) + 8,
                    uVar4 & 0xffff);
  auStack_58[0] = (unsigned int)uVar2 & 0x9ffff;
  fn_826E0920(&stack_pair_50.first,param_1,auStack_58,((unsigned __int64)uStack_60 & 0xfffffffc) + 8,
                ((unsigned __int64)uStack_5c & 0xfffffffc) + 8,uVar3,uVar4,uVar5);
  if ((stack_pair_50.first == 0) && (stack_pair_50.second != 0)) {
    fn_82687270();
  }
  lVar6 = ((unsigned __int64)uStack_60 & 0xfffffffc) + 4;
  do {
    puVar7 = (unsigned int *)lVar6;
    uVar3 = (unsigned __int64)*puVar7;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar3 - 1,0,lVar6);
      *puVar7 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  bVar9 = (uVar3 == 1) << 1;
  if (uVar3 == 1) {
    fn_8267BE38();
  }
  lVar6 = ((unsigned __int64)uStack_5c & 0xfffffffc) + 4;
  do {
    puVar7 = (unsigned int *)lVar6;
    uVar3 = (unsigned __int64)*puVar7;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar3 - 1,0,lVar6);
      *puVar7 = uVar1;
      bVar9 = 2;
    }
  } while (!(bool)(bVar9 >> 1 & 1));
  if (uVar3 == 1) {
    fn_8267BE38();
  }
  return;
}

