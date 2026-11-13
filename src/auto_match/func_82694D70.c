typedef unsigned char bool;
extern unsigned int *auStack_2c;
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_8268CAB0();
extern int fn_82694610();
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82694D70(unsigned int *param_1)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  char *pcVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  char *pcVar10;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char bVar11;
  unsigned int uStack_30;
  unsigned int auStack_2c [11];
  
  uVar4 = fn_8268C510(auStack_2c,*param_1);
  fn_8268CAB0(&uStack_30,uVar4);
  lVar7 = ((unsigned __int64)auStack_2c[0] & 0xfffffffc) + 4;
  do {
    puVar8 = (unsigned int *)lVar7;
    uVar9 = (unsigned __int64)*puVar8;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(uVar9 - 1,0,lVar7);
      *puVar8 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar9 == 1) {
    fn_8267BE38();
  }
  pcVar6 = (char *)((uStack_30 & 0xfffffffc) + 8);
  bVar11 = (pcVar6 == (char *)0x0) << 1;
  iVar2 = *(int *)((unsigned int)param_1 & 0xfffffc00);
  pcVar10 = pcVar6;
  if (pcVar6 == (char *)0x0) {
    puVar5 = *(unsigned int **)(iVar2 + 0x18);
  }
  else {
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    puVar5 = (unsigned int *)fn_82694610(iVar2,pcVar6,pcVar10 + (-1 - (int)pcVar6));
  }
  if ((puVar5 != *(unsigned int **)(iVar2 + 0x18)) && (param_1[1] = puVar5, puVar5 != param_1)) {
    puVar5[2] = puVar5[2] + 1;
  }
  lVar7 = ((unsigned __int64)uStack_30 & 0xfffffffc) + 4;
  do {
    puVar8 = (unsigned int *)lVar7;
    uVar9 = (unsigned __int64)*puVar8;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(uVar9 - 1,0,lVar7);
      *puVar8 = uVar3;
      bVar11 = 2;
    }
  } while (!(bool)(bVar11 >> 1 & 1));
  if (uVar9 == 1) {
    fn_8267BE38();
  }
  return;
}

