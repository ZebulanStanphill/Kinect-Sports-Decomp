extern int fn_822315A0(unsigned);
extern int fn_827D5070();
extern int fn_827FA328();


void fn_82559818(unsigned int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_827D5070(*param_1);
  iVar3 = 0;
  if (*(char *)(iVar1 + 3) != '\0') {
    iVar2 = 0;
    do {
      fn_827FA328("anim",*(unsigned int *)(*(int *)(iVar1 + 0x14) + iVar2 + 0x38));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x44;
    } while (iVar3 < (int)(unsigned int)*(unsigned char *)(iVar1 + 3));
  }
  if (param_1[1] != 0) {
    fn_822315A0(param_1[1]);
  }
  return;
}

