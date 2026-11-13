extern int fn_82A8DC48();
extern int fn_82A8ECE8();


void fn_82A8FDF8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar1 = *(unsigned int *)(param_2 + 0x30);
  uVar2 = *(unsigned int *)(param_2 + 0x2c);
  uVar3 = *(unsigned int *)(param_2 + 0x28);
  uVar1 = uVar1 + uVar2 + uVar3;
  fn_82A8DC48(param_1,param_2,param_3,param_4,param_5);
  *(float *)(param_5 + 0xc) = 1.0f;
  fn_82A8ECE8(param_1 + 4,param_2 + 0x34,param_3,
                    uVar1 + param_4,param_5 + 0x10)
  ;
  return;
}

