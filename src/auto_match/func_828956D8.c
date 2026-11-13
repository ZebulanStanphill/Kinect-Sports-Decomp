typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8288BB90();
extern int fn_828946C0();
extern int fn_828B5580();


void fn_828956D8(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  
  uVar1 = param_1[1];
  if ((uVar1 <= param_2) || (bVar3 = true, param_2 < *param_1)) {
    bVar3 = false;
  }
  if (bVar3) {
    uVar2 = *param_1;
    if (uVar1 == param_1[2]) {
      fn_828946C0(param_1,1);
    }
    param_2 = ((int)(param_2 - uVar2) >> 5) * 0x20 + *param_1;
  }
  else if (uVar1 == param_1[2]) {
    fn_828946C0(param_1,1);
  }
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    fn_828B5580(uVar1,param_2);
    *(unsigned int *)(uVar1 + 8) = *(unsigned int *)(param_2 + 8);
    fn_8288BB90(uVar1 + 0xc,param_2 + 0xc);
    *(unsigned int *)(uVar1 + 0x1c) = *(unsigned int *)(param_2 + 0x1c);
  }
  param_1[1] = param_1[1] + 0x20;
  return;
}

