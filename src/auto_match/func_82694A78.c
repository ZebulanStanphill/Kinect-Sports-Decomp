typedef unsigned char bool;
extern unsigned int *auStack_2c;
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_8268C9F8();
extern int fn_82694610();
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


int * fn_82694A78(int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char bVar8;
  unsigned int uStack_30;
  unsigned int auStack_2c [11];
  
  uVar3 = fn_8268C510(auStack_2c,*(unsigned int *)*param_2);
  fn_8268C9F8(&uStack_30,uVar3);
  lVar5 = ((unsigned __int64)auStack_2c[0] & 0xfffffffc) + 4;
  do {
    puVar6 = (unsigned int *)lVar5;
    uVar7 = (unsigned __int64)*puVar6;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar5);
      *puVar6 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  bVar8 = (uVar7 == 1) << 1;
  if (uVar7 == 1) {
    fn_8267BE38();
  }
  iVar4 = fn_82694610(*(unsigned int *)(*param_2 & 0xfffffc00),
                        ((unsigned __int64)uStack_30 & 0xfffffffc) + 8,
                        *(unsigned int *)(uStack_30 & 0xfffffffc) & 0x7fffffff);
  iVar1 = *(int *)(iVar4 + 8);
  *param_1 = iVar4;
  *(int *)(iVar4 + 8) = iVar1 + 1;
  lVar5 = ((unsigned __int64)uStack_30 & 0xfffffffc) + 4;
  do {
    puVar6 = (unsigned int *)lVar5;
    uVar7 = (unsigned __int64)*puVar6;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar5);
      *puVar6 = uVar2;
      bVar8 = 2;
    }
  } while (!(bool)(bVar8 >> 1 & 1));
  if (uVar7 == 1) {
    fn_8267BE38();
  }
  return param_1;
}

