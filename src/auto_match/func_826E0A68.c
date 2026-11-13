typedef unsigned char bool;
extern unsigned int *auStack_58;
extern int fn_8267BE38();
extern int fn_82687270();
extern int fn_8268B330();
extern int fn_826A6A38();
extern int fn_826C8C70();
extern int fn_826E0920();
extern int fn_826E8660();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826E0A68(int param_1,unsigned int *param_2)

{
  unsigned int uVar4;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar5;
  unsigned int *puVar6;
  int iVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char bVar8;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int auStack_58 [2];
  struct { int first; int second; } stack_pair_50;

  
  iVar7 = *(int *)(param_1 + 0x314);
  if (iVar7 == 0) {
    iVar7 = param_1 + 0x28;
  }
  uVar4 = fn_826A6A38(param_1);
  uVar1 = fn_826A6A38(param_1);
  uVar2 = fn_826A6A38(param_1);
  uVar3 = fn_826A6A38(param_1);
  fn_8268B330(&uStack_5c);
  fn_8268B330(&uStack_60);
  fn_826E8660(iVar7,&uStack_5c);
  fn_826E8660(iVar7,&uStack_60);
  fn_826C8C70(iVar7,0xffffffff8200cc18,*param_2,uVar4 & 0xffff,uVar1 & 0xffff,
                    ((unsigned __int64)uStack_60 & 0xfffffffc) + 8,((unsigned __int64)uStack_5c & 0xfffffffc) + 8,
                    uVar2 & 0xffff);
  auStack_58[0] = uVar4 & 0xffff;
  fn_826E0920(&stack_pair_50.first,param_1,auStack_58,((unsigned __int64)uStack_60 & 0xfffffffc) + 8,
                ((unsigned __int64)uStack_5c & 0xfffffffc) + 8,uVar1,uVar2,uVar3);
  if ((stack_pair_50.first == 0) && (stack_pair_50.second != 0)) {
    fn_82687270();
  }
  lVar5 = ((unsigned __int64)uStack_60 & 0xfffffffc) + 4;
  do {
    puVar6 = (unsigned int *)lVar5;
    uVar1 = (unsigned __int64)*puVar6;
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(uVar1 - 1,0,lVar5);
      *puVar6 = uVar4;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  bVar8 = (uVar1 == 1) << 1;
  if (uVar1 == 1) {
    fn_8267BE38();
  }
  lVar5 = ((unsigned __int64)uStack_5c & 0xfffffffc) + 4;
  do {
    puVar6 = (unsigned int *)lVar5;
    uVar1 = (unsigned __int64)*puVar6;
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(uVar1 - 1,0,lVar5);
      *puVar6 = uVar4;
      bVar8 = 2;
    }
  } while (!(bool)(bVar8 >> 1 & 1));
  if (uVar1 == 1) {
    fn_8267BE38();
  }
  return;
}

