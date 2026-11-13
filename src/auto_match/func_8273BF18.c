extern unsigned int *auStack_b0;
extern int fn_82681838();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82739680();
extern int fn_8273BDD8();
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_e0;
extern unsigned int lbl_82011DEC;
extern unsigned int lbl_82011DF0;
extern unsigned int lbl_831565D0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_dc;


void fn_8273BF18(int param_1)

{
  char cVar3;
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int iVar7;
  int iStack_e0;
  unsigned int uStack_dc;
  int iStack_d8;
  struct { int first; int second; } stack_pair_d4;

  int iStack_cc;
  int aiStack_c8 [2];
  unsigned int uStack_c0;
  unsigned char *puStack_bc;
  unsigned int uStack_b8;
  unsigned char auStack_b0 [176];
  
  cVar3 = fn_82695468(param_1,0x23);
  if (cVar3 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eeb4,0,0);
  }
  else {
    iVar2 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar2 = 0;
    }
    uVar4 = 0;
    iStack_d8 = 0;
    uVar5 = 0;
    uVar1 = fn_82739680(*(unsigned int *)(iVar2 + 0x54),0);
    do {
      iVar7 = (int)(((uVar1 & 0xff) * 0xc + uVar5 & 0xffffffff) << 2);
      if (*(int *)(iVar2 + 0x58) < *(int *)(&lbl_82011DF0 + iVar7)) {
        if ((int)uVar5 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(&lbl_82011DEC + iVar7);
        }
        iStack_d8 = (*(int *)(iVar2 + 0x58) - iVar7) + 1;
        uVar4 = uVar5;
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0xc);
    uVar1 = *(unsigned __int64 *)(iVar2 + 0x48);
    if ((__int64)uVar1 < 0) {
      lVar6 = (3 - (__int64)((uVar1 ^ (__int64)uVar1 >> 0x3f) - ((__int64)uVar1 >> 0x3f)) /
                   86400000) % 7 + 7;
    }
    else {
      lVar6 = (__int64)uVar1 / 86400000 + 4;
    }
    iStack_e0 = *(int *)(iVar2 + 0x50);
    uStack_dc = *(unsigned int *)((int)&lbl_831565D0 + (int)((lVar6 % 7 & 0xffffffffU) << 2));
    stack_pair_d4.first = (iStack_e0 % 60000) / 1000;
    iStack_cc = (*(int *)(iVar2 + 0x5c) % 3600000) / 60000;
    aiStack_c8[0] = (iStack_e0 % 3600000) / 60000;
    stack_pair_d4.second = *(int *)(iVar2 + 0x5c) / 3600000;
    iStack_e0 = iStack_e0 / 3600000;
    puStack_bc = auStack_b0;
    uStack_c0 = 2;
    uStack_b8 = 0x80;
    fn_8273BDD8(&uStack_c0,0xffffffff8201206c,&uStack_dc,(uVar4 & 0x3fffffff) * 4 + -0x7cea9a14,
                  &iStack_d8,&iStack_e0,aiStack_c8,&stack_pair_d4.first);
    iVar2 = fn_82694700((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,auStack_b0);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    iStack_e0 = iVar2;
    fn_82681838(*(unsigned int *)(param_1 + 4),&iStack_e0);
    lVar6 = (unsigned __int64)*(unsigned int *)(iVar2 + 8) - 1;
    *(int *)(iVar2 + 8) = (int)lVar6;
    if (lVar6 == 0) {
      fn_826944C8(iVar2);
    }
  }
  return;
}

