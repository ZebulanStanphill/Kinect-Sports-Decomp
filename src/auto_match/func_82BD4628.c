extern unsigned int PTR_fn_82BD4338_83171dec;
extern unsigned int lbl_83171DCC;

/* WARNING: Inlined function: __savegprlr_25 */

unsigned __int64 fn_82BD4628(unsigned int param_1,int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  param_3 = param_3 & 0xff;
  if (param_3 == 0) {
    param_3 = 0;
  }
  uVar3 = 0;
  puVar1 = (unsigned int *)fn_8265C940(0x50,0x618a8011);
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[8] = param_1;
    puVar1[9] = param_3;
    puVar1[0xf] = 0;
    puVar1[7] = 2;
    *puVar1 = &lbl_83171DCC;
    puVar1[5] = 10;
    puVar1[0x10] = 0;
    puVar1[1] = param_2;
    if (param_3 == 1) {
      if (*(int *)(param_2 + 0x48) != 0) {
        (*(int (**)())PTR_fn_82BD4338_83171dec)(puVar1);
      }
    }
    else {
      *(unsigned char *)(puVar1 + 0xf) = 0xff;
    }
    iVar2 = fn_8265C940(puVar1[5] << 3,0x618a0003);
    puVar1[10] = iVar2;
    if (iVar2 != 0) goto LAB_82bd4618;
  }
  uVar3 = 0xffffffff8007000e;
  fn_82BD4160(puVar1);
  puVar1 = (unsigned int *)0x0;
LAB_82bd4618:
  *param_4 = puVar1;
  return uVar3;
}
