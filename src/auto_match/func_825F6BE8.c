extern int fn_825A27B8();
extern int fn_825D30C8();
extern int fn_825F6B28();


unsigned __int64
fn_825F6BE8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned int param_6)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  __int64 lVar5;
  
  lVar1 = fn_825A27B8();
  if (((lVar1 == 0) || (param_6 = *(unsigned int *)(param_2 + 0x8ac) & param_6, param_6 == 0)) ||
     (iVar3 = fn_825F6B28(param_1,param_2,param_3,param_4), iVar3 != 0)) {
    uVar2 = 0;
  }
  else {
    lVar5 = (unsigned __int64)*(unsigned int *)(param_2 + 0x8c0) + 0x144;
    if ((unsigned __int64)*(unsigned int *)(param_2 + 0x8c0) == 0) {
      lVar5 = 0;
    }
    if ((*(int *)(param_2 + 0x4c) == 0) || (*(int *)(param_2 + 0x8c0) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(unsigned int *)
               ((*(int *)(*(int *)(param_2 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_2 + 0x8c0));
    }
    uVar2 = fn_825D30C8(param_1,lVar1,param_2 + 0xf0,param_2 + 0x130,uVar4,param_3,param_4,lVar5
                            ,param_6);
  }
  return uVar2;
}

