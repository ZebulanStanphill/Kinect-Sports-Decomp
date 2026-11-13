extern int fn_82A8DC48();
extern unsigned int lbl_82002AE0;


void fn_82A8F350(__int64 param_1,int param_2,unsigned __int64 param_3,__int64 param_4,int param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  double dVar4;
  
  uVar1 = *(unsigned int *)(param_2 + 0x30);
  uVar2 = *(unsigned int *)(param_2 + 0x2c);
  uVar3 = *(unsigned int *)(param_2 + 0x28);
  fn_82A8DC48();
  dVar4 = (double)lbl_82002AE0;
  *(float *)(param_5 + 0xc) = lbl_82002AE0;
  fn_82A8DC48(param_1 + 4,param_2 + 0x34,param_3,
                (unsigned __int64)uVar1 + (unsigned __int64)uVar2 + (unsigned __int64)uVar3 + param_4,param_5 + 0x10);
  *(float *)(param_5 + 0x1c) = (float)dVar4;
  return;
}

