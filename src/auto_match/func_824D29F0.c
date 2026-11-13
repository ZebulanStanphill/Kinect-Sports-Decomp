extern int fn_823BEEA0();
extern int fn_824CD030();
extern int fn_828B2DE8();
extern int fn_82F51178();
extern int fn_82F513F8();
extern int fn_82F53B80();


void fn_824D29F0(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  iVar4 = fn_824CD030(param_1 + -0xf0);
  if ((iVar4 == 0) &&
     (iVar4 = *(int *)(param_1 + 0x70), iVar5 = fn_82F513F8(*(unsigned int *)(param_1 + -0xd0)),
     iVar5 != iVar4)) {
    fn_82F51178(*(unsigned int *)(param_1 + -0xd0),*(unsigned int *)(param_1 + 0x70));
  }
  iVar4 = *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x74) = iVar4 + 1;
  uVar3 = fn_828B2DE8(*(unsigned int *)(param_1 + 0x70));
  fn_823BEEA0(param_2,uVar3,iVar4);
  fn_82F53B80(*(unsigned int *)(param_1 + 0x70));
  puVar1 = (unsigned int *)(param_2 + 0x180U & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(unsigned int *)(param_1 + 100) = *(unsigned int *)(param_2 + 400);
  return;
}

