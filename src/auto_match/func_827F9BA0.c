extern int fn_827F9A10();
extern int fn_827F9AB0();
extern int fn_827FA720(int, unsigned char);
extern int fn_827FACF0();


void fn_827F9BA0(int *param_1,int param_2)

{
  char *iVar1;
  unsigned short uVar2;
  unsigned char bVar3;
  
  param_1[0x26] = (int)param_2;
  uVar2 = fn_827F9A10(param_2);
  fn_827F9AB0(param_2,uVar2 - 1);
  bVar3 = 0;
  iVar1 = *(char **)(*param_1 + 0x30);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1f) != 0) bVar3 |= 1;
    if (*(char *)(iVar1 + 0x20) != '\0') {
      bVar3 = bVar3 | 2;
    }
    if (*(char *)(iVar1 + 0x21) != '\0') {
      bVar3 = bVar3 | 4;
    }
    if (*(char *)(iVar1 + 0x22) != '\0') {
      bVar3 = bVar3 | 8;
    }
    if (*(char *)(iVar1 + 0x1c) != '\0') {
      bVar3 = bVar3 | 0x10;
    }
    if (*(char *)(iVar1 + 0x1d) != '\0') {
      bVar3 = bVar3 | 0x20;
    }
    if (*(char *)(iVar1 + 0x1e) != '\0') {
      bVar3 = bVar3 | 0x40;
    }
  }
  fn_827FACF0(param_2);
  fn_827FA720(param_2,bVar3);
  return;
}

