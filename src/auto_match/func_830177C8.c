#define true 1

/* WARNING: Inlined function: __savegprlr_26 */

double fn_830177C8(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  char cVar3;
  float *pfVar2;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned char auStack_50 [4];
  float afStack_4c [5];
  
  RtlEnterCriticalSection(param_1 + 0x720);
  puVar1 = *(unsigned int **)(param_1 + 0x6a0);
  dVar6 = 0.0;
  do {
    dVar7 = dVar6;
    if (puVar1 == (unsigned int *)0x0) {
__restgprlr_26:
      RtlLeaveCriticalSection(param_1 + 0x720);
      return dVar7;
    }
    if ((puVar1[1] == param_2) && (puVar1[2] == param_3)) {
      iVar4 = puVar1[5];
      if (iVar4 != puVar1[6]) {
        do {
          cVar3 = fn_83017108(param_1,*(unsigned int *)(iVar4 + 4),param_4,afStack_4c,auStack_50);
          if (cVar3 == '\0') {
            pfVar2 = (float *)fn_82FFE0F0(param_1 + 0x61c,*(unsigned int *)(iVar4 + 4));
            dVar5 = dVar6;
            if (pfVar2 != (float *)0x0) {
              dVar5 = (double)*pfVar2;
            }
            afStack_4c[0] = (float)dVar5;
          }
          dVar5 = (double)fn_83015B10((double)afStack_4c[0],iVar4 + 8);
          iVar4 = iVar4 + 0x14;
          dVar7 = (double)(float)(dVar5 + dVar7);
        } while (iVar4 != puVar1[6]);
      }
      goto __restgprlr_26;
    }
    puVar1 = (unsigned int *)*puVar1;
  } while( true );
}
