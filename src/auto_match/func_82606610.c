extern int fn_82606800();
extern unsigned int lbl_821CA898;


/* WARNING: Removing unreachable block (ram,0x82606668) */

void fn_82606610(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x58);
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 0xc))(piVar1,piVar2 != piVar1);
    *(unsigned int *)(param_1 + 0x68) = 0;
  }
  *piVar2 = (int)&lbl_821CA898;
  *(int (***)())(param_1 + 0x5c) = fn_82606800;
  *(int **)(param_1 + 0x68) = piVar2;
  return;
}

