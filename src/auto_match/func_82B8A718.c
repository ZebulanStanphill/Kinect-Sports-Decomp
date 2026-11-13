extern int fn_82ABE5F8();
extern int fn_82AD18C0();
extern int fn_82B894C8();


int fn_82B8A718(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                 unsigned __int64 param_5)

{
  int iVar1;
  unsigned int iVar2;
  int iVar3;
  unsigned int *puVar4;
  
  iVar3 = fn_82AD18C0(param_1,param_4,param_5);
  fn_82B894C8(param_1,param_2,param_3,iVar3);
  iVar1 = *(int *)(iVar3 + 0xc);
  puVar4 = (unsigned int *)(iVar1 + 4);
  for (iVar2 = *(int *)(iVar1 + 4); iVar2 != iVar3; iVar2 = *(int *)(iVar2 + 8)) {
    puVar4 = (unsigned int *)(iVar2 + 8);
  }
  *puVar4 = *(unsigned int *)(iVar2 + 8);
  fn_82ABE5F8(param_1,iVar3,0x14,0x1a);
  return iVar1;
}

