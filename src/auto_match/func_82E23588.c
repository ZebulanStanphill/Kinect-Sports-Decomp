extern unsigned int __imp__ExEventObjectType;


unsigned __int64 fn_82E23588(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  int iVar1;
  int in_r13;
  
  param_1[3] = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_2 = 0x3e5;
  param_2[6] = 0;
  param_2[1] = 0;
  if (param_2[4] == 0) {
    if (param_2[3] != 0) {
      iVar1 = ObReferenceObjectByHandle(param_2[3],__imp__ExEventObjectType,param_1 + 2);
      if (iVar1 < 0) {
        return 6;
      }
      *(unsigned int *)(param_1[2] + 4) = 0;
    }
  }
  else {
    iVar1 = ExAllocatePoolWithTag(0x28,0x70617350);
    param_1[1] = iVar1;
    if (iVar1 == 0) {
      return 8;
    }
    ObReferenceObject(*(unsigned int *)(in_r13 + 0x100));
    KeInitializeApc(param_1[1],*(unsigned int *)(in_r13 + 0x100),0xffffffff82e23528,0xffffffff82e23528
                    ,0xffffffff82e23560,1,param_2);
  }
  *param_1 = param_2;
  return 0;
}

