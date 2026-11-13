extern int fn_822E26D0();
extern int fn_822E27C8();
extern int fn_822E28C0();
extern int fn_823830A0();
extern int fn_8288B760();
extern unsigned int lbl_8218EC10;


void fn_822E25B8(double param_1,int *param_2)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  
  if (*(int *)(param_2[5] + 0x168) == 0) {
    uVar2 = *(unsigned int *)(param_2[5] + 0x16c);
  }
  else {
    uVar2 = fn_8288B760();
    uVar2 = uVar2 & 0xff;
  }
  if ((uVar2 != 0) &&
     (((*(int *)(param_2[4] + 0x84) == 0 || (iVar3 = fn_823830A0(), iVar3 != 0)) ||
      (param_2[0xd] == 1)))) {
    uVar2 = param_2[0xd];
    param_2[0xf] = (int)(float)(param_1 + (double)(float)param_2[0xf]);
    if (uVar2 == 0) {
      if (*(int *)(param_2[5] + 0x2e0) < 0x18) {
        (**(int (***)())(*param_2 + 0x20))(param_2);
      }
    }
    else if (uVar2 == 1) {
      fn_822E26D0(param_2);
    }
    else if (uVar2 < 3) {
      fVar1 = (float)param_2[0xb];
      param_2[0xb] = (int)(float)((double)fVar1 - param_1);
      if ((float)((double)fVar1 - param_1) < lbl_8218EC10) {
        fn_822E27C8(param_2);
      }
    }
    else if (uVar2 == 5) {
      fn_822E28C0(param_2);
    }
  }
  return;
}

