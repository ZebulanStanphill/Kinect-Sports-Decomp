extern unsigned int iStack00000010;
extern unsigned int iStack00000018;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;


void fn_828C4690(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iStack00000010;
  unsigned int uStack00000014;
  int iStack00000018;
  unsigned int uStack0000001c;
  
  iStack00000018 = (int)((unsigned __int64)param_2 >> 0x20);
  uStack0000001c = (unsigned int)param_2;
  uVar6 = uStack0000001c >> 2;
  if (*(unsigned int *)(iStack00000018 + 8) <= uVar6) {
    uVar6 = uVar6 - *(unsigned int *)(iStack00000018 + 8);
  }
  iStack00000010 = (int)((unsigned __int64)param_1 >> 0x20);
  uStack00000014 = (unsigned int)param_1;
  uVar7 = uStack00000014 >> 2;
  if (*(unsigned int *)(iStack00000010 + 8) <= uVar7) {
    uVar7 = uVar7 - *(unsigned int *)(iStack00000010 + 8);
  }
  iVar4 = (uStack0000001c & 3) * 4;
  iVar5 = (uStack00000014 & 3) * 4;
  iVar1 = *(int *)(*(int *)(iStack00000018 + 4) + uVar6 * 4);
  iVar2 = *(int *)(*(int *)(iStack00000010 + 4) + uVar7 * 4);
  uVar3 = *(unsigned int *)(iVar2 + iVar5);
  *(unsigned int *)(iVar2 + iVar5) = *(unsigned int *)(iVar1 + iVar4);
  *(unsigned int *)(iVar1 + iVar4) = uVar3;
  return;
}

