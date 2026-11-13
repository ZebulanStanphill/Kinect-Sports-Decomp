typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_8268B400();
extern int fn_8268B610();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696958();
extern int fn_82696D38();
extern int fn_827A7D90();
extern int fn_827A8040();
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_82015E20;
extern unsigned int uStack_2c;
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_827AC3D0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar6;
  char *pcVar4;
  unsigned __int64 uVar3;
  int iVar5;
  __int64 lVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  char in_RESERVE;
  unsigned char bVar10;
  unsigned int uStack_40;
  unsigned int *puStack_3c;
  unsigned int *apuStack_38 [2];
  unsigned char **ppuStack_30;
  unsigned int uStack_2c;
  unsigned int *puStack_28;
  
  cVar6 = fn_82695468(param_1,0x1f);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee38,0,0);
  }
  else {
    uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar9 = 0;
    }
    if (((uVar9 & 0xffffffff) != 0) && (0 < *(int *)(param_1 + 0x1c))) {
      if ((*(int *)(param_1 + 0x1c) < 2) ||
         (pcVar4 = (char *)fn_826957D0(param_1,1), *pcVar4 == '\x01')) {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        fn_82696D38(apuStack_38,uVar3,uVar1,0xffffffffffffffff,0);
        if (apuStack_38[0][4] != 0) {
          fn_827A8040(uVar9 + 0x30,*(char *)*apuStack_38[0] == '.',(char *)*apuStack_38[0],
                        0xffffffffffffffff);
        }
      }
      else {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        fn_82696D38(&puStack_3c,uVar3,uVar1,0xffffffffffffffff,0);
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,1);
        iVar5 = fn_82696958(uVar3,uVar1);
        bVar10 = (iVar5 == 0) << 1;
        apuStack_38[0] = puStack_3c;
        if (iVar5 != 0) {
          fn_8268B330(&uStack_40);
          fn_8268B610(&uStack_40,*puStack_3c,0xffffffffffffffff);
          fn_8268B400(&uStack_40,0x7b);
          uStack_2c = *(unsigned int *)(param_1 + 0x18);
          puStack_28 = &uStack_40;
          ppuStack_30 = &lbl_82015E20;
          (**(int (***)())(*(int *)(iVar5 + 0x10) + 0x20))
                    (iVar5 + 0x10,(unsigned __int64)uStack_2c + 0x78,&ppuStack_30,0,0);
          fn_8268B400(&uStack_40,0x7d);
          fn_827A7D90(uVar9 + 0x30,(unsigned int *)(uStack_40 & 0xfffffffc) + 2,
                        *(unsigned int *)(uStack_40 & 0xfffffffc) & 0x7fffffff);
          ppuStack_30 = &lbl_8200C4D4;
          lVar7 = ((unsigned __int64)uStack_40 & 0xfffffffc) + 4;
          do {
            puVar8 = (unsigned int *)lVar7;
            uVar9 = (unsigned __int64)*puVar8;
            if (in_RESERVE != '\0') {
              uVar2 = storeWordConditionalIndexed(uVar9 - 1,0,lVar7);
              *puVar8 = uVar2;
              bVar10 = 2;
            }
          } while (!(bool)(bVar10 >> 1 & 1));
          apuStack_38[0] = puStack_3c;
          if (uVar9 == 1) {
            fn_8267BE38();
            apuStack_38[0] = puStack_3c;
          }
        }
      }
      uVar2 = apuStack_38[0][2];
      apuStack_38[0][2] = (int)((unsigned __int64)uVar2 - 1);
      if ((unsigned __int64)uVar2 - 1 == 0) {
        fn_826944C8(apuStack_38[0]);
      }
    }
  }
  return;
}

