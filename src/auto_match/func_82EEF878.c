#define _uStack00000028 ((*(unsigned __int64*)&uStack00000028))
extern unsigned int lbl_8318A744;
extern unsigned int uStack00000028;
extern unsigned int uStack0000002c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_82EEF878(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int in_stack_00000020;
  unsigned int uStack00000028;
  unsigned int uStack0000002c;
  unsigned int *apuStack_30 [12];
  
  puVar1 = (unsigned int *)0x0;
  for (puVar2 = param_1;
      (_uStack00000028 = param_4, puVar2 != (unsigned int *)0x0 && ((unsigned int)puVar2[1] <= param_2));
      puVar2 = (unsigned int *)puVar2[0x58]) {
    apuStack_30[0] = puVar2;
    if (param_2 < puVar2[1] + 0x14) goto LAB_82eef920;
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
        puVar1[0x58] = apuStack_30[0];
      }
      apuStack_30[0][0x58] = puVar2;
LAB_82eef920:
      param_2 = param_2 - apuStack_30[0][1];
      iVar4 = param_2 + 2;
      uVar3 = 0;
      *(unsigned char *)((int)apuStack_30[0] + (param_2 >> 3) + 0x1c) =
           (&lbl_8318A744)[param_2 & 7] | *(unsigned char *)((int)apuStack_30[0] + (param_2 >> 3) + 0x1c);
      apuStack_30[0][iVar4 * 4] = in_stack_00000020;
      apuStack_30[0][iVar4 * 4 + 1] = param_3;
      apuStack_30[0][iVar4 * 4 + 2] = uStack00000028;
      apuStack_30[0][iVar4 * 4 + 3] = uStack0000002c;
    }
  }
  return uVar3;
}

