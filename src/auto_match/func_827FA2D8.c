typedef unsigned char bool;
extern unsigned int lbl_821AAD20;


bool fn_827FA2D8(int param_1,unsigned int param_2,unsigned int *param_3)

{
  bool bVar1;
  unsigned int uVar2;
  
  bVar1 = param_2 < *(unsigned short *)(param_1 + 0x30);
  uVar2 = lbl_821AAD20;
  if (bVar1) {
    uVar2 = *(unsigned int *)
             (((unsigned int)*(unsigned short *)(param_1 + 0x32) * 0xc + (unsigned int)*(unsigned short *)(param_1 + 0x2e) + param_2
              ) * 4 + *(int *)(param_1 + 0x84));
  }
  *param_3 = uVar2;
  return bVar1;
}

