extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82687270();
extern int fn_826D93E8();
extern int fn_826DCEE0();
extern int fn_82768968();
extern int fn_8276DF08();
extern unsigned int iStack_68;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_64;


unsigned __int64 fn_826DD6F8(__int64 param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int auStack_70 [2];
  struct { int first; unsigned int second; } stack_pair_68;

  
  uVar4 = 0;
  if (param_2[1] != 0) {
    iVar5 = 0;
    do {
      stack_pair_68.second = (unsigned int)(param_1 + 0x18);
      stack_pair_68.first = 0;
      puVar6 = (unsigned int *)(iVar5 + *param_2);
      uVar1 = fn_8267B890(lbl_831E7E64,0x40,0);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = fn_8276DF08(uVar1,((unsigned __int64)*puVar6 & 0xfffffffc) + 8,0);
      }
      *(unsigned int *)(iVar2 + 0x14) = *(unsigned int *)(iVar2 + 0x14) | 0x40;
      uVar1 = fn_8267B890(lbl_831E7E64,0x2c,0);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82768968(uVar1,iVar2,param_1 + 0x18);
      }
      if (stack_pair_68.first != 0) {
        fn_82687270();
      }
      auStack_70[0] = puVar6[1];
      stack_pair_68.first = iVar3;
      fn_826DCEE0(param_1,auStack_70,&stack_pair_68.first,((unsigned __int64)*puVar6 & 0xfffffffc) + 8);
      fn_8267C4F0(iVar2);
      if (stack_pair_68.first != 0) {
        fn_82687270();
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0xc;
    } while (uVar4 < (unsigned int)param_2[1]);
  }
  RtlEnterCriticalSection(param_1 + 0x54);
  auStack_70[0] = 0;
  fn_826D93E8(param_1 + 0x48,auStack_70);
  RtlLeaveCriticalSection(param_1 + 0x54);
  return 1;
}

