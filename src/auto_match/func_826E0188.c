extern unsigned int *auStack_30;
extern int fn_8267B890();
extern int fn_82687270();
extern unsigned short fn_826A6A38();
extern int fn_826A9280();
extern int fn_826DDC60();
extern int fn_82772D08();
extern int fn_82772E48();


void fn_826E0188(int param_1,unsigned int param_2)

{
  unsigned int uVar2;
  unsigned int iVar3;
  unsigned int uVar1;
  unsigned int auStack_30 [1];
  
  uVar2 = fn_826A6A38(param_1);
  fn_826A9280(param_1 + 0x14,"  ShapeMorphLoader: id = %d\n",uVar2 & 0xffff);
  iVar3 = fn_8267B890(*(unsigned int *)(*(int *)(param_1 + 0x20) + 0x1c),0xd0,0);
  if (iVar3 != 0) {
    uVar1 = fn_82772D08(iVar3);
  }
  else {
    uVar1 = 0;
  }
  fn_82772E48(uVar1,param_1,param_2,1);
  if (*(int *)(param_1 + 0x2e8) == 0) {
    auStack_30[0] = uVar2 & 0xffff;
    fn_826DDC60(*(unsigned int *)(param_1 + 0x20),auStack_30,uVar1);
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_82687270(uVar1);
  }
  return;
}

