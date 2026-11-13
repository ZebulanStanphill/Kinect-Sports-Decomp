typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8268F7F8();


unsigned __int64 fn_8268F848(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  
  uVar3 = fn_8268F7F8();
  if ((uVar3 & 0xffffffff) != 0) {
    uVar1 = *(unsigned int *)((int)uVar3 * 0xc + param_1 + 0x10);
    if ((param_2 < uVar1) || (bVar2 = true, *(int *)(param_1 + 0x10) + uVar1 <= param_2)) {
      bVar2 = false;
    }
    if (bVar2) {
      return uVar3 - 1;
    }
  }
  if ((uVar3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x19c)) {
    uVar1 = *(unsigned int *)((int)uVar3 * 0xc + param_1 + 0x1c);
    if ((param_2 < uVar1) || (bVar2 = true, *(int *)(param_1 + 0x10) + uVar1 <= param_2)) {
      bVar2 = false;
    }
    if (bVar2) {
      return uVar3;
    }
  }
  return (unsigned __int64)*(unsigned int *)(param_1 + 0x19c);
}

