extern int fn_82E25E88();
extern unsigned int lbl_8208E054;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int fn_82E25F80(unsigned int *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  char cVar3;
  char cVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned char *pbVar7;
  char *pcVar8;
  char *pcVar9;
  char acStack_2c [12];
  char acStack_20 [16];
  
  puVar5 = param_1 + 1;
  pbVar7 = (unsigned char *)&lbl_8208E054;
  do {
    bVar1 = *(unsigned char *)puVar5;
    bVar2 = *pbVar7;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    puVar5 = (unsigned int *)((int)puVar5 + 1);
    pbVar7 = pbVar7 + 1;
  } while (puVar5 != param_1 + 4);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    uVar6 = *param_1;
  }
  else {
    puVar5 = (unsigned int *)fn_82E25E88(acStack_20);
    pcVar9 = acStack_2c;
    pcVar8 = "";
    do {
      cVar3 = *pcVar9;
      cVar4 = *pcVar8;
      if (cVar3 != cVar4) break;
      pcVar9 = pcVar9 + 1;
      pcVar8 = pcVar8 + 1;
    } while (pcVar9 != acStack_20);
    uVar6 = -(unsigned int)(cVar3 == cVar4) & *puVar5;
  }
  return uVar6;
}

