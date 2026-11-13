extern int fn_82AA64F8();
extern int fn_82ABE5F8();
extern int fn_82AE60E8();
extern int fn_82F68CC0();
extern unsigned int stack0x00000020;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B4B498(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    *(unsigned int *)(param_1 + 0x24) = 1;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x24);
  *(unsigned int *)(param_1 + 0x24) = uVar1 + 1;
  *(unsigned int *)(param_1 + 0x20) = uVar1;
  if ((uVar1 <= uVar1 + 1) && (uVar1 < 0x7ffff)) {
    if (*(int *)(param_1 + 0x2e8) == 0) {
      return;
    }
    if (*(unsigned int **)(param_1 + 0x2f4) == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)fn_82AE60E8(param_1,0x28,0);
      *(unsigned int **)(param_1 + 0x2f4) = puVar2;
      *puVar2 = 10;
    }
    else {
      uVar1 = **(unsigned int **)(param_1 + 0x2f4);
      if (uVar1 <= *(int *)(param_1 + 0x20) + 1U) {
        piVar3 = (int *)fn_82AE60E8(param_1,uVar1 << 3,0);
        fn_82F68CC0(piVar3,*(unsigned int *)(param_1 + 0x2f4),uVar1 << 2);
        *piVar3 = uVar1 << 1;
        fn_82ABE5F8(param_1,*(unsigned int *)(param_1 + 0x2f4),uVar1 << 2,0);
        *(int **)(param_1 + 0x2f4) = piVar3;
      }
    }
    *(unsigned int *)(*(int *)(param_1 + 0x20) * 4 + *(int *)(param_1 + 0x2f4)) =
         *(unsigned int *)(param_1 + 0x2f0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA64F8(param_1,0xdc9,&stack0x00000020);
}

