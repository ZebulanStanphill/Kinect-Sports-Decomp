extern int fn_82524770();
extern int fn_825260E0();
extern int fn_82526260();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1F198();
extern int fn_82A1F238();
extern int fn_82A81CC0();
extern int fn_82A82160();
extern int fn_82F691F0();
extern unsigned int uStack_40;


unsigned __int64 fn_82524548(int param_1)

{
  unsigned int uVar1;
  int iVar3;
  char cVar5;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int uStack_40;
  int aiStack_3c [15];
  
  if (*(int *)(param_1 + 0xb10) == 0) {
    if (*(int *)(param_1 + 0xb04) != 0) {
      fn_8265C990(*(int *)(param_1 + 0xb04),0x21006000);
      *(unsigned int *)(param_1 + 0xb04) = 0;
    }
    if (*(int *)(param_1 + 0xb08) != 0) {
      fn_82A1F238();
      *(unsigned int *)(param_1 + 0xb08) = 0;
    }
  }
  else if ((*(int *)(param_1 + 0xb04) != 0) && (*(int *)(param_1 + 0xb08) != 0)) {
    iVar3 = param_1 + 0x1e0;
    if (*(int *)(param_1 + 0x9b4) != 1) {
      iVar3 = param_1 + 0x5c8;
    }
    fn_82526260(iVar3);
  }
  puVar7 = (unsigned int *)(param_1 + 0xa18);
  *(unsigned int *)(param_1 + 0xb0c) = 2;
  *(unsigned int *)(param_1 + 0xb04) = *(unsigned int *)(param_1 + 0xa18);
  *(unsigned int *)(param_1 + 0xb08) = *(unsigned int *)(param_1 + 0xa1c);
  *(unsigned int *)(param_1 + 0xb10) = *(unsigned int *)(param_1 + 0xa20);
  if (*(int *)(param_1 + 0x9c8) == 0) {
    iVar3 = param_1 + 0x1e0;
    if (*(int *)(param_1 + 0x9b4) != 1) {
      iVar3 = param_1 + 0x5c8;
    }
    iVar3 = fn_825260E0(iVar3,puVar7,(unsigned int *)(param_1 + 0xa1c));
    if (iVar3 != 0) {
      *(unsigned int *)(param_1 + 0xa20) = 1;
      fn_82524770(param_1);
      return 0;
    }
  }
  *(unsigned int *)(param_1 + 0x1c0) = 2;
  if (((*(int *)(param_1 + 0x9b4) == 1) && (*(int *)(param_1 + 0x9cc) != 0)) &&
     (*(int *)(param_1 + 0x9f0) != 0)) {
    cVar5 = fn_82A81CC0(param_1 + 0x1e0);
    if (cVar5 == '\x01') {
      uVar1 = *(unsigned int *)(param_1 + 0x9e8);
      uVar6 = *(unsigned int *)(param_1 + 0x9ec);
    }
    else {
      uVar1 = *(unsigned int *)(param_1 + 0xa0c);
      uVar6 = *(unsigned int *)(param_1 + 0xa10);
    }
    uVar6 = ~uVar1 & 0x93f | uVar6;
  }
  else {
    uVar6 = 0xfff;
  }
  uVar2 = fn_82A82160(uVar6 & 0xffff,&uStack_40,aiStack_3c);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar4 = fn_8265C940(uStack_40,0x21006000);
  *puVar7 = uVar4;
  uVar4 = fn_82A1F198(aiStack_3c[0] + 0xfffU & 0xfffff000,0xffffffffffffffff,0x1000,4);
  *(unsigned int *)(param_1 + 0xa1c) = uVar4;
  *(unsigned int *)(param_1 + 0xa20) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*puVar7,0,uStack_40);
}

