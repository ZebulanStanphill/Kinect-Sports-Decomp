typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AC6560();
extern int fn_82AD1978();


unsigned int * fn_82AD1A40(int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  
  puVar5 = (unsigned int *)*param_1;
  do {
    if (puVar5 == (unsigned int *)0x0) {
      iVar4 = fn_82AC6560(param_3,0x14,0x1a);
      *(unsigned int *)(iVar4 + 0xc) = param_2;
      *(unsigned int *)(iVar4 + 8) = *(unsigned int *)(param_2 + 4);
      *(int *)(param_2 + 4) = iVar4;
      puVar5 = (unsigned int *)fn_82AD1978(param_1,iVar4);
      return puVar5;
    }
    uVar1 = *puVar5;
    uVar3 = uVar1 >> 0x1e & 1;
    if (uVar3 == 0) {
      bVar2 = true;
      if ((uVar1 & 0xe000000) != 0) goto LAB_82ad1a64;
    }
    else {
LAB_82ad1a64:
      bVar2 = false;
    }
    if ((bVar2) && (puVar5[3] == param_2)) {
      if (uVar3 == 0) {
        bVar2 = true;
        if ((uVar1 & 0xe000000) != 0) goto LAB_82ad1a90;
      }
      else {
LAB_82ad1a90:
        bVar2 = false;
      }
      if (bVar2) {
        bVar2 = true;
        if ((uVar1 & 0x1ffe000) == 0) goto LAB_82ad1aa8;
      }
      else {
LAB_82ad1aa8:
        bVar2 = false;
      }
      if (!bVar2) {
        return puVar5;
      }
    }
    puVar5 = (unsigned int *)puVar5[1];
  } while( true );
}

