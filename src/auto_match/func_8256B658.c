extern int fn_82569B10();
extern int fn_8256B310();


void fn_8256B658(int param_1)

{
  unsigned char bVar1;
  char cVar2;
  unsigned short uVar3;
  unsigned short *puVar4;
  int iVar5;
  unsigned int uVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    bVar1 = *(unsigned char *)(param_1 + 0x28);
    if (((bVar1 & 0x80) == 0) && ((bVar1 & 0x20) == 0)) {
      *(unsigned char *)(param_1 + 0x28) = bVar1 & 0x7f | 0x80;
      iVar5 = fn_82569B10();
      puVar4 = *(unsigned short **)(iVar5 + 0x70);
      uVar3 = puVar4[1];
      if ((unsigned int)puVar4[3] == (unsigned int)uVar3) {
        uVar6 = 0;
        puVar4[2] = 0;
      }
      else {
        uVar6 = puVar4[3] + 1;
        uVar6 = uVar6 - (uVar6 / uVar3) * (unsigned int)uVar3;
      }
      puVar4[3] = (unsigned short)uVar6;
      piVar7 = (int *)((unsigned int)*puVar4 * (uVar6 & 0xffff) + *(int *)(puVar4 + 4));
      fn_8256B310(param_1);
      iVar5 = fn_82569B10();
      cVar2 = *(char *)(iVar5 + 0x74);
      *piVar7 = param_1;
      *(char *)(piVar7 + 1) = cVar2 + '\x04';
    }
  }
  return;
}

