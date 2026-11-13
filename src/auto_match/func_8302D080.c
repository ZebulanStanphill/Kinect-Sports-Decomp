extern unsigned int *auStack_40;
extern int fn_82FFE000();
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


void fn_8302D080(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iStack_50;
  unsigned int uStack_4c;
  int *piStack_48;
  int iStack_44;
  unsigned char auStack_40 [64];
  
  piStack_48 = *(int **)(param_1 + 0x8c);
  iVar3 = param_1 + 0x8c;
  iStack_44 = 0;
  uStack_4c = 0;
  while (iStack_50 = iVar3, piStack_48 == (int *)0x0) {
    uStack_4c = uStack_4c + 1;
    if (0x1e < uStack_4c) goto joined_r0x8302d0ec;
    piStack_48 = *(int **)(uStack_4c * 4 + iVar3);
  }
  do {
    piVar1 = piStack_48;
    piVar2 = (int *)fn_82FFE000(auStack_40,iVar3,&iStack_50);
    iStack_50 = *piVar2;
    uStack_4c = piVar2[1];
    piStack_48 = (int *)piVar2[2];
    iStack_44 = piVar2[3];
    (**(int (***)())(*piVar1 + 4))(piVar1);
joined_r0x8302d0ec:;} while (piStack_48 != (int *)0x0);
  if (*(int **)(param_1 + 0x10c) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x10c) + 4))();
    *(unsigned int *)(param_1 + 0x10c) = 0;
  }
  return;
}

