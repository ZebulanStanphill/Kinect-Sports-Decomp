typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABDD90();
extern int fn_82AD2020();
extern int fn_82B18218();
extern int fn_82B18F40();
extern int fn_82B44B88();


void fn_82B1F310(int param_1,int param_2,char *param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  if ((*(unsigned int *)(param_1 + 0x28) & 0x400) != 0) {
    if (*param_3 != '\0') {
      fn_82B44B88();
      *param_3 = '\0';
    }
    for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
      if ((((param_2 != 0) && (*(int *)(uVar1 + 0x2c) == param_2)) ||
          ((param_4 != 0 &&
           (uVar3 = (unsigned __int64)*(unsigned int *)(param_4 + 0x30) & 0x7ffff,
           (*(unsigned int *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(uVar1 + 0x28)) &
           1 << ((unsigned int)uVar3 & 0x1f)) != 0)))) && (iVar5 = fn_82AD2020(param_1,uVar1), iVar5 != 0))
      {
        uVar2 = *(unsigned int *)(iVar5 + 8) >> 7 & 0x7f;
        if ((uVar2 == 0x56) || (bVar4 = false, uVar2 == 0x57)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar2 = *(unsigned int *)(iVar5 + 8);
          iVar6 = fn_82ABDD90(param_1,uVar2 >> 7 & 0x7f,uVar2 >> 0x13 & 7,uVar2 >> 0xe & 7);
          iVar5 = *(int *)(iVar6 + iVar5 + -0x10);
          *(unsigned int *)(iVar5 + 0x30) = *(unsigned int *)(iVar5 + 0x30) | 0x40000000;
        }
      }
    }
    fn_82B18F40(param_1,1);
    for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
      uVar2 = *(unsigned int *)(uVar1 + 0x30);
      if (((uVar2 >> 0x1e & 1) != 0) &&
         (*(unsigned int *)(uVar1 + 0x30) = uVar2 & 0xbfffffff,
         (((unsigned __int64)uVar2 & 0xbfffffff) >> 0x13 & 1) != 0)) {
        fn_82B18218(param_1,uVar1,param_3);
      }
    }
  }
  return;
}

