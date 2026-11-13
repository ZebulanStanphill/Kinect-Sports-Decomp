extern unsigned int *auStack_40;
extern int fn_82F4EBE8();
extern int fn_82F52188();


unsigned __int64 fn_824A0C20(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  unsigned char auStack_40 [40];
  
  if (*(int *)(param_2 + 0x20) < 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)fn_82F4EBE8();
  }
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(int (***)())(*piVar1 + 4))(piVar1), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F52188(auStack_40,piVar1,1);
  }
  return 0;
}

