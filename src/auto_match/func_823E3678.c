extern int fn_822ABA88();
extern int fn_822AF138();


/* WARNING: Removing unreachable block (ram,0x823e3790) */
/* WARNING: Removing unreachable block (ram,0x823e3710) */

void fn_823E3678(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = *(int *)(param_2[4] * 4 + *param_2);
  if (*(int *)(iVar1 + 8) != 0) {
    param_1 = *(int *)(iVar1 + 0x10) * 0x150 + param_1;
    *(unsigned char *)(param_1 + 0x10b4) = 0;
    *(unsigned char *)(param_1 + 0x10b5) = 0;
    *(unsigned int *)(param_1 + 0x10b0) = 0;
    uVar2 = 0x19;
    iVar1 = fn_822ABA88(*(unsigned int *)(param_2[4] * 4 + *param_2),0);
                    /* WARNING: Subroutine does not return */
    fn_822AF138(*(unsigned int *)(iVar1 + 0x110),uVar2);
  }
  if (*(int *)(*(int *)(param_3[4] * 4 + *param_3) + 8) != 0) {
    param_1 = *(int *)(*(int *)(param_3[4] * 4 + *param_3) + 0x10) * 0x150 + param_1;
    *(unsigned char *)(param_1 + 0x10b4) = 0;
    *(unsigned char *)(param_1 + 0x10b5) = 0;
    *(unsigned int *)(param_1 + 0x10b0) = 0;
    uVar2 = 0x19;
    iVar1 = fn_822ABA88(*(unsigned int *)(param_2[4] * 4 + *param_2),0);
                    /* WARNING: Subroutine does not return */
    fn_822AF138(*(unsigned int *)(iVar1 + 0x110),uVar2);
  }
  return;
}

