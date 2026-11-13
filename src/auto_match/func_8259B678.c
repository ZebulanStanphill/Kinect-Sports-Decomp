extern int fn_827DE838();


void fn_8259B678(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int iVar1;
  unsigned int *puVar2;
  
  iVar1 = fn_827DE838(param_2);
  if ((iVar1 != 0) && (puVar2 = (unsigned int *)fn_827DE838(param_2), puVar2 != (unsigned int *)0x0)) {
    (*(int (**)())*puVar2)(puVar2,1);
  }
  return;
}

