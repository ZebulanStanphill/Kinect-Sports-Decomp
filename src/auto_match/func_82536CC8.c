extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern int fn_82292828();
extern int fn_8239DD40();
extern int fn_8265C9E0();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_83297840;


void fn_82536CC8(void)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_70 [48];
  unsigned char auStack_40 [24];
  
  if (lbl_83297840 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)fn_8265C9E0(0x10);
    if (puVar2 == (unsigned int *)0x0) {
      lbl_83297840 = (unsigned int *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      fn_8239DD40(puVar2,10);
      uVar1 = fn_82864988(auStack_70,0xffffffff821bc014);
      fn_82292828(puVar2,uVar1);
      fn_82864898(auStack_70);
      uVar1 = fn_82864988(auStack_40,0xffffffff821c3abc);
      fn_82292828(puVar2,uVar1);
      fn_82864898(auStack_40);
      lbl_83297840 = puVar2;
    }
  }
  return;
}

