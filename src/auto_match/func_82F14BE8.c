extern int fn_82F14878();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int uStack_40;
extern unsigned int uStack_50;


unsigned __int64 fn_82F14BE8(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uStack_50;
  int iStack_4c;
  struct { int first; int second; } stack_pair_48;

  unsigned int uStack_40;
  int aiStack_3c;

  uVar1 = *param_2;
  puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x48) + 0x58);
  if ((uVar1 & 4) == 0) {
    uVar3 = *(unsigned int *)(*(int *)(param_1 + 0x48) + 0x24);
    iVar5 = (0x80 >> (uVar3 & 0x3f)) + 0x1e;
    iVar6 = (int)uVar1 >> 0x10;
    if (iVar6 < iVar5) {
      if (-iVar5 <= iVar6) {
        iVar4 = (int)(uVar1 << 0x10) >> 0x14;
        if ((iVar4 < iVar5) && (-iVar5 <= iVar4)) {
          fn_82F14878(iVar6,&aiStack_3c,&iStack_4c,&stack_pair_48.first,uVar3);
          fn_82F14878(iVar4,&stack_pair_48.second,&uStack_40,&uStack_50,uVar3);
          aiStack_3c = stack_pair_48.second * 6 + aiStack_3c;
          *puVar2 = (uStack_50 + stack_pair_48.first) * 0x40000 & 0xfc0000 |
                    ((iStack_4c << (uStack_50 & 0x3f) | uStack_40) & 0x1ffff) << 1 |
                    *puVar2 & 0xff000001;
          goto LAB_82f14cec;
        }
      }
    }
    aiStack_3c = 0x24;
  }
  else {
    aiStack_3c = 0x25;
  }
  *puVar2 = *puVar2 & 0xfffc0001;
LAB_82f14cec:
  if ((*param_2 & 8) != 0) {
    aiStack_3c = aiStack_3c + 0x26;
  }
  *(char *)puVar2 = (char)aiStack_3c + -1;
  iVar6 = aiStack_3c * 4 + *(int *)(param_1 + 0x30);
  *(int *)(iVar6 + -4) = *(int *)(iVar6 + -4) + 1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return 0;
}
