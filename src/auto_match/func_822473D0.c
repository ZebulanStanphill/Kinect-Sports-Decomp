extern int fn_8289AB78();


void fn_822473D0(int *param_1)

{
  __int64 lVar1;
  char cVar2;
  unsigned __int64 uVar3;
  
  cVar2 = '\x01';
  uVar3 = 0;
  do {
    if (cVar2 == '\0') {
      cVar2 = '\0';
    }
    else {
      lVar1 = (**(int (***)())(*param_1 + 8))(param_1);
      cVar2 = fn_8289AB78(uVar3 + lVar1 + 0x294);
    }
    if (cVar2 == '\0') {
      cVar2 = '\0';
    }
    else {
      lVar1 = (**(int (***)())(*param_1 + 8))(param_1);
      cVar2 = fn_8289AB78(uVar3 + lVar1 + 0x780);
    }
    if (cVar2 == '\0') {
      cVar2 = '\0';
    }
    else {
      lVar1 = (**(int (***)())(*param_1 + 8))(param_1);
      cVar2 = fn_8289AB78(lVar1 + 0x240);
    }
  } while ((cVar2 != '\0') && (uVar3 = uVar3 + 0x54, (uVar3 & 0xffffffff) < 0x4ec));
  return;
}

