extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_827459D8();
extern unsigned int lbl_82005710;


void fn_82747298(int param_1)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  unsigned __int64 uVar3;
  int iVar5;
  int iVar6;
  char cVar7;
  __int64 lVar4;
  unsigned char uVar8;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    iVar5 = fn_82696958(uVar3,uVar1);
    if ((iVar5 != 0) &&
       (iVar6 = (**(int (***)())(*(int *)(iVar5 + 0x10) + 8))(iVar5 + 0x10), iVar6 == 0x11)) {
      cVar7 = fn_82695468(param_1,0x11);
      dStack_60 = lbl_82005710;
      if (cVar7 == '\0') {
        fn_826954C0(param_1,0xffffffff8200eef4,0,0);
        return;
      }
      lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
      if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
        lVar4 = 0;
      }
      *(unsigned int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
      dStack_58 = dStack_60;
      dStack_50 = dStack_60;
      dStack_48 = dStack_60;
      dStack_40 = dStack_60;
      dStack_38 = dStack_60;
      dStack_30 = dStack_60;
      dStack_28 = dStack_60;
      fn_827459D8(lVar4,*(unsigned int *)(param_1 + 0x18),&dStack_60);
      fn_827459D8(iVar5,*(unsigned int *)(param_1 + 0x18),&dStack_40);
      if ((((dStack_60 != dStack_40) || (dStack_50 != dStack_30)) || (dStack_58 != dStack_38)) ||
         (uVar8 = 1, dStack_48 != dStack_28)) {
        uVar8 = 0;
      }
      fn_826824B0(iVar5);
    }
  }
  puVar2 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar2);
  puVar2[4] = uVar8;
  *puVar2 = 2;
  return;
}

