typedef unsigned char bool;
#define true 1
#define false 0


bool fn_828EA840(int param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    bVar1 = *(char *)(param_1 + 0x89) != '\0';
  }
  else {
    if ((*(char *)(param_1 + 0x74) != '\0') || (bVar1 = true, *(char *)(param_1 + 0xd8) != '\0')) {
      bVar1 = false;
    }
    if ((!bVar1) || (bVar1 = true, *(char *)(param_1 + 0x59) != '\0')) {
      return false;
    }
  }
  return bVar1;
}

