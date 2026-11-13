extern void fn_82F65320(int);
extern int lbl_83248EAC;


void fn_82E81FC8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x7900) != 2) {
    *(unsigned int *)(param_1 + 0x628) = (unsigned int)(*(int *)(param_1 + 0x7900) == 1);
  }
  if (*(int *)(param_1 + 0x7904) != 2) {
    *(unsigned int *)(param_1 + 0x648) = (unsigned int)(*(int *)(param_1 + 0x7904) == 1);
  }
  if (*(int *)(param_1 + 0x7908) != 2) {
    *(unsigned int *)(param_1 + 0x644) = (unsigned int)(*(int *)(param_1 + 0x7908) == 1);
  }
  if (*(int *)(param_1 + 0x790c) != 2) {
    *(unsigned int *)(param_1 + 0x64c) = (unsigned int)(*(int *)(param_1 + 0x790c) == 1);
  }
  if (*(int *)(param_1 + 0x7910) != 2) {
    *(unsigned int *)(param_1 + 0x978) = (unsigned int)(*(int *)(param_1 + 0x7910) == 1);
    if (*(int *)(param_1 + 0x7914) == 4) {
      *(unsigned int *)(param_1 + 0x978) = 2;
    }
    else {
      if (0 < *(int *)(param_1 + 0x7914)) goto LAB_82e82080;
      *(unsigned int *)(param_1 + 0x978) = 0;
    }
    *(unsigned int *)(param_1 + 0x7914) = 0;
  }
LAB_82e82080:
  if (*(int *)(param_1 + 31000) != 2) {
    *(unsigned int *)(param_1 + 0x314) = (unsigned int)(*(int *)(param_1 + 31000) == 1);
  }
  if (*(int *)(param_1 + 0x791c) != 2) {
    *(unsigned int *)(param_1 + 0x920) = (unsigned int)(*(int *)(param_1 + 0x791c) == 1);
  }
  if (*(int *)(param_1 + 0x7920) != 2) {
    *(unsigned int *)(param_1 + 0x5268) = (unsigned int)(*(int *)(param_1 + 0x7920) == 1);
  }
  if (*(int *)(param_1 + 0x7924) != 2) {
    *(unsigned int *)(param_1 + 0xafc) = (unsigned int)(*(int *)(param_1 + 0x7924) == 1);
  }
  if (*(int *)(param_1 + 0x7928) == 0) {
    *(unsigned int *)(param_1 + 0x77a0) = 0;
    *(unsigned int *)(param_1 + 0x77a4) = 0;
  }
  if (*(int *)(param_1 + 0x792c) != 2) {
    *(unsigned int *)(param_1 + 0x8d4) = (unsigned int)(*(int *)(param_1 + 0x792c) == 1);
  }
  iVar3 = *(int *)(param_1 + 0x7934);
  if (iVar3 != 2) {
    *(unsigned int *)(param_1 + 0x1a74) = (unsigned int)(iVar3 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x7938);
  if (iVar1 == 2) goto LAB_82e821b0;
  if (iVar1 == 0) {
    *(unsigned int *)(param_1 + 0x598) = 0;
    *(unsigned int *)(param_1 + 0x5a0) = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x793c);
    if (iVar2 == 0) {
      *(unsigned int *)(param_1 + 0x59c) = 1;
      *(unsigned int *)(param_1 + 0x598) = 1;
      *(unsigned int *)(param_1 + 0x5a0) = 0;
      *(unsigned int *)(param_1 + 0x594) = 1;
      goto LAB_82e821b0;
    }
    if (iVar2 == 1) {
      *(unsigned int *)(param_1 + 0x59c) = 1;
      *(unsigned int *)(param_1 + 0x598) = 1;
      *(unsigned int *)(param_1 + 0x5a0) = 0;
      *(unsigned int *)(param_1 + 0x594) = 0;
      goto LAB_82e821b0;
    }
    if (iVar2 != 2) goto LAB_82e821b0;
    *(unsigned int *)(param_1 + 0x598) = 1;
    *(unsigned int *)(param_1 + 0x5a0) = 1;
    *(unsigned int *)(param_1 + 0x594) = 0;
  }
  *(unsigned int *)(param_1 + 0x59c) = 0;
LAB_82e821b0:
  iVar2 = *(int *)(param_1 + 0x7968);
  if (iVar2 != 2) {
    *(int *)(param_1 + 0x78e0) = iVar2;
    *(int *)(param_1 + 0x78dc) = iVar2;
    *(unsigned int *)(param_1 + 0x78a8) = 1;
    *(unsigned int *)(param_1 + 0x78a4) = 1;
    *(unsigned int *)(param_1 + 0x78a0) = 1;
    *(int *)(param_1 + 0x78d8) = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x7940);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x78d0) = iVar2;
    *(int *)(param_1 + 0x78cc) = iVar2;
    *(unsigned int *)(param_1 + 0x7898) = 1;
    *(unsigned int *)(param_1 + 0x7894) = 1;
    if (*(int *)(param_1 + 0x868) != -1) {
      *(unsigned int *)(param_1 + 0x789c) = 1;
      *(int *)(param_1 + 0x78d4) = *(int *)(param_1 + 0x868) + iVar2;
    }
    if (0x1f < *(int *)(param_1 + 0x78d4)) {
      *(unsigned int *)(param_1 + 0x78d4) = 0x1f;
    }
  }
  iVar2 = *(int *)(param_1 + 0x7948);
  if ((iVar2 != -1) && ((2 < iVar2 || (iVar2 < -1)))) {
    *(unsigned int *)(param_1 + 0x7948) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x794c);
  if ((iVar2 != -1) && ((2 < iVar2 || (iVar2 < -1)))) {
    *(unsigned int *)(param_1 + 0x794c) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x795c);
  if ((iVar2 != -1) && ((3 < iVar2 || (iVar2 < -1)))) {
    *(unsigned int *)(param_1 + 0x795c) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7964);
  if ((iVar2 != -1) && ((2 < iVar2 || (iVar2 < -1)))) {
    *(unsigned int *)(param_1 + 0x7964) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7960);
  if ((iVar2 != -1) && ((3 < iVar2 || (iVar2 < -1)))) {
    *(unsigned int *)(param_1 + 0x7960) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7954);
  if ((iVar2 != -1) && ((7 < iVar2 || (iVar2 < -1)))) {
    *(unsigned int *)(param_1 + 0x7954) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7958);
  if ((iVar2 != -1) && ((7 < iVar2 || (iVar2 < -1)))) {
    *(unsigned int *)(param_1 + 0x7958) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7950);
  if ((iVar2 != -1) && ((7 < iVar2 || (iVar2 < -1)))) {
    *(unsigned int *)(param_1 + 0x7950) = 0;
  }
  if (lbl_83248EAC != 0) {
    return;
  }
  if (iVar3 != 1) {
    if (iVar1 != 1) {
      return;
    }
    if (*(int *)(param_1 + 0x793c) != 2) {
      return;
    }
  }
  fn_82F65320(0x3db);
  return;
}

