extern int fn_822B83D0();
extern int fn_823726F8();
extern int fn_825113E0();
extern int fn_82560010();
extern int fn_827F6328();
extern unsigned int lbl_82192510;
extern unsigned int ltcg_pool_0_0f;


void fn_822D84D0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = *(int *)(param_1 + 0x54);
  puVar4 = (unsigned int *)(param_1 + 0x5c);
  if (0xf < *(unsigned int *)(param_1 + 0x70)) {
    puVar4 = (unsigned int *)*puVar4;
  }
  uVar3 = fn_82560010(*(unsigned int *)(*(int *)(iVar1 + 0x118) + 0x24),puVar4);
  uVar3 = fn_822B83D0(*(unsigned int *)(iVar1 + 0x118),uVar3);
  *(unsigned int *)(param_1 + 0x84) = 1;
  *(unsigned int *)(*(int *)(param_1 + 0x54) + 0x274) = 1;
  fn_825113E0((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x54) + 0x118) + 0x14,0x17,
                    param_1 + 0x90);
  fn_825113E0((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x54) + 0x118) + 0x14,0x27,
                    param_1 + 0xb0);
  if (*(int *)(param_1 + 0xd0) != 0) {
    dVar6 = (double)fn_827F6328(uVar3);
    dVar5 = (double)(float)((double)*(float *)(param_1 + 0xd4) * dVar6);
    fn_823726F8(dVar5,(double)(float)(dVar6 - dVar5),*(unsigned int *)(param_1 + 0x58));
  }
  *(unsigned int *)(param_1 + 0x80) = 0;
  *(unsigned int *)(param_1 + 0xd8) = ltcg_pool_0_0f;
  uVar2 = lbl_82192510;
  *(unsigned int *)(param_1 + 0xdc) = *(unsigned int *)(*(int *)(param_1 + 0x24) + 0x4c);
  *(unsigned int *)(*(int *)(param_1 + 0x24) + 0x4c) = uVar2;
  return;
}

