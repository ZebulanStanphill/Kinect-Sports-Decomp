extern int fn_82522ED8();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_825F84F0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = ltcg_pool_0_0f;
  uVar1 = lbl_821CA460;
  param_1[3] = lbl_821CA460;
  *param_1 = 0;
  param_1[5] = uVar1;
  param_1[1] = 0;
  param_1[6] = uVar1;
  *(unsigned char *)(param_1 + 9) = 0;
  param_1[8] = uVar2;
  *(unsigned char *)((int)param_1 + 0x26) = 0;
  *(unsigned char *)((int)param_1 + 0x27) = 0;
  *(unsigned char *)(param_1 + 10) = 0;
  *(unsigned char *)((int)param_1 + 0x2a) = 0;
  *(unsigned char *)((int)param_1 + 0x25) = 0;
  *(unsigned char *)((int)param_1 + 0x2b) = 0;
  if (param_1[2] != 0) {
    fn_82522ED8();
    param_1[2] = 0;
  }
  return;
}

