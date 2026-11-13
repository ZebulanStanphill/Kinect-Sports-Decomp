extern int fn_82F68CC0();
extern int fn_82FA5060();
extern int fn_82FB95B0();
extern int fn_8300D168();
extern unsigned int lbl_8217C330;
extern unsigned int lbl_831BC768;


int * fn_8300CFF8(int param_1,unsigned short param_2)

{
  unsigned short uVar1;
  int iVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  unsigned short *puVar5;
  int iVar6;
  unsigned short *puVar7;
  
  if (param_2 == 0) {
LAB_8300d0d8:
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)fn_82FA5060(lbl_831BC768,0x2c);
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    *(unsigned short *)(piVar4 + 5) = param_2;
    iVar6 = (unsigned int)param_2 * 0x32;
    *(unsigned short *)((int)piVar4 + 0x16) = param_2;
    piVar4[3] = iVar6;
    piVar4[4] = iVar6;
    *piVar4 = (int)&lbl_8217C330;
    piVar4[6] = 0;
    piVar4[7] = 0;
    piVar4[8] = 0;
    piVar4[9] = 0;
    piVar4[10] = 0;
    piVar4[3] = *(int *)(param_1 + 0xc);
    piVar4[4] = *(int *)(param_1 + 0x10);
    *(unsigned short *)(piVar4 + 5) = *(unsigned short *)(param_1 + 0x14);
    *(unsigned short *)((int)piVar4 + 0x16) = *(unsigned short *)(param_1 + 0x16);
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar6 = (int)(param_2 + 7) >> 3;
      iVar2 = iVar6 << 1;
      uVar3 = fn_82FA5060(lbl_831BC768,iVar2);
      piVar4[9] = (int)uVar3;
      if ((uVar3 & 0xffffffff) == 0) {
LAB_8300d0c4:
        (**(int (***)())(*piVar4 + 4))(piVar4);
        goto LAB_8300d0d8;
      }
      piVar4[10] = (int)uVar3 + iVar6;
      fn_82F68CC0(uVar3,*(unsigned int *)(param_1 + 0x24),iVar2);
    }
    fn_8300D168(piVar4 + 6,*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 1);
    puVar7 = *(unsigned short **)(param_1 + 0x18);
    if (puVar7 != *(unsigned short **)(param_1 + 0x1c)) {
      do {
        uVar1 = *puVar7;
        puVar5 = (unsigned short *)fn_82FB95B0(piVar4 + 6);
        if (puVar5 == (unsigned short *)0x0) goto LAB_8300d0c4;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
      } while (puVar7 != *(unsigned short **)(param_1 + 0x1c));
    }
  }
  return piVar4;
}

