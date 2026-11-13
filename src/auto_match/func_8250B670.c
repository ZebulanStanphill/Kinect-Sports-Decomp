#define true 1
extern unsigned int uStack_24;


void fn_8250B670(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned int uStack_24;
  float afStack_20 [8];
  int iVar3;
  
  iVar1 = param_1;
  if (param_1 != param_2) {
    while (iVar3 = iVar1 + 0x14, iVar3 != param_2) {
      puVar4 = &uStack_24;
      puVar5 = (unsigned int *)(iVar1 + 0x10);
      lVar6 = 5;
      do {
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar5;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      iVar1 = iVar3;
      if (*(float *)(param_1 + 8) <= afStack_20[2]) {
        while( true ) {
          iVar2 = iVar3 + -0x14;
          puVar5 = (unsigned int *)(iVar3 + -4);
          lVar6 = 5;
          if (*(float *)(iVar3 + -0xc) <= afStack_20[2]) break;
          puVar4 = (unsigned int *)(iVar3 + -0x18);
          do {
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
            *puVar5 = *puVar4;
            lVar6 = lVar6 + -1;
            iVar3 = iVar2;
          } while (lVar6 != 0);
        }
        puVar4 = &uStack_24;
        do {
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
          *puVar5 = *puVar4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      else {
        while (param_1 != iVar3) {
          iVar2 = iVar3 + -0x14;
          puVar4 = (unsigned int *)(iVar3 + -4);
          puVar5 = (unsigned int *)(iVar3 + -0x18);
          lVar6 = 5;
          do {
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
            *puVar4 = *puVar5;
            lVar6 = lVar6 + -1;
            iVar3 = iVar2;
          } while (lVar6 != 0);
        }
        puVar5 = &uStack_24;
        puVar4 = (unsigned int *)(param_1 + -4);
        lVar6 = 5;
        do {
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar5;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    return;
  }
  return;
}

