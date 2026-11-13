#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int uRam8323b6bc;
extern unsigned int uRam8323b6c0;
extern unsigned int uRam8323b6c4;


void fn_82D1FCD8(unsigned __int64 *param_1,int param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = *(unsigned int **)(param_2 + 0x2c);
  do {
    if (puVar1 == (unsigned int *)0x0) {
      uVar4 = uRam8323b6c4 & 1;
      if ((uRam8323b6c4 & 1) == 0) {
        uRam8323b6c4 = uRam8323b6c4 | 1;
        uRam8323b6c0 = 0;
        uRam8323b6bc = uVar4;
      }
      *param_1 = CONCAT44(uRam8323b6bc,uRam8323b6c0);
      return;
    }
    iVar6 = 8;
    piVar5 = puVar1 + 2;
    iVar2 = 0;
    iVar3 = 2;
    do {
      iVar7 = iVar2;
      if ((*(int *)(iVar6 + 8 + (int)puVar1) == param_3) && (*piVar5 == param_4)) {
        *(unsigned int **)param_1 = puVar1;
        *(int *)((int)param_1 + 4) = iVar3;
        return;
      }
      iVar6 = iVar7 << 2;
      piVar5 = piVar5 + 1;
      iVar2 = iVar7 + 1;
      iVar3 = iVar7;
    } while (iVar7 + 1 < 3);
    puVar1 = (unsigned int *)*puVar1;
  } while( true );
}

