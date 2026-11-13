extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8302DAD8();


unsigned __int64 fn_8302E258(int *param_1,int *param_2)

{
  int *piVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned short auStack_30 [2];
  unsigned char auStack_2c [44];
  
  piVar2 = (int *)fn_8302DAD8(param_1,param_2[2],auStack_30,auStack_2c);
  if (piVar2 == (int *)0x0) {
    if (*param_2 == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = (**(int (***)())(*param_1 + 0x154))(param_1,param_2);
      if ((int)uVar1 == 3) {
        uVar1 = 1;
      }
    }
  }
  else {
    uVar3 = param_2[10];
    puVar4 = (unsigned int *)(param_2 + 10);
    if (uVar3 < 0x20) {
      param_2[0x1b] = param_2[0x1b] & ~(1 << (uVar3 & 0x3f));
      *(unsigned short *)((*puVar4 + 2) * 2 + (int)puVar4) = auStack_30[0];
      uVar3 = *puVar4;
    }
    *puVar4 = uVar3 + 1;
    uVar1 = (**(int (***)())(*piVar2 + 0x18))(piVar2,param_2);
    (**(int (***)())(*piVar2 + 8))(piVar2);
  }
  return uVar1;
}

