extern int memcpy();
extern int fn_82FA5060();
extern int fn_82FB6710();
extern int fn_82FB6C88();
extern unsigned int iStack_80;
extern unsigned int iStack_90;
extern unsigned int lbl_831BC768;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


unsigned __int64 fn_82FB6808(int param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  char cVar4;
  unsigned int uVar5;
  unsigned short uVar6;
  unsigned int uVar7;
  unsigned char *pbVar8;
  struct { unsigned int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_98;
  unsigned int uStack_94;
  int iStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  int iStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned short uStack_74;
  unsigned int *puStack_70;
  
  fn_82FB6710();
  uVar5 = 0;
  if (param_2 != 0) {
    pbVar8 = (unsigned char *)(param_3 + 0x18);
    uVar6 = uStack_74;
    uVar7 = uStack_8c;
    do {
      stack_pair_a0.first = *(unsigned int *)(pbVar8 + -0x18);
      stack_pair_a0.second = *(unsigned int *)(pbVar8 + -0x14);
      uVar6 = uVar6 & 0xfff;
      uStack_74 = (*(short *)(pbVar8 + 0x18) << 1 | pbVar8[0x1a] & 1) << 0xc | uVar6;
      uStack_98 = *(unsigned int *)(pbVar8 + -0x10);
      uStack_94 = *(unsigned int *)(pbVar8 + -0xc);
      uStack_88 = *(unsigned int *)(pbVar8 + 4);
      uVar7 = ((*(unsigned int *)(pbVar8 + -4) & 0x1f) << 1 | *pbVar8 & 1) << 0x1a | uVar7 & 0x3ffffff;
      uStack_84 = *(unsigned int *)(pbVar8 + 8);
      uStack_7c = *(unsigned int *)(pbVar8 + 0x10);
      iStack_90 = *(int *)(pbVar8 + -8) * 0x30;
      uStack_78 = *(unsigned int *)(pbVar8 + 0x14);
      iStack_80 = *(int *)(pbVar8 + 0xc) * 0x30;
      uStack_8c = uVar7;
      if (pbVar8[0x1b] == 0) {
        puStack_70 = (unsigned int *)0x0;
      }
      else {
        puStack_70 = (unsigned int *)fn_82FA5060(lbl_831BC768,0x20);
        if (puStack_70 == (unsigned int *)0x0) {
          return 2;
        }
        uVar1 = puStack_70[7];
        uVar3 = (pbVar8[0x39] & 1) << 0x1e;
        puStack_70[7] = uVar3 | uVar1 & 0xbfffffff;
        puStack_70[7] = (unsigned int)pbVar8[0x38] << 0x1f | uVar3 | uVar1 & 0x3fffffff;
        puStack_70[1] = *(unsigned int *)(pbVar8 + 0x20);
        puStack_70[2] = *(unsigned int *)(pbVar8 + 0x24);
        puStack_70[3] = *(int *)(pbVar8 + 0x28) * 0x30;
        puStack_70[4] = *(unsigned int *)(pbVar8 + 0x2c);
        puStack_70[5] = *(unsigned int *)(pbVar8 + 0x30);
        puStack_70[6] = *(int *)(pbVar8 + 0x34) * 0x30;
        *puStack_70 = *(unsigned int *)(pbVar8 + 0x1c);
      }
      uVar1 = (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0)) / 0x34;
      if (((*(unsigned int *)(param_1 + 0xa8) <= uVar1) &&
          (cVar4 = fn_82FB6C88(param_1 + 0xa0,1), cVar4 == '\0')) ||
         (*(unsigned int *)(param_1 + 0xa8) <= uVar1)) {
        return 2;
      }
      iVar2 = *(int *)(param_1 + 0xa4);
      *(int *)(param_1 + 0xa4) = iVar2 + 0x34;
      if (iVar2 == 0) {
        return 2;
      }
      memcpy(iVar2,&stack_pair_a0.first,0x34);
      uVar5 = uVar5 + 1;
      pbVar8 = pbVar8 + 0x54;
    } while (uVar5 < param_2);
  }
  return 1;
}

