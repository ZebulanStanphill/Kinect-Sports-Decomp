#define _uStack00000020 ((*(unsigned __int64*)&uStack00000020))
#define _uStack00000028 ((*(unsigned __int64*)&uStack00000028))
extern unsigned int lbl_831888F8;
extern unsigned int uStack00000020;
extern unsigned int uStack00000024;
extern unsigned int uStack00000028;


unsigned __int64 fn_82E77148(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int uStack00000020;
  unsigned int uStack00000024;
  unsigned int uStack00000028;
  unsigned int *apuStack_30 [12];
  
  puVar1 = (unsigned int *)0x0;
  for (puVar2 = param_1;
      (_uStack00000020 = param_3, _uStack00000028 = param_4, puVar2 != (unsigned int *)0x0 &&
      ((unsigned int)puVar2[1] <= param_2)); puVar2 = (unsigned int *)puVar2[0x43]) {
    apuStack_30[0] = puVar2;
    if (param_2 < puVar2[1] + 0x14) goto LAB_82e771f0;
    puVar1 = puVar2;
  }
  apuStack_30[0] = (unsigned int *)0x0;
  if (param_1 == (unsigned int *)0x0) {
    uVar3 = 0xffffffff8000ffff;
  }
  else {
    uVar3 = (**(int (***)())*param_1)(param_1,apuStack_30);
    if (-1 < (int)uVar3) {
      apuStack_30[0][1] = (param_2 / 0x14) * 0x14;
      if (puVar1 != (unsigned int *)0x0) {
        puVar1[0x43] = apuStack_30[0];
      }
      apuStack_30[0][0x43] = puVar2;
LAB_82e771f0:
      uVar3 = 0;
      param_2 = param_2 - apuStack_30[0][1];
      *(unsigned char *)((int)apuStack_30[0] + (param_2 >> 3) + 0x18) =
           (&lbl_831888F8)[param_2 & 7] | *(unsigned char *)((int)apuStack_30[0] + (param_2 >> 3) + 0x18);
      apuStack_30[0][param_2 * 3 + 7] = uStack00000020;
      apuStack_30[0][param_2 * 3 + 8] = uStack00000024;
      apuStack_30[0][param_2 * 3 + 9] = uStack00000028;
    }
  }
  return uVar3;
}

