extern int fn_82FA5060();
extern unsigned int lbl_831BC768;


void fn_830058D8(int param_1,unsigned int param_2)

{
  unsigned short *puVar1;
  unsigned int iVar2;
  
  if ((param_2 != 0) || (*(unsigned int *)(param_1 + 0x44) != 0)) {
    iVar2 = *(unsigned int *)(param_1 + 0x44);
    if (iVar2 == 0) {
      puVar1 = (unsigned short *)fn_82FA5060(lbl_831BC768,0xc);
      *(unsigned short **)(param_1 + 0x44) = puVar1;
      if (puVar1 != (unsigned short *)0x0) {
        *puVar1 = 0;
        *(unsigned int *)(puVar1 + 2) = 0;
      }
      iVar2 = *(unsigned int *)(param_1 + 0x44);
      if (iVar2 == 0) {
        return;
      }
    }
    *(int *)(iVar2 + 4) = param_2;
  }
  return;
}

