extern int fn_8254A748();


unsigned __int64 fn_8254A648(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar1 = fn_8254A748((double)((param_2 & 0xffffffff) >> 0x18),
                       (double)((param_3 & 0xffffffff) >> 0x18),param_1);
  uVar2 = fn_8254A748((double)((param_2 & 0xffffffff) >> 0x10 & 0xff),
                       (double)((param_3 & 0xffffffff) >> 0x10 & 0xff));
  uVar3 = fn_8254A748((double)((param_2 & 0xffffffff) >> 8 & 0xff),
                       (double)((param_3 & 0xffffffff) >> 8 & 0xff));
  uVar4 = fn_8254A748((double)(param_2 & 0xff),(double)(param_3 & 0xff));
  return (((uVar1 & 0xff) << 8 | uVar2 & 0xff) << 8 | uVar3 & 0xff) << 8 |
         uVar4 & 0xffffffff000000ff;
}

