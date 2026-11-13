extern unsigned int *auStack_50;
extern int fn_82F4EBE8();
extern int fn_82F52188();


unsigned int fn_824A00C8(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  unsigned char auStack_50 [64];
  
  param_1 = *param_2 * 0x24 + param_1;
  *(unsigned int *)(param_1 + 4) = 0;
  if (param_2[8] < 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)fn_82F4EBE8();
  }
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(int (***)())(*piVar1 + 4))(piVar1), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F52188(auStack_50,piVar1,1);
  }
  return *(unsigned int *)(param_1 + 4);
}

