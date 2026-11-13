extern unsigned int *auStack_30;
extern int fn_8267B890();
extern int fn_82687270();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826CDAB8();
extern int fn_826D28F0();
extern int fn_826DDC60();


void fn_826E0428(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar3;
  unsigned int uVar2;
  int iVar4;
  unsigned int auStack_30;
  
  uVar3 = fn_826A6A38(param_1);
  uVar3 = uVar3 & 0xffff;
  fn_826A9280(param_1 + 0x14,"  sprite\n  char id = %d\n",uVar3);
  uVar2 = fn_8267B890(*(unsigned int *)(*(int *)(param_1 + 0x20) + 0x1c),0x38,0);
  if (uVar2 != 0) {
    iVar4 = fn_826D28F0(uVar2,*(unsigned int *)(param_1 + 0x24));
  }
  else {
    iVar4 = 0;
  }
  auStack_30 = uVar3;
  fn_826CDAB8(iVar4,param_1,&auStack_30);
  uVar1 = *(unsigned int *)(param_1 + 0x20);
  auStack_30 = uVar3;
  *(unsigned int *)(iVar4 + 0xc) = uVar3;
  fn_826DDC60(uVar1,&auStack_30,iVar4);
  fn_82687270(iVar4);
  return;
}

