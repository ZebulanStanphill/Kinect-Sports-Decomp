#define true 1
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_828F0170();
extern int fn_8297F6B8();
extern unsigned int iStack_3c;
extern unsigned int iStack_4c;


unsigned __int64 fn_8297FF30(unsigned __int64 param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  char *pcVar7;
  char *pcVar8;
  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned char auStack_40 [4];
  int iStack_3c;
  
  if ((param_3 == 0) != (*(int *)(param_2 + 0x24) == 0)) {
    return 0xffffffffffffffff;
  }
  if (param_3 != 0) {
    iVar5 = fn_828F0170(*(unsigned int *)(*(int *)(param_2 + 0x24) + 0x18),0,auStack_50);
    if ((iVar5 < 0) ||
       (iVar5 = fn_828F0170(*(unsigned int *)(param_3 + 0x18),0,auStack_40), iVar5 < 0)) {
      pcVar8 = *(char **)(param_3 + 0x18);
      pcVar7 = *(char **)(*(int *)(param_2 + 0x24) + 0x18);
      do {
        cVar1 = *pcVar8;
        cVar2 = *pcVar7;
        if (cVar1 == '\0') break;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) {
        return 0xffffffffffffffff;
      }
    }
    else if (iStack_4c != iStack_3c) {
      return 0xffffffffffffffff;
    }
  }
  uVar6 = (unsigned __int64)*(unsigned int *)(param_2 + 0x2c);
  do {
    if (uVar6 == 0) {
LAB_82980094:
      if ((param_4 & 0xffffffff) != 0) {
        return 0xffffffffffffffff;
      }
      return 0;
    }
    if ((param_4 & 0xffffffff) == 0) {
      if (uVar6 != 0) {
        return 0xffffffffffffffff;
      }
      goto LAB_82980094;
    }
    iVar5 = *(int *)(*(int *)((int)uVar6 + 8) + 0x18);
    iVar3 = *(int *)(*(int *)((int)param_4 + 8) + 0x18);
    if (*(int *)(iVar5 + 0x2c) != *(int *)(iVar3 + 0x2c)) {
      return 0xffffffffffffffff;
    }
    iVar5 = fn_8297F6B8(param_1,*(unsigned int *)(iVar5 + 0x30),*(unsigned int *)(iVar3 + 0x30));
    if (iVar5 == 0) {
      return 0xffffffffffffffff;
    }
    do {
      uVar4 = *(unsigned int *)((int)uVar6 + 0xc);
      uVar6 = (unsigned __int64)uVar4;
      if (uVar6 == 0) break;
    } while (*(int *)(*(int *)(uVar4 + 8) + 4) != 6);
    do {
      uVar4 = *(unsigned int *)((int)param_4 + 0xc);
      param_4 = (unsigned __int64)uVar4;
      if (param_4 == 0) break;
    } while (*(int *)(*(int *)(uVar4 + 8) + 4) != 6);
  } while( true );
}

