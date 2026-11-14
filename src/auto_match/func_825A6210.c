extern int XMemSet();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821C8024;
extern unsigned int lbl_821CA460;


void fn_825A6210(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  *param_1 = &lbl_821C8024;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  uVar1 = lbl_821917C0;
  param_1[0x5a] = 0;
  param_1[0x5b] = uVar1;
  param_1[0x5e] = param_2;
  param_1[0x5c] = 0;
  uVar1 = lbl_821CA460;
  param_1[0x5d] = 0;
  *(unsigned char *)(param_1 + 0x52) = 0;
  param_1[0x53] = uVar1;
  param_1[0x54] = uVar1;
  *(unsigned char *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  *(unsigned char *)(param_1 + 0x30) = 0;
                    /* WARNING: Subroutine does not return */
  XMemSet(param_1 + 0x18,0,0x60);
}

