extern unsigned int fn_827CE2E8;
extern unsigned int fn_827CE6E8;
extern unsigned int fn_827D1970;
extern unsigned int forward_DCT;
extern unsigned int jpeg_fdct_ifast;
extern unsigned int jpeg_fdct_islow;

void jinit_forward_dct(int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int (**pcVar3)();
  __int64 lVar4;
  
  puVar2 = (unsigned int *)(**(int (***)())param_1[1])(param_1,1,0x30);
  param_1[0x56] = (int)puVar2;
  *puVar2 = &fn_827CE2E8;
  uVar1 = param_1[0x2e];
  if (uVar1 == 0) {
    pcVar3 = jpeg_fdct_islow;
LAB_827ce974:
    puVar2[2] = pcVar3;
    pcVar3 = forward_DCT;
  }
  else {
    if (uVar1 == 1) {
      pcVar3 = jpeg_fdct_ifast;
      goto LAB_827ce974;
    }
    if (2 < uVar1) {
      *(unsigned int *)(*param_1 + 0x14) = 0x30;
      (**(int (***)())*param_1)(param_1);
      goto LAB_827ce984;
    }
    pcVar3 = fn_827CE6E8;
    puVar2[7] = fn_827D1970;
  }
  puVar2[1] = pcVar3;
LAB_827ce984:
  puVar2 = puVar2 + 7;
  lVar4 = 4;
  do {
    puVar2[-4] = 0;
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}
