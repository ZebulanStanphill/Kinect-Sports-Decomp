extern int fn_82A9D7B8();
extern int fn_82A9D888();


void fn_82A9DBD0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  unsigned short uVar6;
  
  fn_82A9D7B8();
  if (param_3 == (unsigned int *)0x0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar6 = *(unsigned short *)(param_3 + 0x10);
    uVar5 = *(unsigned short *)((int)param_3 + 0x3e);
    uVar4 = *(unsigned short *)(param_3 + 0xf);
    uVar3 = *(unsigned short *)((int)param_3 + 0x3a);
    uVar2 = *(unsigned short *)(param_3 + 0xe);
    uVar1 = *param_3;
  }
  fn_82A9D888(param_1,param_2,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}

