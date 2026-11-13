extern int fn_82295A48();
extern int fn_82297DB0();
extern int fn_82F64988();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_822A2FE8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar4;
  
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar5 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
               (float)(__int64)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x1c)) * 0x1c;
  puVar3 = (unsigned int *)(iVar5 + *(int *)(param_1 + 8));
  if (7 < (unsigned int)puVar3[5]) {
    puVar3 = (unsigned int *)*puVar3;
  }
  fn_82F64988(param_1 + 0x1c,0x100,puVar3);
  if (1 < (unsigned int)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x1c)) {
    iVar1 = *(int *)(param_1 + 0xc);
    iVar5 = iVar5 + *(int *)(param_1 + 8);
    iVar6 = iVar5 + 0x1c;
    if (iVar6 != iVar1) {
      iVar5 = iVar5 - iVar6;
      do {
        fn_82295A48(iVar5 + iVar6,iVar6);
        iVar6 = iVar6 + 0x1c;
      } while (iVar6 != iVar1);
    }
    uVar2 = *(unsigned int *)(param_1 + 0xc);
    for (uVar4 = (unsigned __int64)uVar2 - 0x1c; (uVar4 & 0xffffffff) != (unsigned __int64)uVar2;
        uVar4 = uVar4 + 0x1c) {
      fn_82297DB0(uVar4,1,0);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -0x1c;
  }
  return;
}

