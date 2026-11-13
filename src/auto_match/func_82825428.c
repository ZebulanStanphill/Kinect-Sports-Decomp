#define true 1
extern int fn_8265CA20();
extern int fn_828150C8();
extern int fn_82822368();
extern int fn_828223C8();
extern int fn_828253D0();
extern int fn_82825ED8();
extern int fn_82826050();
extern int fn_828260B8();
extern int fn_828282D8();
extern int fn_82829B70();
extern int fn_828351A0();
extern int fn_8286D2C8();
extern int free();


void fn_82825428(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  int aiStack_30;
  
  while( true ) {
    fn_828223C8(param_1 + 0x2fc,&aiStack_30);
    if (aiStack_30 == 0) break;
    fn_82822368();
    fn_82829B70(aiStack_30);
    fn_828282D8(aiStack_30);
    if (aiStack_30 != 0) {
      free();
    }
  }
  while( true ) {
    fn_828223C8(param_1 + 0x2f4,&aiStack_30);
    if (aiStack_30 == 0) break;
    fn_82822368();
    if (*(int *)(aiStack_30 + 0x28) != 0) {
      fn_82826050(*(int *)(aiStack_30 + 0x28),1);
    }
    if (*(int *)(aiStack_30 + 8) != 0) {
      free();
    }
    if (aiStack_30 != 0) {
      free(aiStack_30);
    }
  }
  if (*(int *)(param_1 + 0x304) != 0) {
    fn_828260B8(*(int *)(param_1 + 0x304),1);
  }
  if (*(int *)(param_1 + 0x2f0) != 0) {
    fn_828351A0(*(int *)(param_1 + 0x2f0),1);
  }
  puVar1 = *(unsigned int **)(param_1 + 0x2ec);
  if (puVar1 != (unsigned int *)0x0) {
    fn_8286D2C8(puVar1);
    fn_8265CA20(*puVar1);
    fn_8265CA20(puVar1);
  }
  if (*(int *)(param_1 + 0x3c4) != 0) {
    free();
  }
  piVar2 = *(int **)(param_1 + 0x3bc);
  uVar3 = 0;
  if (piVar2[1] - *piVar2 >> 2 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(*piVar2 + iVar4) != 0) {
        free();
      }
      piVar2 = *(int **)(param_1 + 0x3bc);
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < (unsigned int)(piVar2[1] - *piVar2 >> 2));
  }
  if (piVar2 != (int *)0x0) {
    fn_82825ED8(piVar2,1);
  }
  iVar4 = *(int *)(param_1 + 0x388);
  if (iVar4 != 0) {
    fn_828150C8(iVar4);
    fn_8265CA20(iVar4);
  }
  fn_828253D0(param_1);
  if (*(int *)(param_1 + 0x2e4) != 0) {
    free();
  }
  free(param_1);
  return;
}

