extern int fn_82250A18();
extern int fn_823CC7A0();
extern unsigned int lbl_831D1918;
extern unsigned int lbl_832975B0;


void fn_823C4F28(int *param_1)

{
  int iVar1;
  
  if (lbl_831D1918 != 0) {
    if (((param_1[0x130] == 0) && (iVar1 = (**(int (***)())(*param_1 + 200))(), iVar1 != 1)) &&
       (lbl_832975B0 == 0)) {
      fn_82250A18();
    }
    if (lbl_832975B0 == 0) {
      fn_82250A18();
    }
                    /* WARNING: Subroutine does not return */
    fn_823CC7A0();
  }
  return;
}

