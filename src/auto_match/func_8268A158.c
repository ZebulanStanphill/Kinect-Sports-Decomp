typedef unsigned char bool;
extern int fn_8267BE38();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8268A158(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char bVar5;
  
  lVar3 = ((unsigned __int64)param_1[1] & 0xfffffffc) + 4;
  do {
    puVar4 = (unsigned int *)lVar3;
    uVar2 = (unsigned __int64)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar2 - 1,0,lVar3);
      *puVar4 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  bVar5 = (uVar2 == 1) << 1;
  if (uVar2 == 1) {
    fn_8267BE38();
  }
  lVar3 = ((unsigned __int64)*param_1 & 0xfffffffc) + 4;
  do {
    puVar4 = (unsigned int *)lVar3;
    uVar2 = (unsigned __int64)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar2 - 1,0,lVar3);
      *puVar4 = uVar1;
      bVar5 = 2;
    }
  } while (!(bool)(bVar5 >> 1 & 1));
  if (uVar2 == 1) {
    fn_8267BE38();
  }
  return;
}

