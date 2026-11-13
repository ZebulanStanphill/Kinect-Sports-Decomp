typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82A42E20();
extern int fn_82A50190();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82A51730(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  bool bVar3;
  bool bVar4;
  int iVar7;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar8;
  char in_RESERVE;
  
  iVar7 = fn_82A50190();
  bVar3 = iVar7 == 0;
  if (!bVar3) {
    puVar8 = (unsigned int *)param_1[0x1e];
    if (ZEXT48(puVar8) != 0) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar8 - 1,0,ZEXT48(puVar8));
        *puVar8 = uVar2;
      }
      param_1[0x1e] = 0;
    }
  }
  iVar7 = param_1[0x10];
  iVar1 = param_1[0xf];
  uVar2 = param_1[0xc];
  uVar5 = (**(int (***)())(*param_1 + 0x6c))(param_1);
  lVar6 = fn_82A42E20((unsigned __int64)uVar2 + 0x250,bVar3,iVar1,uVar5,iVar7);
  puVar8 = (unsigned int *)lVar6;
  param_1[0x1e] = (int)puVar8;
  if (lVar6 == 0) {
    uVar5 = 0xffffffff8007000e;
  }
  else {
    uVar5 = 0;
    bVar4 = false;
    while (!bVar3) {
      bVar3 = bVar4;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar8 + 1,0,lVar6);
        *puVar8 = uVar2;
        bVar4 = true;
        bVar3 = bVar4;
      }
    }
  }
  return uVar5;
}

