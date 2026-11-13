extern int fn_82C5E098();
extern int fn_82C5E568();
extern int fn_82C5F038();
extern int fn_82C64FC0();
extern int fn_82C65130();
extern int fn_82C65408();
extern int fn_82C65578();
extern int fn_82C66FC0();
extern int fn_82C68D68();
extern int fn_82C7AA08();
extern int fn_82C902D0();
extern int fn_82C91F40();
extern int fn_82C9A740();
extern int fn_82CA50F8();
extern int fn_82CA7BC0();
extern int fn_82CAFB90();
extern int fn_82CB0840();
extern int fn_82CB1DF0();
extern int fn_82CB34C0();
extern int fn_82D7EA10();
extern unsigned int lbl_820FC6D8;
extern unsigned int lbl_820FC718;
extern unsigned int lbl_820FC758;
extern unsigned int lbl_820FC7C0;
extern unsigned int lbl_820FC800;
extern unsigned int lbl_820FC868;
extern unsigned int lbl_820FC8D0;
extern unsigned int lbl_820FC910;
extern unsigned int lbl_820FCB38;
extern unsigned int lbl_820FCB5C;
extern unsigned int lbl_820FCB80;
extern unsigned int lbl_820FCBA4;
extern unsigned int lbl_820FCBC8;
extern unsigned int lbl_820FCBDC;
extern unsigned int lbl_820FCBF0;
extern unsigned int lbl_820FCC30;
extern unsigned int lbl_820FCCA8;
extern unsigned int lbl_820FCCE8;
extern unsigned int lbl_82C85178;


