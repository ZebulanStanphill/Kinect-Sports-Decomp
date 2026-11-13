extern int fn_83049D68();
extern int fn_8307DE78();
extern int fn_8307E060();
extern int fn_8307E600();
extern int fn_8307E6E0();


char fn_8304AA48(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)(param_1 + 0x28);
  if (param_1 == 0) {
    puVar2 = (unsigned int *)0x0;
  }
  fn_8307DE78(*puVar2);
  fn_8307E6E0(*puVar2);
  *(int *)(param_1 + 0x60) = (int)param_2;
  fn_83049D68(param_1,param_3,param_2);
  iVar1 = fn_8307E600(*(unsigned int *)(param_1 + 0x28),0,param_2,param_3);
  fn_8307E060(*puVar2);
  return (iVar1 != 0) + '\x01';
}

