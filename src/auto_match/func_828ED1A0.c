typedef unsigned char bool;
#define true 1
#define false 0


bool fn_828ED1A0(int param_1)

{
  unsigned int uVar1;
  
  switch (*(unsigned int *)(param_1 + 8)) {
  case 0: return false;
  case 1: case 3: case 5: return true;
  case 2: case 4: default: break;
  }
  if ((((*(int *)(param_1 + 0x1ac) != 1) && (*(unsigned char *)(param_1 + 0x128) == 0)) &&
      (*(int *)(param_1 + 0x188) != 1)) && (*(int *)(param_1 + 0x188) != 3)) {
    return *(unsigned char *)(param_1 + 0x164) != 0;
  }
  return true;
}
