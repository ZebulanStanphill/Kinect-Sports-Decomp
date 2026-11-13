extern unsigned int *auStack_40;
extern int fn_8265C9E0();
extern int fn_82F51A50();
extern int fn_82F52188();
extern int fn_82F526B8();
extern int fn_82F52850();
extern int fn_82F52D78();
extern unsigned int lbl_83262350;
extern unsigned int lbl_83262358;
extern unsigned int lbl_83262360;


void fn_82F4E9C8(void)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned int uVar4;
  unsigned __int64 uVar2;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned char auStack_40 [64];
  
  iVar3 = fn_82F526B8(0x8210);
  if (iVar3 == 0) {
    lbl_83262360 = 0;
  }
  else {
    lbl_83262360 = fn_82F52850();
  }
  puVar6 = &lbl_83262358;
  lVar5 = 0;
  do {
    uVar1 = fn_82F526B8(0xc);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_82F52D78(uVar1,lVar5);
    }
    *puVar6 = uVar4;
    puVar6 = puVar6 + 1;
    lVar5 = lVar5 + 1;
  } while ((int)puVar6 < -0x7cd9dca0);
  uVar1 = fn_8265C9E0(8);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82F51A50(uVar1,0);
  }
  lbl_83262350 = (unsigned int)uVar2;
                    /* WARNING: Subroutine does not return */
  fn_82F52188(auStack_40,uVar2,1);
}

