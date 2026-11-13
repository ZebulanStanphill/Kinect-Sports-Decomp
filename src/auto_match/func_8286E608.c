typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8287A778();


unsigned __int64 fn_8286E608(int param_1)

{
  bool bVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  
  bVar1 = false;
  for (puVar4 = *(unsigned int **)(param_1 + 0x14); puVar4 != *(unsigned int **)(param_1 + 0x18);
      puVar4 = puVar4 + 1) {
    iVar3 = fn_8287A778(*puVar4);
    if (iVar3 < 0) {
      bVar1 = true;
    }
  }
  uVar2 = 0xffffffffa0100000;
  if (!bVar1) {
    uVar2 = 0x20100000;
  }
  return uVar2;
}

