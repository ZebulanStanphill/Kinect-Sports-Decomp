extern unsigned int *auStack_30;
extern int fn_826A9280();
extern int fn_826AA460();
extern int fn_826DFB28();
extern int fn_826E7A08();
extern int fn_826F6638();
extern int fn_826FA300();


void fn_826E2CE8(int param_1)

{
  int uVar1;
  int lVar2;
  int iVar3;
  unsigned int auStack_30;
  
  fn_826A9280(param_1 + 0x14,"  PlaceObject\n");
  iVar3 = *(int *)(param_1 + 0x314);
  if ((void *)iVar3 == 0) {
    iVar3 = param_1 + 0x28;
  }
  uVar1 = fn_826FA300(iVar3);
  lVar2 = fn_826DFB28(param_1,uVar1);
  fn_826E7A08(iVar3,lVar2 + 5,uVar1);
  fn_826F6638(lVar2,uVar1);
  auStack_30 = (unsigned int)lVar2;
  fn_826AA460(*(int *)(param_1 + 0x2e8) * 0xc + param_1 + 0x2f0,&auStack_30);
  return;
}

