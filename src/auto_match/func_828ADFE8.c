typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_828ADCE8();


unsigned __int64
fn_828ADFE8(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  bool bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int in_stack_0000007c;
  
  if (((param_4 & 0xffffffff) == 0) ||
     (bVar1 = true, (param_5 & 0xffffffff) < (param_4 & 0xffffffff))) {
    bVar1 = false;
  }
  if ((!bVar1) || (bVar1 = true, *(char *)(in_stack_0000007c + 4) != '\x01')) {
    bVar1 = false;
  }
  if ((!bVar1) || (bVar1 = true, (param_3 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(*param_2 + 0x78))) {
    bVar1 = false;
  }
  if ((!bVar1) ||
     (bVar1 = true, *(unsigned int *)(param_1 + 0x28) != (unsigned int)*(unsigned char *)(*(int *)(*param_2 + 0x70) + 0x78)))
  {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = (unsigned __int64)*param_2;
    uVar2 = fn_828ADCE8(param_1,param_3,param_4,param_5,param_6,uVar3 + 0x14,uVar3 + 0x40,
                          uVar3 + 0x1c);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

