extern int fn_82247000();
extern int fn_82247068();
extern int fn_822471C8();
extern int fn_822474A8();
extern int fn_8288D868();
extern int fn_8288E940();
extern int fn_828AE818();
extern int fn_828B1340();


void fn_82246970(int param_1)

{
  int iVar1;
  char cVar3;
  char cVar4;
  char cVar5;
  unsigned int uVar2;
  
  iVar1 = fn_82247000(*(unsigned int *)(param_1 + 0x38));
  cVar3 = fn_8288D868(*(unsigned int *)(param_1 + 0x38));
  cVar4 = fn_8288E940(*(unsigned int *)(param_1 + 0x38));
  cVar5 = fn_828B1340(*(unsigned int *)(param_1 + 8));
  if (cVar3 == '\0') {
    return;
  }
  if (cVar4 == '\0') {
    return;
  }
  if (cVar5 != '\0') {
    return;
  }
  if (iVar1 == 0) {
    cVar3 = fn_82247068(*(unsigned int *)(param_1 + 0x38),1);
    if (cVar3 == '\0') goto LAB_82246a2c;
    uVar2 = *(unsigned int *)(param_1 + 0x38);
  }
  else {
    if (iVar1 == 2) {
      fn_828AE818(*(unsigned int *)(param_1 + 8),0x1c);
      goto LAB_82246a2c;
    }
    if (iVar1 != 3) goto LAB_82246a2c;
    cVar3 = fn_82247068(*(unsigned int *)(param_1 + 0x38),4);
    uVar2 = *(unsigned int *)(param_1 + 0x38);
    if (cVar3 == '\0') {
      fn_822474A8();
      goto LAB_82246a2c;
    }
  }
  fn_822471C8(uVar2,1);
LAB_82246a2c:
  *(unsigned char *)(param_1 + 0x44) = 0;
  return;
}

