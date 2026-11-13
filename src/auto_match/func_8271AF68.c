extern int fn_82681728();
extern int fn_826826A8();
extern int fn_826944C8();
extern int fn_82695520();
extern int fn_826AF618();
extern int fn_82720748();
extern unsigned int iStack_40;


void fn_8271AF68(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int param_5)

{
  unsigned char *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar5;
  __int64 lVar4;
  unsigned int *puVar6;
  struct { int first; int second; } stack_pair_40;

  
  uVar5 = *(int *)(param_2 + 8) + 0x10;
  *(unsigned int *)(param_2 + 8) = uVar5;
  puVar6 = (unsigned int *)(param_2 + 8);
  if (*(unsigned int *)(param_2 + 0x10) <= uVar5) {
    fn_826826A8(puVar6);
  }
  puVar1 = (unsigned char *)*puVar6;
  if (puVar1 != (unsigned char *)0x0) {
    *(unsigned int *)(puVar1 + 8) = param_5;
    *puVar1 = 4;
  }
  fn_82681728(&stack_pair_40.second,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,param_4);
  uVar5 = *puVar6;
  *puVar6 = uVar5 + 0x10;
  if (*(unsigned int *)(param_2 + 0x10) <= uVar5 + 0x10) {
    fn_826826A8(puVar6);
  }
  puVar1 = (unsigned char *)*puVar6;
  if (puVar1 != (unsigned char *)0x0) {
    *(int *)(puVar1 + 4) = stack_pair_40.second;
    *puVar1 = 5;
    *(int *)(stack_pair_40.second + 8) = *(int *)(stack_pair_40.second + 8) + 1;
  }
  lVar4 = (unsigned __int64)*(unsigned int *)(stack_pair_40.second + 8) - 1;
  *(int *)(stack_pair_40.second + 8) = (int)lVar4;
  if (lVar4 == 0) {
    fn_826944C8();
  }
  uVar5 = *puVar6;
  *puVar6 = uVar5 + 0x10;
  if (*(unsigned int *)(param_2 + 0x10) <= uVar5 + 0x10) {
    fn_826826A8(puVar6);
  }
  if (*puVar6 != 0) {
    fn_82695520(*puVar6,param_3);
  }
  lVar4 = param_1 + 0x10;
  if ((param_1 & 0xffffffff) == 0) {
    lVar4 = 0;
  }
  iVar2 = *(int *)(param_2 + 0xc);
  uVar5 = *puVar6;
  uVar3 = *(unsigned int *)(param_2 + 0x1c);
  fn_82681728(&stack_pair_40.first,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,0xffffffff8200eb60);
  fn_82720748(param_2,lVar4,&stack_pair_40.first,3,
                    (__int64)((int)(uVar5 - iVar2) >> 4) + ((unsigned __int64)uVar3 & 0x7ffffff) * 0x20 +
                    -0x20);
  lVar4 = (unsigned __int64)*(unsigned int *)(stack_pair_40.first + 8) - 1;
  *(int *)(stack_pair_40.first + 8) = (int)lVar4;
  if (lVar4 == 0) {
    fn_826944C8(stack_pair_40.first);
  }
  fn_826AF618(puVar6);
  return;
}

