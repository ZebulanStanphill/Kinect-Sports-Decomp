extern int fn_830604F0();
extern int fn_830604F8();
extern int fn_830615A8();


void fn_830688E0(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  int iVar2;
  
  while (iVar2 = fn_830604F0(param_1), iVar2 != 0) {
    puVar1 = (unsigned int *)fn_830604F8(param_1,0);
    fn_830615A8(param_1,puVar1);
    if (puVar1 != (unsigned int *)0x0) {
      (*(int (**)())*puVar1)(puVar1,1);
    }
  }
  return;
}