void fn_82C53608(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int (**pcVar3)();
  
  iVar1 = *(int *)(param_1 + 0x3cb0);
  *(unsigned int *)(param_1 + 0x3ce0) = 1;
  if ((iVar1 == 5) || (5 < iVar1)) {
    *(unsigned char **)(param_1 + 0x730) = &lbl_820FCB38;
    *(unsigned char **)(param_1 + 0x734) = &lbl_820FCB5C;
    *(unsigned char **)(param_1 + 0x738) = &lbl_820FCB80;
    *(unsigned char **)(param_1 + 0x73c) = &lbl_820FCBA4;
    *(unsigned char **)(param_1 + 0x74c) = &lbl_820FCBC8;
    *(unsigned char **)(param_1 + 0x750) = &lbl_820FCBDC;
    if (iVar1 == 7) {
      *(unsigned char **)(param_1 + 0x748) = &lbl_820FCBDC;
    }
    if (iVar1 == 5) {
      *(unsigned int *)(param_1 + 0x1b4) = 1;
      *(unsigned int *)(param_1 + 0x1bc) = 1;
    }
    else {
      *(unsigned int *)(param_1 + 0x1b4) = 0;
      *(unsigned int *)(param_1 + 0x1bc) = 0;
    }
  }
  if (iVar1 < 4) {
    *(unsigned char **)(param_1 + 0x70c) = &lbl_820FCC30;
    *(unsigned char **)(param_1 + 0x718) = &lbl_820FCBF0;
    *(unsigned char **)(param_1 + 0x710) = &lbl_820FCCA8;
    *(unsigned char **)(param_1 + 0x714) = &lbl_820FCCE8;
    *(unsigned char **)(param_1 + 0x71c) = &lbl_820FCCE8;
    *(unsigned char **)(param_1 + 0x720) = &lbl_820FCCA8;
    *(unsigned char **)(param_1 + 0x724) = &lbl_820FCBF0;
    *(unsigned char **)(param_1 + 0x728) = &lbl_820FCC30;
    *(int (***)())(param_1 + 0xc20) = fn_82C68D68;
  }
  else {
    *(unsigned char **)(param_1 + 0x70c) = &lbl_820FC868;
    *(unsigned char **)(param_1 + 0xc20) = &fn_82CB1DF0;
    *(unsigned char **)(param_1 + 0x718) = &lbl_820FC758;
    *(unsigned char **)(param_1 + 0x710) = &lbl_820FC8D0;
    *(unsigned char **)(param_1 + 0x714) = &lbl_820FC910;
    *(unsigned char **)(param_1 + 0x71c) = &lbl_820FC6D8;
    *(unsigned char **)(param_1 + 0x720) = &lbl_820FC718;
    *(unsigned char **)(param_1 + 0x724) = &lbl_820FC7C0;
    *(unsigned char **)(param_1 + 0x728) = &lbl_820FC800;
    fn_82C5E098(param_1);
  }
  uVar2 = *(unsigned int *)(param_1 + 0x3cb0);
  if (uVar2 == 7) {
    *(unsigned int *)(param_1 + 0x740) = *(unsigned int *)(param_1 + 0x730);
    *(unsigned int *)(param_1 + 0x744) = *(unsigned int *)(param_1 + 0x734);
    *(unsigned int *)(param_1 + 0x748) = *(unsigned int *)(param_1 + 0x74c);
    *(unsigned int *)(param_1 + 0x708) = 0;
    *(unsigned int *)(param_1 + 0x72c) = *(unsigned int *)(param_1 + 0x728);
    *(unsigned int *)(param_1 + 0x5110) = *(unsigned int *)(param_1 + 0x710);
    *(unsigned int *)(param_1 + 0x5114) = *(unsigned int *)(param_1 + 0x714);
    if (*(int *)(param_1 + 0x700) != 0) {
      *(unsigned int *)(param_1 + 0x708) = 1;
      *(unsigned int *)(param_1 + 0x72c) = *(unsigned int *)(param_1 + 0x724);
      *(unsigned int *)(param_1 + 0x740) = *(unsigned int *)(param_1 + 0x738);
      *(unsigned int *)(param_1 + 0x744) = *(unsigned int *)(param_1 + 0x73c);
      *(unsigned int *)(param_1 + 0x748) = *(unsigned int *)(param_1 + 0x750);
      *(unsigned int *)(param_1 + 0x5110) = *(unsigned int *)(param_1 + 0x71c);
      *(unsigned int *)(param_1 + 0x5114) = *(unsigned int *)(param_1 + 0x720);
    }
  }
  *(int (***)())(param_1 + 0x3ddc) = fn_82C5E568;
  *(int (***)())(param_1 + 0x3de0) = fn_82C5F038;
  *(int (***)())(param_1 + 0xc18) = fn_82CB0840;
  if ((int)uVar2 < 6) {
    *(int (***)())(param_1 + 0xc14) = fn_82D7EA10;
  }
  else {
    *(int (***)())(param_1 + 0x3de0) = fn_82C9A740;
    *(int (***)())(param_1 + 0xc14) = fn_82C91F40;
    *(int (***)())(param_1 + 0xc1c) = fn_82C902D0;
  }
  if (uVar2 == 0) {
    *(unsigned int *)(param_1 + 0x794) = 1;
    *(unsigned int *)(param_1 + 0x3cac) = *(unsigned int *)(param_1 + 0x8c);
    *(int (***)())(param_1 + 0xc78) = fn_82C66FC0;
    *(int (***)())(param_1 + 0xc24) = fn_82C65408;
    *(int (***)())(param_1 + 0xc28) = fn_82C65578;
    *(unsigned char **)(param_1 + 0x50f4) = &lbl_82C85178;
  }
  else {
    *(unsigned int *)(param_1 + 0x790) = ((int)uVar2 >> 0x1f) + (unsigned int)(2 < uVar2);
    *(unsigned int *)(param_1 + 0x794) = ((int)uVar2 >> 0x1f) + (unsigned int)(3 < uVar2);
    if (*(int (***)())(param_1 + 0xc80) == fn_82C7AA08) {
      pcVar3 = fn_82CAFB90;
    }
    else {
      pcVar3 = fn_82CB34C0;
    }
    *(int (***)())(param_1 + 0xc78) = pcVar3;
    if ((int)uVar2 < 3) {
      *(int (***)())(param_1 + 0xc24) = fn_82C64FC0;
      *(int (***)())(param_1 + 0xc28) = fn_82C65130;
      *(unsigned char **)(param_1 + 0x50f4) = &lbl_82C85178;
    }
    else {
      *(int (***)())(param_1 + 0xc24) = fn_82CA7BC0;
      *(int (***)())(param_1 + 0xc28) = fn_82CA50F8;
      *(unsigned char **)(param_1 + 0x50f4) = &lbl_82C85178;
    }
  }
  return;
}

