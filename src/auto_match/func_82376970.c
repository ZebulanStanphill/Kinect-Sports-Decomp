extern int fn_82561778();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B44A8;


int * fn_82376970(int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  lVar2 = fn_8265C9E0(0x1b0);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    puVar1 = (unsigned int *)lVar2;
    puVar1[1] = 1;
    *puVar1 = &lbl_821A8D8C;
    puVar1[2] = 1;
    if (lVar2 + 0x10 != 0) {
      puVar1[6] = param_2;
      puVar1[7] = 0;
      puVar1[5] = 0xb;
      *(unsigned int *)(lVar2 + 0x10) = &lbl_821B44A8;
      puVar1[0x68] = 0;
      fn_82561778(lVar2 + 0x20,0xffffffff821b4488,0x200);
    }
  }
  param_1[1] = (int)lVar2;
  *param_1 = (int)lVar2 + 0x10;
  return param_1;
}

