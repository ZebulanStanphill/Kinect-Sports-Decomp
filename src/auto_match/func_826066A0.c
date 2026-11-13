extern int fn_82606860();
extern unsigned int lbl_821CA8B0;


/* WARNING: Removing unreachable block (ram,0x826066f8) */

void fn_826066A0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x70);
  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 0xc))(piVar1,piVar2 != piVar1);
    *(unsigned int *)(param_1 + 0x80) = 0;
  }
  *piVar2 = (int)&lbl_821CA8B0;
  *(int (***)())(param_1 + 0x74) = fn_82606860;
  *(int **)(param_1 + 0x80) = piVar2;
  return;
}

