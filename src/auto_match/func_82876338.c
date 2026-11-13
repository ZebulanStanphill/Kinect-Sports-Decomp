extern int fn_8304EF98();
extern int fn_8304EFA8();
extern int fn_8304FAC8();


char fn_82876338(int param_1,int param_2,unsigned char param_3)

{
  unsigned int iVar1;
  char cVar2;
  
  if (*(unsigned int *)(param_2 + 0x14) != 1) return 2;
  {
    *(unsigned char *)(param_1 + 0x420) = param_3;
    iVar1 = fn_8304EF98();
    if (iVar1 == 0) {
      fn_8304EFA8(param_1);
    }
    iVar1 = fn_8304FAC8(param_2,param_1 + 4);
    *(int *)(param_1 + 0x41c) = iVar1;
    cVar2 = (iVar1 == -1) + '\x01';
  }

  return cVar2;
}

