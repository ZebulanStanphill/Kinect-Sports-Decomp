extern int fn_82643A48();
extern int fn_82F68CC0();
extern int fn_82F691F0();


unsigned __int64 fn_8264F830(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  uVar1 = param_2 & 0xfffffffc;
  uVar2 = param_2 - uVar1 & 0x3fffffff;
  lVar5 = ((param_2 + param_4 + 3 & 0xfffffffc) - uVar1 & 0x3fffffff) * 4;
  uVar4 = lVar5 + (param_4 & 0x3fffffff) * -4 + uVar2 * -4;
  uVar3 = fn_82643A48(param_1,lVar5 + 1);
  if ((uVar3 & 0xffffffff) != 0) {
    *(unsigned int *)(uVar3 + 4) =
         (unsigned int)((uVar1 + 0x1000 & 0xffffffff) << 2) | (unsigned int)((lVar5 - 1U & 0xffffffff) << 0x10);
    if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3 + 8,0,(uVar2 * 4 & 0x3fffffff) << 2);
    }
    lVar5 = (param_4 & 0xfffffff) * 0x10;
    fn_82F68CC0(uVar3 + 8,param_3,lVar5);
    lVar5 = lVar5 + uVar3 + 4;
    if ((uVar4 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar5 + 4,0,(uVar4 & 0x3fffffff) << 2);
    }
    *(int *)(param_1 + 0x30) = (int)lVar5;
    uVar3 = 1;
  }
  return uVar3;
}

