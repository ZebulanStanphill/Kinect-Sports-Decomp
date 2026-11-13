extern int fn_827F7210();
extern int fn_827FB050();
extern int fn_827FB300();
extern int fn_827FCBE8();


void fn_827FE1C8(unsigned __int64 param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  short sVar4;
  
  uVar1 = *(unsigned int *)(param_4 + 0x98);
  uVar2 = *(unsigned int *)(param_3 + 0x98);
  uVar3 = *(unsigned int *)(param_2 + 0x98);
  sVar4 = fn_827F7210();
  if (sVar4 != 0) {
    fn_827FCBE8(param_1,uVar3,uVar2,uVar1,param_5,0);
  }
  fn_827FB300(param_1,uVar3,uVar2,uVar1,param_5,0);
  fn_827FB050(uVar3,uVar2,uVar1);
  return;
}

