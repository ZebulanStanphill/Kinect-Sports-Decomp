extern int fn_826310E0();
extern int fn_826311B8();


void fn_82543628(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  uVar2 = 0;
  if (*param_3 != 0) {
    puVar3 = param_3 + 5;
    do {
      uVar1 = puVar3[-1];
      fn_826310E0(*param_1,(unsigned __int64)uVar1,*puVar3,(unsigned __int64)puVar3[1],
                   (unsigned __int64)
                   (-0x8000000000000000 >>
                   (((((unsigned __int64)uVar1 + (unsigned __int64)puVar3[1]) - 1 & 0xffffffff) >> 2) -
                    (unsigned __int64)(uVar1 >> 2) & 0x7f)) >> ((unsigned __int64)(uVar1 >> 2) & 0x7f));
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar2 < *param_3);
  }
  uVar2 = 0;
  if (param_3[1] != 0) {
    puVar3 = param_3 + 0x1d;
    do {
      uVar1 = puVar3[-1];
      fn_826310E0(*param_1,(unsigned __int64)uVar1,
                   (unsigned __int64)*(unsigned int *)*puVar3 + (unsigned __int64)*(unsigned int *)(param_2 + 4),
                   (unsigned __int64)puVar3[1],
                   (unsigned __int64)
                   (-0x8000000000000000 >>
                   (((((unsigned __int64)uVar1 + (unsigned __int64)puVar3[1]) - 1 & 0xffffffff) >> 2) -
                    (unsigned __int64)(uVar1 >> 2) & 0x7f)) >> ((unsigned __int64)(uVar1 >> 2) & 0x7f));
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar2 < param_3[1]);
  }
  uVar2 = 0;
  if (param_3[2] != 0) {
    puVar3 = param_3 + 0x35;
    do {
      uVar1 = puVar3[-1];
      fn_826311B8(*param_1,(unsigned __int64)uVar1,*puVar3,(unsigned __int64)puVar3[1],
                   (unsigned __int64)
                   (-0x8000000000000000 >>
                   (((((unsigned __int64)uVar1 + (unsigned __int64)puVar3[1]) - 1 & 0xffffffff) >> 2) -
                    (unsigned __int64)(uVar1 >> 2) & 0x7f)) >> ((unsigned __int64)(uVar1 >> 2) & 0x7f));
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar2 < param_3[2]);
  }
  uVar2 = 0;
  if (param_3[3] != 0) {
    puVar3 = param_3 + 0x4d;
    do {
      uVar1 = puVar3[-1];
      fn_826311B8(*param_1,(unsigned __int64)uVar1,
                   (unsigned __int64)*(unsigned int *)*puVar3 + (unsigned __int64)*(unsigned int *)(param_2 + 4),
                   (unsigned __int64)puVar3[1],
                   (unsigned __int64)
                   (-0x8000000000000000 >>
                   (((((unsigned __int64)uVar1 + (unsigned __int64)puVar3[1]) - 1 & 0xffffffff) >> 2) -
                    (unsigned __int64)(uVar1 >> 2) & 0x7f)) >> ((unsigned __int64)(uVar1 >> 2) & 0x7f));
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar2 < param_3[3]);
  }
  return;
}

