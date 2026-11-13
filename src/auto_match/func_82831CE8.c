extern int fn_828223C8();
extern int fn_82829830();
extern int fn_82F67CF8();
extern unsigned int uStack_54;
extern unsigned int uStack_58;


unsigned int fn_82831CE8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  int *piVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  int aiStack_60;
  struct { unsigned int first; unsigned int second; } stack_pair_58;

  
  iVar3 = param_1 + 0x2fc;
  do {
    do {
      fn_828223C8(iVar3,&aiStack_60);
      iVar3 = aiStack_60;
      if (aiStack_60 == 0) {
        return 0;
      }
      piVar5 = (int *)(aiStack_60 + 0x48);
      iVar1 = (((int *)*piVar5)[1] - *(int *)*piVar5) / 0x14;
    } while (iVar1 == 0);
    if (iVar1 != 0) {
      puVar4 = (unsigned int *)(aiStack_60 + 0xc);
      iVar2 = 0;
      lVar6 = (__int64)iVar1;
      do {
        puVar7 = (unsigned int *)(*(int *)*piVar5 + iVar2);
        stack_pair_58.first = puVar7[2];
        fn_82829830(iVar3,&stack_pair_58.first);
        lVar6 = lVar6 + -1;
        iVar2 = iVar2 + 0x14;
        *puVar7 = *puVar4;
        puVar7[2] = stack_pair_58.second;
      } while (lVar6 != 0);
    }
    iVar2 = fn_82F67CF8(*(unsigned int *)*piVar5,0x14,(__int64)iVar1,param_2);
    iVar3 = aiStack_60;
  } while (iVar2 == iVar1);
  return 1;
}

