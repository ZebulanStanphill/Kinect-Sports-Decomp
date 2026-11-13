extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BE54C0();
extern int fn_82BE56B0();
extern int fn_82BE56C0();
extern int fn_82BE7790();
extern int fn_82BEB628();
extern int fn_82BEB640();
extern unsigned int lbl_8322B1DC;


unsigned int * fn_82BE7E28(void)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  int iVar4;
  
  puVar2 = (unsigned int *)fn_82BE7790();
  if (puVar2 != (unsigned int *)0x0) {
    uVar1 = fn_82BE56B0(0xc);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_82BEB628(uVar1,puVar2);
    }
    if ((uVar1 & 0xffffffff) == 0) {
      if (lbl_8322B1DC != 0) {
        fn_82BE5240(lbl_8322B1DC,0x65,0xffffffff820e9ac8);
      }
    }
    else {
      puVar3 = (unsigned int *)fn_82BE56B0(0x10);
      if (puVar3 == (unsigned int *)0x0) {
        puVar3 = (unsigned int *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
      }
      if (puVar3 == (unsigned int *)0x0) {
        if (lbl_8322B1DC != 0) {
          fn_82BE5240(lbl_8322B1DC,0x65,0xffffffff820e9a98);
        }
      }
      else {
        iVar4 = fn_82BE52B8(puVar3,uVar1);
        if (iVar4 != 0) {
          return puVar3;
        }
        fn_82BE54C0(puVar3);
        fn_82BE56C0(puVar3);
      }
      fn_82BEB640(uVar1);
      fn_82BE56C0(uVar1);
    }
    (**(int (***)())*puVar2)(puVar2,1);
  }
  return (unsigned int *)0x0;
}

