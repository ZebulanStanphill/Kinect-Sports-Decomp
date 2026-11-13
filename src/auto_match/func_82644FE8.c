typedef unsigned char bool;
#define true 1
extern int fn_82643B08();
extern int fn_82643C30();
extern int fn_82644040();
extern int fn_82644568();
extern int fn_82F68CC0();


void fn_82644FE8(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  bool bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  if (*(int *)(param_1 + 0x3460) == 0) {
    if (*(int *)(param_1 + 0x2b04) != 0) {
      lVar5 = fn_82644040(param_1,(param_3 & 0x7fffffff) * 2 + 2,4);
      lVar4 = (param_3 & 0x1fffffff) * 8;
      fn_82F68CC0(lVar5 + 4,param_2,lVar4);
      lVar4 = lVar4 + lVar5;
      *(unsigned int *)((int)lVar4 + 4) = 0xc0000000;
      uVar2 = KfAcquireSpinLock(param_1 + 0x2b08);
      bVar1 = *(int *)(param_1 + 0x2b04) != 0;
      if (bVar1) {
        fn_82643C30(param_1 + 0x3500,lVar5,lVar4 + 8);
      }
      KfReleaseSpinLock(param_1 + 0x2b08,uVar2);
      if (bVar1) {
        return;
      }
    }
    fn_82644568(param_1,param_2,param_3);
  }
  else {
    uVar6 = (param_3 & 0x7fffffff) << 1;
    while( true ) {
      uVar3 = (unsigned __int64)(unsigned int)(*(int *)(param_1 + 0x3510) - *(int *)(param_1 + 0x350c) >> 2) &
              0xfffffffe;
      if ((uVar6 & 0xffffffff) < uVar3) {
        uVar3 = uVar6;
      }
      lVar5 = (uVar3 & 0x3fffffff) * 4;
      fn_82F68CC0(*(int *)(param_1 + 0x350c),param_2,lVar5);
      uVar6 = uVar6 - uVar3;
      param_2 = lVar5 + param_2;
      *(int *)(param_1 + 0x350c) = (int)lVar5 + *(int *)(param_1 + 0x350c);
      if (uVar6 == 0) break;
      fn_82643B08(param_1 + 0x3500);
    }
  }
  return;
}

