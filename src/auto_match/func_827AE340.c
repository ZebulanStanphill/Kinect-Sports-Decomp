extern int fn_8267BE38();
extern int fn_827A7D90();
extern int fn_827A7DF8();
extern int fn_827AE240();


void fn_827AE340(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  unsigned short *puVar2;
  unsigned short *puVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned short *puVar6;
  unsigned __int64 uVar7;
  
  puVar6 = *(unsigned short **)(param_1 + 0xc);
  if (puVar6 == (unsigned short *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x10);
    uVar5 = (unsigned __int64)uVar1;
    if (*puVar6 == 0xfffe) {
      puVar3 = puVar6 + 1;
      uVar5 = ((__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0)) - 1;
      *(unsigned int *)(param_1 + 8) = 1;
      uVar7 = uVar5;
      if (0 < (__int64)uVar5) {
        do {
          puVar2 = puVar6 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar2 << 8 | *puVar2 >> 8;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else if (*puVar6 == 0xfeff) {
      puVar3 = puVar6 + 1;
      uVar5 = ((__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0)) - 1;
      *(unsigned int *)(param_1 + 8) = 1;
      uVar7 = uVar5;
      if (0 < (__int64)uVar5) {
        do {
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else {
      puVar3 = puVar6;
      if ((((2 < (int)uVar1) && (*(char *)puVar6 == -0x11)) && ((char)*puVar6 == -0x45)) &&
         (*(char *)(puVar6 + 1) == -0x41)) {
        puVar3 = (unsigned short *)((int)puVar6 + 3);
        uVar5 = uVar5 - 3;
      }
    }
    if (*(int *)(param_1 + 8) == 1) {
      uVar4 = fn_827A7DF8(param_3 + 0x30,puVar3,uVar5);
    }
    else {
      uVar4 = fn_827A7D90();
    }
    fn_8267BE38(*(unsigned int *)(param_1 + 0xc));
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  fn_827AE240(param_3,param_2,uVar4);
  return;
}

