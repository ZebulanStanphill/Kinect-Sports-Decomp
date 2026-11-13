extern unsigned int *auStack_40;
extern unsigned int *auStack_5d;
extern int fn_826BC900();
extern unsigned int uStack_5e;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;


void fn_826EF5E8(int param_1)

{
  unsigned char bVar1;
  unsigned int uVar2;
  char *pcVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char cVar6;
  unsigned char *puVar7;
  int iVar8;
  unsigned char uStack_60;
  unsigned char uStack_5f;
  unsigned char uStack_5e;
  unsigned char auStack_5d [29];
  unsigned char auStack_40 [16];
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = *(unsigned int *)(param_1 + 0x1c);
    cVar6 = ' ';
    if (uVar2 == 0) {
      cVar6 = 'f';
    }
    else if (uVar2 == 1) {
      cVar6 = (-((*(unsigned char *)(param_1 + 0x16) & 0x80) != 0) & 0xe0U) + 0x65;
    }
    else if (uVar2 < 3) {
      cVar6 = (-((*(unsigned char *)(param_1 + 0x16) & 0x80) != 0) & 0xe0U) + 0x67;
    }
    puVar7 = &uStack_5e;
    uStack_60 = 0x25;
    uStack_5f = 0x25;
    if ((*(unsigned char *)(param_1 + 0x15) & 1) != 0) {
      puVar7 = auStack_5d;
      uStack_5e = 0x2b;
    }
    bVar1 = *(unsigned char *)(param_1 + 0x16);
    if ((bVar1 & 0x10) != 0) {
      *puVar7 = 0x23;
      puVar7 = puVar7 + 1;
    }
    if ((bVar1 & 0x40) != 0) {
      *puVar7 = 0x20;
      puVar7 = puVar7 + 1;
    }
    if ((bVar1 & 0x20) != 0) {
      *puVar7 = 0x2d;
      puVar7 = puVar7 + 1;
    }
    if ((*(unsigned char *)(param_1 + 0x14) & 0xfe) == 0x60) {
      *puVar7 = 0x30;
      puVar7 = puVar7 + 1;
    }
    uVar2 = *(unsigned int *)(param_1 + 0x10);
    uVar4 = uVar2 >> 0x16 & 0x1f;
    if (uVar4 == 1) {
      *puVar7 = 0x2e;
      puVar7[1] = 0x25;
      puVar7[2] = 100;
      puVar7[3] = cVar6;
      puVar7[4] = 0;
      fn_826BC900(auStack_40,0x20,&uStack_60,uVar2 >> 0x1b);
    }
    else {
      *puVar7 = 0x25;
      puVar7[1] = 100;
      puVar7[2] = 0x2e;
      puVar7[3] = 0x25;
      puVar7[4] = 100;
      puVar7[5] = cVar6;
      puVar7[6] = 0;
      fn_826BC900(auStack_40,0x20,&uStack_60,uVar4,uVar2 >> 0x1b);
    }
    iVar8 = param_1 + 0x2c;
    uVar5 = fn_826BC900(iVar8,0x15c,auStack_40,*(unsigned __int64 *)(param_1 + 0x20));
    *(unsigned int *)(param_1 + 0x28) = uVar5;
    *(int *)(param_1 + 0x18) = iVar8;
    cVar6 = *(char *)(param_1 + 0x2c);
    while (cVar6 != '\0') {
      pcVar3 = *(char **)(param_1 + 0x18);
      if (*pcVar3 == ',') {
        *pcVar3 = '.';
        break;
      }
      *(char **)(param_1 + 0x18) = pcVar3 + 1;
      cVar6 = pcVar3[1];
    }
    *(int *)(param_1 + 0x18) = iVar8;
    *(unsigned char *)(param_1 + 8) = 1;
  }
  return;
}

