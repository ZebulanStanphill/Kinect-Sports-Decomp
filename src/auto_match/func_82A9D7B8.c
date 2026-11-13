extern int fn_82A9D590();


void fn_82A9D7B8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  if (param_3 == (unsigned int *)0x0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar6 = param_3[0xb];
    uVar5 = param_3[10];
    uVar4 = param_3[9];
    uVar3 = param_3[8];
    uVar2 = param_3[4];
    uVar1 = *param_3;
  }
  fn_82A9D590(param_1,param_2,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}

