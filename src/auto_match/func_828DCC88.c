typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_828DCA60();
extern unsigned int lbl_82024D24;


void fn_828DCC88(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  bool bVar4;
  unsigned short *puVar5;
  int iVar6;
  unsigned short *puVar7;
  __int64 lVar8;
  
  uVar1 = param_1[1];
  if ((uVar1 <= param_2) || (bVar4 = true, param_2 < *param_1)) {
    bVar4 = false;
  }
  if (bVar4) {
    uVar2 = *param_1;
    if (uVar1 == param_1[2]) {
      fn_828DCA60(param_1,1);
    }
    puVar3 = (unsigned int *)param_1[1];
    iVar6 = ((int)(param_2 - uVar2) / 0x34) * 0x34 + *param_1;
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = &lbl_82024D24;
      puVar5 = (unsigned short *)(iVar6 + 6);
      puVar7 = (unsigned short *)((int)puVar3 + 6);
      puVar3[1] = *(unsigned int *)(iVar6 + 4);
      lVar8 = 0x15;
      do {
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar5;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  else {
    if (uVar1 == param_1[2]) {
      fn_828DCA60(param_1,1);
    }
    puVar3 = (unsigned int *)param_1[1];
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = &lbl_82024D24;
      puVar5 = (unsigned short *)(param_2 + 6);
      puVar7 = (unsigned short *)((int)puVar3 + 6);
      lVar8 = 0x15;
      puVar3[1] = *(unsigned int *)(param_2 + 4);
      do {
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar5;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  param_1[1] = param_1[1] + 0x34;
  return;
}

