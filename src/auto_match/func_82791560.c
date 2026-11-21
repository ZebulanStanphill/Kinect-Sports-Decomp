typedef unsigned char bool;
#define true 1
#define false 0

void fn_82791560(unsigned int *param_1)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  bool bVar3;
  
  puVar2 = (unsigned short *)param_1[1];
  *param_1 = puVar2;
  if ((*(char *)(param_1 + 4) == '\0') || (bVar3 = true, *puVar2 != 0x26)) {
    bVar3 = false;
  }
  if (bVar3) {
    fn_82790A58();
    return;
  }
  if ((unsigned short *)param_1[2] <= puVar2) {
    return;
  }
  uVar1 = *puVar2;
  param_1[1] = puVar2 + 1;
  param_1[3] = (unsigned int)uVar1;
  return;
}
