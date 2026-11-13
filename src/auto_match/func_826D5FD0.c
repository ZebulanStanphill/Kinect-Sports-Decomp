extern unsigned int *auStack_38;
extern int fn_82683F88();
extern int fn_8268ACE8();
extern int fn_826CD8A8();
extern int fn_826D2840();


void fn_826D5FD0(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  char cVar1;
  char cVar3;
  int iVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  unsigned char bVar7;
  int iVar8;
  unsigned int *puStack_40;
  unsigned int *puStack_3c;
  unsigned int auStack_38 [14];
  
  iVar8 = param_1 + 0x14;
  puStack_40 = (unsigned int *)0x0;
  cVar3 = fn_826CD8A8(iVar8,param_2,&puStack_40);
  if ((cVar3 == '\x01') && ((param_3 & 0xffffffff) != 0)) {
    fn_82683F88(param_3 + 0xc,0xffffffff8200c458,*(unsigned int *)(param_1 + 0x1c),
                      ((unsigned __int64)*param_2 & 0xfffffffc) + 8,puStack_40);
  }
  iVar2 = fn_8268ACE8(param_2);
  if (iVar2 != 0) {
    pcVar6 = (char *)((*param_2 & 0xfffffffc) + 8);
    if (*pcVar6 == '_') {
      pcVar4 = "_up";
      pcVar5 = pcVar6;
      do {
        cVar3 = *pcVar5;
        cVar1 = *pcVar4;
        if (cVar3 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 == cVar1);
      if (cVar3 == cVar1) {
        bVar7 = *(unsigned char *)(param_1 + 0x34) | 1;
      }
      else {
        pcVar4 = "_down";
        pcVar5 = pcVar6;
        do {
          cVar3 = *pcVar5;
          cVar1 = *pcVar4;
          if (cVar3 == '\0') break;
          pcVar5 = pcVar5 + 1;
          pcVar4 = pcVar4 + 1;
        } while (cVar3 == cVar1);
        if (cVar3 == cVar1) {
          bVar7 = *(unsigned char *)(param_1 + 0x34) | 2;
        }
        else {
          pcVar5 = "_over";
          do {
            cVar3 = *pcVar6;
            cVar1 = *pcVar5;
            if (cVar3 == '\0') break;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          } while (cVar3 == cVar1);
          if (cVar3 != cVar1) goto LAB_826d6128;
          bVar7 = *(unsigned char *)(param_1 + 0x34) | 4;
        }
      }
      *(unsigned char *)(param_1 + 0x34) = bVar7;
    }
  }
LAB_826d6128:
  auStack_38[0] = *(unsigned int *)(param_1 + 0x1c);
  puStack_3c = auStack_38;
  puStack_40 = param_2;
  fn_826D2840(iVar8,iVar8,&puStack_40);
  return;
}

