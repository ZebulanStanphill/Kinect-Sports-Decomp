extern int fn_82C10F68();


void fn_82C1E328(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar2;

  piVar1 = *(int **)(param_1 + 0x1c);
  iVar2 = (**(int (***)())(*piVar1 + 0x18))(*piVar1);
  if (-1 < iVar2) {
    *(unsigned __int64 *)(piVar1 + 2) = param_2;
    *(unsigned __int64 *)(piVar1 + 8) = param_2;
    *(unsigned __int64 *)(piVar1 + 10) = param_2;
                    /* WARNING: Subroutine does not return */
    fn_82C10F68(piVar1[0xc],0,0x4c);
  }
  return;
}
