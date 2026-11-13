extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_8269A858();
extern int fn_826B0F10();
extern int fn_826BD928();
extern int fn_826C3768();
extern int fn_826CECC8();
extern int fn_826F75B8();
extern unsigned int iStack_fc;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_93;
extern unsigned int uStack_94;
extern unsigned int uStack_95;
extern unsigned int uStack_96;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


/* WARNING: Removing unreachable block (ram,0x826d125c) */
/* WARNING: Removing unreachable block (ram,0x826d118c) */
/* WARNING: Removing unreachable block (ram,0x826d1354) */
/* WARNING: Removing unreachable block (ram,0x826d1270) */
/* WARNING: Removing unreachable block (ram,0x826d11a0) */
/* WARNING: Removing unreachable block (ram,0x826d1368) */

void fn_826D1050(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  char cVar6;
  int *piVar4;
  unsigned int *puVar5;
  __int64 lVar7;
  int aiStack_120;
  unsigned int uStack_10c;
  unsigned int uStack_108;
  unsigned int uStack_104;
  struct { unsigned int first; int second; } stack_pair_100;

  unsigned char bStack_f8;
  struct { unsigned int first; unsigned int second; } stack_pair_f0;

  int *piStack_e8;
  unsigned int uStack_e4;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned char uStack_c8;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int *piStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned short uStack_98;
  unsigned char uStack_96;
  unsigned char uStack_95;
  unsigned char uStack_94;
  unsigned char uStack_93;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned char uStack_88;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  int *piStack_68;
  unsigned int uStack_64;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned char uStack_48;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;

  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(unsigned int *)(iVar1 + 0x78);
  bStack_f8 = 0;
  stack_pair_100.first = 0;
  stack_pair_100.second = 0;
  uVar3 = fn_826957D0(param_1,0);
  fn_82696D38(&aiStack_120,uVar3,iVar1,0xffffffffffffffff,0);
  if (*(int *)(aiStack_120 + 0x10) != 0) {
    cVar6 = fn_826B0F10(uVar2,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,&aiStack_120,
                              &stack_pair_100.first);
    if (cVar6 == '\0') {
      piVar4 = (int *)fn_826BD928(*(unsigned int *)(param_1 + 8));
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar4[1] + 1;
      }
      uStack_104 = (unsigned int)(((unsigned __int64)(uStack_104) >> 16) & 0xFFFF);
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar4[1] + 1;
      }
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      uStack_48 = 0;
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_6c = 2;
      uStack_70 = 0;
      uStack_108 = 0xff;
      uStack_10c = 0;
      uStack_64 = 0;
      uStack_5c = 0;
      uStack_58 = 0xff;
      uStack_54 = uStack_104;
      uStack_34 = 0;
      piStack_68 = piVar4;
      uVar3 = (**(int (***)())(*piVar4 + 0x40))(piVar4);
      fn_826F75B8(&uStack_70,uVar3);
      puVar5 = &uStack_70;
    }
    else {
      piVar4 = (int *)fn_826BD928(*(unsigned int *)(param_1 + 8));
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar4[1] + 1;
      }
      lVar7 = (unsigned __int64)stack_pair_100.first + 0x10;
      if ((unsigned __int64)stack_pair_100.first == 0) {
        lVar7 = 0;
      }
      fn_8269A858(piVar4,lVar7);
      uStack_104 = (unsigned int)(((unsigned __int64)(uStack_104) >> 16) & 0xFFFF);
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar4[1] + 1;
      }
      uStack_b8 = 0;
      uStack_bc = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_cc = 0;
      uStack_d0 = 0;
      stack_pair_f0.second = 2;
      stack_pair_f0.first = 0;
      uStack_108 = 0xff;
      uStack_10c = 0;
      uStack_e4 = 0;
      uStack_dc = 0;
      uStack_d8 = 0xff;
      uStack_d4 = uStack_104;
      uStack_b4 = 0;
      piStack_e8 = piVar4;
      uVar3 = (**(int (***)())(*piVar4 + 0x40))(piVar4);
      fn_826F75B8(&stack_pair_f0.first,uVar3);
      fn_826CECC8(&stack_pair_f0.first);
      piVar4[1] = piVar4[1] + 1;
      uStack_78 = 0;
      uStack_7c = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_8c = 0;
      uStack_90 = 0;
      uStack_93 = 0;
      uStack_94 = 0;
      uStack_95 = 0xff;
      uStack_96 = 0;
      uStack_98 = 0;
      uStack_9c = 0;
      uStack_a0 = 0;
      uStack_ac = 3;
      uStack_b0 = 0;
      uStack_a4 = 0;
      piStack_a8 = piVar4;
      fn_826C3768(&uStack_90,&stack_pair_100.first);
      uStack_74 = 0;
      uVar3 = (**(int (***)())(*piVar4 + 0x40))(piVar4);
      fn_826F75B8(&uStack_b0,uVar3);
      puVar5 = &uStack_b0;
    }
    fn_826CECC8(puVar5);
    fn_8267C498(piVar4);
  }
  lVar7 = (unsigned __int64)*(unsigned int *)(aiStack_120 + 8) - 1;
  *(int *)(aiStack_120 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(aiStack_120);
  }
  if (((bStack_f8 & 2) == 0) && (stack_pair_100.first != 0)) {
    fn_826824B0();
  }
  stack_pair_100.first = 0;
  if (((bStack_f8 & 1) == 0) && (stack_pair_100.second != 0)) {
    fn_826824B0();
  }
  return;
}
