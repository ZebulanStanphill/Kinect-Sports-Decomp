typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AD7788();
extern int fn_82B19000();


void fn_82AD7A50(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6c) + 1;
  *(int *)(param_1 + 0x6c) = (int)uVar6;
  *(int *)(param_2 + 0x2c) = (int)uVar6;
  fn_82B19000(param_1,uVar6,0);
  for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
    if (((unsigned __int64)*(unsigned int *)(uVar1 + 0x2c) == (uVar6 & 0xffffffff)) &&
       ((*(unsigned int *)(uVar1 + 0x24) & 1) == 0)) {
      uVar2 = *(unsigned int *)(uVar1 + 0x20) & 0xfffffffe;
      iVar5 = uVar2 - 0x28;
      if (iVar5 != 0) {
        uVar2 = *(unsigned int *)(uVar2 - 0x20);
        uVar4 = uVar2 >> 7 & 0x7f;
        if ((uVar4 < 0x53) || (bVar3 = true, 0x5f < uVar4)) {
          bVar3 = false;
        }
        if ((bVar3) && ((uVar2 >> 0x1b & 1) == 0)) {
          fn_82AD7788(param_1,iVar5,param_3);
        }
      }
    }
  }
  return;
}

