typedef unsigned char bool;
#define true 1
#define false 0


char fn_828ACD28(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 == 0) {
    return '\0';
  }
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 1)) || iVar1 == 4) {
    bVar2 = true;
  } else { bVar2 = false; }
  if (bVar2) {
    return '\x01';
  }
  if (iVar1 == 5) {
    return '\x02';
  }
  if ((iVar1 == 7) || iVar1 == 6) {
    bVar2 = true;
  }
  else { bVar2 = false; }
  return !bVar2 + '\x03';
}

