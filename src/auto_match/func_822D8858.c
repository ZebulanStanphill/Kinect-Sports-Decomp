extern unsigned int uRam831cd824;
extern unsigned int uRam831cd82c;


void fn_822D8858(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = uRam831cd824;
  if (*(int *)(param_1 + 0xe0) != 0) {
    uVar1 = uRam831cd82c;
  }
  *(unsigned int *)(param_1 + 0xd8) = uVar1;
  return;
}

