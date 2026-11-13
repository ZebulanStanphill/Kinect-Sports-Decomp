#define true 1
extern unsigned int lbl_832643F4;
extern unsigned int lbl_832643F8;
extern unsigned int lbl_83264400;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_82FECAA8(int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = lbl_832643F4;
  do {
    puVar1 = lbl_83264400;
    if (piVar3 == lbl_832643F8) {
      while( true ) {
        if (puVar1 == (unsigned int *)0x0) {
          return (unsigned int *)0x0;
        }
        if (puVar1[5] == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(puVar1[5] + 0xfc) + 8);
        }
        if (iVar4 == *param_1) break;
        puVar1 = (unsigned int *)*puVar1;
      }
      return puVar1;
    }
    puVar1 = (unsigned int *)*piVar3;
    for (puVar2 = (unsigned int *)*puVar1; puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)*puVar2
        ) {
      if (puVar2[5] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(puVar2[5] + 0xfc) + 8);
      }
      if (iVar4 == *param_1) {
        param_1[4] = (int)puVar2;
        param_1[3] = (int)puVar1;
        return puVar2;
      }
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

