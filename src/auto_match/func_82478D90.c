extern int fn_822848B8();
extern int fn_82476E30();
extern int fn_82529320();
extern int fn_8255B0D8();
extern unsigned int ltcg_pool_0_0f;


void fn_82478D90(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (**(int (***)())(*param_1 + 0x20))();
  if (*(int *)(*(int *)(param_1[0x5b] + 0x844) + 0x358) != 0) {
    fn_8255B0D8();
  }
  *(unsigned char *)((int)param_1 + 0x106) = 1;
  iVar1 = *(int *)(param_1[9] + 0x84);
  iVar2 = *(int *)(param_1[9] + 0x7c);
  if (iVar1 != 0) {
    if (iVar2 != 0) {
      *(unsigned char *)(iVar2 + 0x148) = 0;
    }
    *(unsigned char *)(iVar1 + 0xb0) = 0;
    fn_82476E30(param_1 + 4,0,0);
  }
  if (param_1[0x5c] != 0) {
    fn_82529320(param_1[0x5c],0);
    param_1[0x5c] = 0;
  }
  if ((unsigned int)LZCOUNT(iVar3 + -5) >> 5 != 0) {
    *(unsigned char *)(param_1 + 0x4f) = 1;
    param_1[0x51] = 0;
    param_1[0x65] = 0xe;
    iVar3 = ltcg_pool_0_0f;
    param_1[100] = -0x7ce396d8;
    param_1[0x50] = iVar3;
  }
  if (param_1[0x6f] != 0) {
    fn_822848B8();
    param_1[0x6f] = 0;
  }
  return;
}

