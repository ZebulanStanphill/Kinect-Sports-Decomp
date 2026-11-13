extern int fn_8265C940();
extern int fn_82BD7D68();
extern int fn_82BD8120();


__int64 fn_82BD7E10(unsigned int param_1,unsigned int *param_2,unsigned __int64 param_3,int *param_4,
                      unsigned int *param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  puVar1 = (unsigned int *)fn_8265C940(param_2[4],0x648a0008);
  if (puVar1 == (unsigned int *)0x0) {
    lVar4 = -0x7ff8fff2;
  }
  else {
    *puVar1 = param_1;
    lVar4 = fn_82BD8120(param_3,puVar1 + 1);
    if (-1 < lVar4) {
      uVar2 = 0;
      puVar3 = puVar1 + 2;
      do {
        if (*param_4 != 0) {
          lVar4 = fn_82BD8120(*param_4,puVar3);
          if (lVar4 < 0) goto LAB_82bd7ed8;
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
        param_4 = param_4 + 1;
      } while (uVar2 < 2);
      puVar1[6] = param_2;
      if ((int (**)())*param_2 == (int (**)())0x0) {
        lVar4 = 1;
      }
      else {
        lVar4 = (*(int (**)())*param_2)(puVar1);
      }
      if (-1 < (int)lVar4) goto LAB_82bd7ee4;
    }
  }
LAB_82bd7ed8:
  fn_82BD7D68(puVar1);
  puVar1 = (unsigned int *)0x0;
LAB_82bd7ee4:
  *param_5 = puVar1;
  return lVar4;
}

