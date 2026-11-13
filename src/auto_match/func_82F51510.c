extern int fn_82F52970();
extern int fn_82F58BD8();


void fn_82F51510(int *param_1)

{
  unsigned int *puVar1;
  unsigned int iVar2;
  
  puVar1 = (unsigned int *)param_1[2];
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    fn_82F58BD8(iVar2);
    fn_82F52970(iVar2);
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    fn_82F58BD8(iVar2);
    fn_82F52970(iVar2);
  }
  return;
}

