#define true 1
extern int fn_8265B6B0();
extern int fn_8265BB90();
extern unsigned int lbl_8200133C;


double fn_8265BC60(char *param_1)

{
  char cVar1;
  char cVar2;
  unsigned int *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  __int64 lVar7;
  double dVar8;
  
  lVar7 = 0;
  do {
    puVar3 = (unsigned int *)fn_8265B6B0(lVar7);
    pcVar6 = (char *)*puVar3;
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      iVar4 = fn_8265B6B0(lVar7);
      if (*(float *)(iVar4 + 4) == lbl_8200133C) {
        dVar8 = (double)fn_8265BB90();
        return dVar8;
      }
      iVar4 = fn_8265B6B0(lVar7);
      return (double)*(float *)(iVar4 + 4);
    }
    lVar7 = lVar7 + 1;
    if (0x79 < (int)lVar7) {
      return (double)lbl_8200133C;
    }
  } while( true );
}

