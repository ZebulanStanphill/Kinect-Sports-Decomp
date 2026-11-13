extern int fn_8280AC48();
extern int fn_8280ACD8();
extern int fn_8280CED8();


void fn_8285AB58(int param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  
  param_2 = *(int *)(param_1 + 100) + param_2;
  iVar1 = param_2 + 0x10;
  *(unsigned int *)(param_2 + 0x94) = param_3;
  fn_8280AC48(iVar1,param_2 + 0x50);
  if (*(unsigned int *)(param_2 + 0x94) != 0) {
    fn_8280CED8(*(int *)(param_2 + 0x94),iVar1);
  }
  else {
    fn_8280ACD8(iVar1);
  }
  return;
}

