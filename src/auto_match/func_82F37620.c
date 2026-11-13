extern unsigned int lbl_831B9FC0;


unsigned __int64 fn_82F37620(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int * apuStack_30;
  
  puVar2 = (unsigned int *)0x0;
  for (puVar3 = param_1;
      (puVar3 != (unsigned int *)0x0 && ((unsigned __int64)(unsigned int)puVar3[1] <= (param_2 & 0xffffffff)));
      puVar3 = (unsigned int *)puVar3[0x19]) {
    apuStack_30 = puVar3;
    if ((param_2 & 0xffffffff) < (unsigned __int64)(puVar3[1] + 0x14)) goto LAB_82f376c4;
    puVar2 = puVar3;
  }
  apuStack_30 = (unsigned int *)0x0;
  if (param_1 == (unsigned int *)0x0) {
    uVar4 = 0xffffffff8000ffff;
  }
  else {
    uVar4 = (**(int (***)())*param_1)(param_1,&apuStack_30);
    if (-1 < (int)uVar4) {
      apuStack_30[1] = (int)((param_2 & 0xffffffff) / 0x14) * 0x14;
      if (puVar2 != (unsigned int *)0x0) {
        puVar2[0x19] = apuStack_30;
      }
      apuStack_30[0x19] = puVar3;
LAB_82f376c4:
      uVar4 = 0;
      param_2 = param_2 - (unsigned int)apuStack_30[1];
      iVar1 = (int)((param_2 & 0xffffffff) >> 3);
      *(unsigned char *)((int)apuStack_30 + iVar1 + 0x10) =
           (&lbl_831B9FC0)[(unsigned int)param_2 & 7] | *(unsigned char *)((int)apuStack_30 + iVar1 + 0x10);
      *(unsigned int *)((int)((param_2 + 5 & 0xffffffff) << 2) + (int)apuStack_30) = param_3;
    }
  }
  return uVar4;
}

