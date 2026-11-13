extern int fn_82601E70();
extern int fn_82602708();
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954E8;


void fn_82602E68(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  double dVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  *(unsigned int *)(param_2 + 0xc) = lbl_821954E8;
  dVar2 = (double)lbl_82193AF0;
  fn_82601E70(dVar2,param_2);
  *(unsigned int *)(param_2 + 0x18) = 1;
  puVar1 = (unsigned int *)(param_2 + 0x60U & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(unsigned int *)(param_2 + 0x1c) = 1;
  *(unsigned int *)(param_2 + 0x154) = 0;
  puVar1 = (unsigned int *)(param_2 + 0x70U & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  fn_82602708(dVar2,param_1,param_2);
  return;
}

