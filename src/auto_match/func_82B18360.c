#define true 1
extern int fn_82AD20C0();
extern int fn_82B41D68();


void fn_82B18360(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar1 = *(unsigned int *)(param_2 + 0x14);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      return;
    }
    if (((*(unsigned int *)(uVar1 + 8) & 0x3f80) == 0x3800) &&
       (uVar3 = fn_82B41D68(param_1,uVar1,param_3,0,1), uVar3 != 0)) {
      for (iVar2 = *(int *)(param_2 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
        uVar5 = (unsigned __int64)*(unsigned int *)(iVar2 + 4);
        if ((uVar5 != (param_3 & 0xffffffff)) &&
           (uVar4 = fn_82B41D68(param_1,uVar1,uVar5,0,1),
           (uVar3 & 0xffffffff) == (uVar4 & 0xffffffff))) {
          if (uVar5 != 0) goto LAB_82b18418;
          break;
        }
      }
      fn_82AD20C0(uVar1,uVar3,param_1);
    }
LAB_82b18418:
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28);
  } while( true );
}

