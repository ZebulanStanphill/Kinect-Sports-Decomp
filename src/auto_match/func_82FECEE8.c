extern int fn_82FEF328();
extern unsigned int lbl_832643DC;


extern char lbl_831BC794[];
unsigned __int64 fn_82FECEE8(unsigned int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  
  puVar3 = (unsigned int *)fn_82FEF328(lbl_831BC794);
  if (puVar3 == (unsigned int *)0x0) {
    uVar2 = 2;
  }
  else {
    puVar3[1] = param_1;
    *puVar3 = param_2;
    uVar1 = lbl_832643DC;
    uVar2 = 1;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[2] = uVar1;
  }
  return uVar2;
}

