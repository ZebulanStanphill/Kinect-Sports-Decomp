extern int fn_82BEEF40();
extern int fn_82BF45D8();


unsigned int * fn_82BF4B98(int *param_1,int param_2)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  int iVar3;
  
  if ((param_2 != 0) &&
     (puVar2 = (unsigned int *)(**(int (***)())(*param_1 + 4))(param_1), puVar2 != (unsigned int *)0x0)) {
    uVar1 = fn_82BF45D8(param_1);
    iVar3 = fn_82BEEF40(puVar2,uVar1);
    if (iVar3 != 0) {
      return puVar2;
    }
    (**(int (***)())*puVar2)(puVar2,1);
  }
  return (unsigned int *)0x0;
}

