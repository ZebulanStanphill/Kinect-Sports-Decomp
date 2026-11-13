extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82361390();
extern int fn_823BC360();
extern int fn_823BCD98();
extern int fn_82446A88();
extern int fn_8265C9E0();
extern unsigned int iStack_44;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B9018;


void fn_8242A608(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  char cVar7;
  unsigned int *puVar6;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  unsigned char auStack_48 [4];
  int iStack_44;
  
  uVar4 = fn_8265C9E0(0x18);
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    puVar5 = (unsigned int *)uVar4;
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_821AD588;
    if (uVar4 != 0xfffffffffffffff4) {
      fn_82446A88();
    }
  }
  puVar5 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar5 == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)0x0;
  }
  else {
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_821AD588;
    if (puVar5 + 3 != (unsigned int *)0x0) {
      puVar5[4] = 0;
      puVar5[3] = &lbl_821B9018;
      puVar5[5] = 0;
      puVar5[6] = 0;
      if (((uVar4 & 0xffffffff) != 0) && (cVar7 = fn_8223AAC0(uVar4), cVar7 != '\0')) {
        if (puVar5[6] != 0) {
          fn_822315A0();
        }
        puVar5[6] = (int)uVar4;
        puVar5[5] = (int)uVar4 + 0xc;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  *(unsigned int **)(param_1 + 0x3c) = puVar5;
  *(unsigned int **)(param_1 + 0x38) = puVar5 + 3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  puVar5 = (unsigned int *)fn_8265C9E0(0x40);
  if (puVar5 == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)0x0;
  }
  else {
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_821A8D8C;
    if (puVar5 + 4 != (unsigned int *)0x0) {
      fn_823BCD98(puVar5 + 4,6,6,6,6,6,6);
    }
  }
  puStack_50 = puVar5 + 4;
  puStack_4c = puVar5;
  puVar6 = (unsigned int *)fn_82361390(auStack_48,&puStack_50);
  uVar2 = puVar6[1];
  uVar3 = *puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  iVar1 = *(int *)(param_1 + 0x34);
  *(unsigned int *)(param_1 + 0x34) = uVar2;
  *(unsigned int *)(param_1 + 0x30) = uVar3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  fn_823BC360(param_1,param_1 + 0x38);
  fn_823BC360(param_1,param_1 + 0x30);
  if (puVar5 != (unsigned int *)0x0) {
    fn_822315A0(puVar5);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_822315A0(uVar4);
  }
  return;
}

