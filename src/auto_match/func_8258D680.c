extern int fn_82230300();
extern int fn_822315A0();
extern int fn_824CD420();
extern int fn_8265CA20();
extern int fn_82BE3DD0();


/* WARNING: Removing unreachable block (ram,0x8258d704) */
/* WARNING: Removing unreachable block (ram,0x8258d708) */
/* WARNING: Removing unreachable block (ram,0x8258d71c) */
/* WARNING: Removing unreachable block (ram,0x8258d734) */
/* WARNING: Removing unreachable block (ram,0x8258d748) */
/* WARNING: Removing unreachable block (ram,0x8258d74c) */

void fn_8258D680(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  unsigned int *puVar4;
  int *piVar5;
  int *piVar6;
  
  if ((*(int *)(param_1 + 0x1a0) != 0) && (*(int *)(param_1 + 500) != 0)) {
    puVar4 = (unsigned int *)(param_1 + 400);
    if (0xf < *(unsigned int *)(param_1 + 0x1a4)) {
      puVar4 = (unsigned int *)*puVar4;
    }
    fn_82BE3DD0(puVar4);
  }
  puVar4 = (unsigned int *)(param_1 + 400);
  *(unsigned int *)(param_1 + 0x1a0) = 0;
  if (0xf < *(unsigned int *)(param_1 + 0x1a4)) {
    puVar4 = (unsigned int *)*puVar4;
  }
  *(unsigned char *)puVar4 = 0;
  piVar2 = *(int **)(param_1 + 0x1d0);
  if (piVar2 != *(int **)(param_1 + 0x1d4)) {
    piVar3 = *(int **)(param_1 + 0x1d4);
    if (piVar2 != piVar3) {
      piVar6 = piVar2 + 1;
      do {
        if (*piVar6 != 0) {
          fn_822315A0();
        }
        piVar5 = piVar6 + 1;
        piVar6 = piVar6 + 2;
      } while (piVar5 != piVar3);
    }
    *(int **)(param_1 + 0x1d4) = piVar2;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x1e4) + 4);
  cVar1 = *(char *)((int)piVar2 + 0x31);
  while (cVar1 == '\0') {
    fn_824CD420(param_1 + 0x1e0,piVar2[2]);
    piVar3 = (int *)*piVar2;
    fn_82230300(piVar2 + 3,1,0);
    fn_8265CA20(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x31);
  }
  *(int *)(*(int *)(param_1 + 0x1e4) + 4) = *(int *)(param_1 + 0x1e4);
  *(unsigned int *)*(unsigned int *)(param_1 + 0x1e4) = *(unsigned int *)(param_1 + 0x1e4);
  *(int *)(*(int *)(param_1 + 0x1e4) + 8) = *(int *)(param_1 + 0x1e4);
  *(unsigned int *)(param_1 + 0x1e8) = 0;
  *(unsigned int *)(param_1 + 0xffc) = 0;
  *(unsigned int *)(param_1 + 0x368) = 0;
  *(unsigned int *)(param_1 + 0x36c) = 0;
  return;
}

