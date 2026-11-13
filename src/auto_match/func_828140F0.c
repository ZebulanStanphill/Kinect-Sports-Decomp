typedef unsigned char bool;
extern unsigned int *auStack_20;
extern int fn_82813680();
extern int fn_82813AE0();
extern int fn_82813C48();
extern int fn_82A1E658();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_828140F0(__int64 param_1)

{
  unsigned int uVar1;
  int iVar2;
  char cVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char bVar6;
  unsigned char auStack_20 [1];
  
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x30) == '\0') {
    *(unsigned char *)(iVar2 + 0x30) = 1;
    sync(0);
  }
  do {
    cVar3 = fn_82813AE0(param_1,auStack_20);
    bVar6 = (cVar3 == '\0') << 1;
  } while (cVar3 != '\0');
  lVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x20) + 0xc;
  do {
    puVar5 = (unsigned int *)lVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar5 + 1,0,lVar4);
      *puVar5 = uVar1;
      bVar6 = 2;
    }
  } while (!(bool)(bVar6 >> 1));
  fn_82813680(param_1);
  if (*(int *)(iVar2 + 0x38) != 0) {
    fn_82A1E658();
  }
  do {
    puVar5 = (unsigned int *)(param_1 + 0x2c);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar5 + 1,0,param_1 + 0x2c);
      *puVar5 = uVar1;
      bVar6 = 2;
    }
  } while (!(bool)(bVar6 >> 1 & 1));
  do {
    puVar5 = (unsigned int *)(param_1 + 0x24);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar5 + 1,0,param_1 + 0x24);
      *puVar5 = uVar1;
      bVar6 = 2;
    }
  } while (!(bool)(bVar6 >> 1 & 1));
  fn_82813C48(param_1);
  return;
}

