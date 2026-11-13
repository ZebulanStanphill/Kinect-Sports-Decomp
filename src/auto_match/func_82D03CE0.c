typedef unsigned char bool;
#define true 1
#define false 0


void fn_82D03CE0(unsigned char *param_1,int param_2,unsigned int *param_3,int param_4)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar3;
  unsigned int *puVar4;
  
  iVar3 = 0;
  if (0 < param_4) {
    do {
      uVar1 = *param_3;
      puVar4 = (unsigned int *)(uVar1 - 0x10);
      if ((uVar1 & 0xf) == 0) {
        if (uVar1 - 0x10 < *(unsigned int *)(param_2 + 0xc)) {
          bVar2 = false;
        }
        else {
          uVar1 = *(unsigned int *)(uVar1 - 0xc);
          if ((uVar1 >> 1 & 1) == 0) {
            bVar2 = false;
          }
          else if ((uVar1 & 0xfffffffc) < 0x10) {
            bVar2 = false;
          }
          else if ((*(unsigned int *)((int)puVar4 + (uVar1 & 0xfffffffc) + 4) & 1) == 0) {
            bVar2 = false;
          }
          else if ((uVar1 & 1) == 0) {
            uVar1 = *(unsigned int *)((int)puVar4 + (4 - *puVar4));
            if ((uVar1 >> 1 & 1) == 0) {
              bVar2 = false;
              if ((uVar1 & 0xfffffffc) == *puVar4) goto code_r0x82d03da0;
            }
            else {
              bVar2 = false;
            }
          }
          else {
code_r0x82d03da0:
            bVar2 = true;
          }
        }
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) {
        *param_1 = 0;
        return;
      }
      iVar3 = iVar3 + 1;
      param_3 = param_3 + 1;
    } while (iVar3 < param_4);
  }
  *param_1 = 1;
  return;
}

