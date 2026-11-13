extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82672C20();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_40;


void fn_8227B668(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  double dVar3;
  unsigned __int64 uStack_40;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  double dStack_28;

  iVar2 = 8;
  *(unsigned int *)(param_1 + 0xa84) = 8;
  if (param_3 < 2) {
    if (param_2 == 1) {
      *(unsigned int *)(param_1 + 0xa84) = 0;
      goto LAB_8227b76c;
    }
    if (param_2 == 2) {
      iVar2 = 1;
    }
    else if (param_2 == 3) {
      iVar2 = 6;
    }
    else if (param_2 == 4) {
      iVar2 = 7;
    }
    else if ((param_2 < 5) || (8 < param_2)) goto LAB_8227b76c;
  }
  else if (param_3 == 2) {
    if (param_2 == 2) {
      iVar2 = 10;
    }
    else if (param_2 == 3) {
      iVar2 = 0xb;
    }
    else {
      if (param_2 != 4) goto LAB_8227b76c;
      iVar2 = 0xc;
    }
  }
  else if (param_3 < 4) {
    if (param_2 == 3) {
      iVar2 = 0xd;
    }
    else {
      if (param_2 != 4) goto LAB_8227b76c;
      iVar2 = 0xe;
    }
  }
  else if (param_3 == 4) {
    iVar2 = ((unsigned int)LZCOUNT(*(unsigned int *)(param_1 + 0xa6c)) >> 5 ^ 1) + 2;
  }
  else {
    if (5 < param_3) goto LAB_8227b76c;
    iVar2 = 9;
  }
  *(int *)(param_1 + 0xa84) = iVar2;
LAB_8227b76c:
  *(unsigned int *)(param_1 + 0xa48) = 0;
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  uStack_40 = (__int64)*(int *)(param_1 + 0xa84);
  *(unsigned int *)(param_1 + 0xa4c) = ltcg_pool_0_0f;
  dVar3 = (double)uStack_40;
  fn_82273CD8(&stack_pair_30.first,3);
  dStack_28 = dVar3;
  puVar1 = (unsigned int *)fn_82279C58(&uStack_40,param_1);
  fn_82672C20(*puVar1,0xffffffff821a84ac,&stack_pair_30.first,1);
  if ((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) != 0) {
    fn_822315A0();
  }
  fn_82273C88(&stack_pair_30.first);
  return;
}
