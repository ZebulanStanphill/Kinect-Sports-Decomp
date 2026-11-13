extern int fn_82D907E8();
extern int fn_82D91828();


void fn_82D92868(int param_1,int param_2)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  unsigned char bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  bVar5 = *(unsigned char *)(param_2 + 0x26) >> 6;
  piVar6 = (int *)(param_1 + 0x28);
  if (bVar5 == 0) {
    piVar6 = (int *)(param_1 + 0x34);
  }
  *(unsigned char *)(param_2 + 0x25) = *(unsigned char *)(param_2 + 0x25) & 0x3f;
  iVar2 = piVar6[1];
  fn_82D91828(param_2,param_1,piVar6,0);
  bVar1 = *(unsigned char *)(param_2 + 0x26);
  if (iVar2 < piVar6[1]) {
    iVar7 = iVar2 << 2;
    iVar8 = iVar2;
    do {
      iVar3 = *(int *)(*piVar6 + iVar7);
      *(unsigned char *)(iVar3 + 0x26) = *(unsigned char *)(iVar3 + 0x26) & 0xf | bVar5 << 4 | bVar5 << 6;
      if ((bVar5 != 0) && ((bVar1 >> 4 & 3) == 0)) {
        fn_82D907E8(param_1,iVar3);
      }
      cVar4 = (char)iVar8;
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 4;
      *(char *)(iVar3 + 0x24) = (cVar4 - (char)iVar2) + *(char *)(param_2 + 0x24);
    } while (iVar8 < piVar6[1]);
  }
  return;
}

