#define true 1
extern int fn_82569B10();
extern int fn_8256A9F8();


void fn_8256B720(void)

{
  unsigned short *puVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int *piVar5;
  
  iVar2 = fn_82569B10();
  *(char *)(iVar2 + 0x74) = *(char *)(iVar2 + 0x74) + '\x01';
  while( true ) {
    iVar2 = fn_82569B10();
    if (*(short *)(*(int *)(iVar2 + 0x70) + 6) == *(short *)(*(int *)(iVar2 + 0x70) + 2)) {
      return;
    }
    iVar2 = fn_82569B10();
    puVar1 = *(unsigned short **)(iVar2 + 0x70);
    if (puVar1[3] == puVar1[1]) {
      iVar2 = 0;
    }
    else {
      iVar2 = (unsigned int)puVar1[2] * (unsigned int)*puVar1 + *(int *)(puVar1 + 4);
    }
    iVar3 = fn_82569B10();
    if (*(char *)(iVar3 + 0x74) != *(char *)(iVar2 + 4)) break;
    iVar2 = fn_82569B10();
    puVar1 = *(unsigned short **)(iVar2 + 0x70);
    if (puVar1[3] == puVar1[1]) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)((unsigned int)puVar1[2] * (unsigned int)*puVar1 + *(int *)(puVar1 + 4));
    }
    iVar2 = *piVar5;
    fn_8256A9F8(iVar2);
    *(unsigned int *)(iVar2 + 0xc) = 0;
    *(unsigned char *)(iVar2 + 0x28) = *(unsigned char *)(iVar2 + 0x28) & 0x7f;
    iVar2 = fn_82569B10();
    iVar2 = *(int *)(iVar2 + 0x70);
    if ((unsigned int)*(unsigned short *)(iVar2 + 4) == (unsigned int)*(unsigned short *)(iVar2 + 6)) {
      *(unsigned short *)(iVar2 + 6) = *(unsigned short *)(iVar2 + 2);
    }
    else {
      uVar4 = *(unsigned short *)(iVar2 + 4) + 1;
      *(unsigned short *)(iVar2 + 4) =
           (short)uVar4 - (short)(uVar4 / *(unsigned short *)(iVar2 + 2)) * *(unsigned short *)(iVar2 + 2);
    }
  }
  return;
}

