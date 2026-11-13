typedef unsigned char bool;
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BE54C0();
extern int fn_82BE56B0();
extern int fn_82BE56C0();
extern int fn_82BE74D0();
extern int fn_82BE7E28();
extern int fn_82BE8020();
extern unsigned int lbl_83175240;
extern unsigned int lbl_83175244;
extern unsigned int *lbl_8322B1DC;
extern unsigned int lbl_8322B1E4;
extern unsigned int lbl_8322B1E8;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_82BE8458(int param_1)

{
  bool bVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char bVar6;
  
  if (lbl_8322B1DC != (unsigned int *)0x0) {
    return lbl_8322B1DC;
  }
  if ((*(unsigned short *)(param_1 + 0x14) & 0x20) == 0) {
    if ((*(unsigned short *)(param_1 + 0x14) & 0x40) == 0) {
      lbl_83175244 = 0x2000;
      lbl_83175240 = 0x2000;
    }
    else {
      lbl_83175244 = 0x1000;
      lbl_83175240 = 0x1000;
    }
  }
  else {
    lbl_83175240 = 0x4000;
    lbl_83175244 = 0x4000;
  }
  uVar2 = fn_82BE56B0(200);
  bVar1 = (uVar2 & 0xffffffff) == 0;
  bVar6 = bVar1 << 1;
  if (bVar1) {
    lbl_8322B1DC = (unsigned int *)0x0;
  }
  else {
    lbl_8322B1DC = (unsigned int *)fn_82BE74D0(uVar2,lbl_83175240);
  }
  if (lbl_8322B1DC == (unsigned int *)0x0) {
    return (unsigned int *)0x0;
  }
  if (lbl_8322B1DC[1] == 0) {
    do {
      if (in_RESERVE != '\0') {
        lbl_8322B1E8 = storeWordConditionalIndexed((unsigned __int64)lbl_8322B1E8 + 1,0,0xffffffff8322b1e8)
        ;
        bVar6 = 2;
      }
    } while (!(bool)(bVar6 >> 1 & 1));
    lbl_8322B1E4 = 0;
    iVar3 = fn_82BE7E28();
    if (iVar3 != 0) {
      iVar4 = fn_82BE8020(lbl_8322B1DC,iVar3);
      if (iVar4 == 0) {
        return lbl_8322B1DC;
      }
      fn_82BE5340(iVar3);
      while (*(int *)(iVar3 + 8) != 0) {
        puVar5 = (unsigned int *)fn_82BE5378(iVar3);
        if (puVar5 != (unsigned int *)0x0) {
          (**(int (***)())*puVar5)(puVar5,1);
        }
        fn_82BE5350(iVar3);
      }
      fn_82BE5478();
      fn_82BE54C0(iVar3);
      fn_82BE56C0(iVar3);
    }
    if (lbl_8322B1DC == (unsigned int *)0x0) {
      lbl_8322B1DC = (unsigned int *)0x0;
      return (unsigned int *)0x0;
    }
  }
  (**(int (***)())*lbl_8322B1DC)(lbl_8322B1DC,1);
  lbl_8322B1DC = (unsigned int *)0x0;
  return (unsigned int *)0x0;
}

