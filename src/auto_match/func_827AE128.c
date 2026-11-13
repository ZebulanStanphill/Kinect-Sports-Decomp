extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696958();
extern int fn_82696BC8();
extern int fn_826B32D0();
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_82015D80;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


void fn_827AE128(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  char cVar6;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned char **ppuStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  cVar6 = fn_82695468(param_1,0x1f);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee38,0,0);
  }
  else {
    iVar5 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar5 = 0;
    }
    if ((iVar5 != 0) && (0 < *(int *)(param_1 + 0x1c))) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      iVar5 = fn_82696958(uVar3,uVar1);
      if (iVar5 != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
        uVar4 = fn_826B32D0(*(int *)(param_1 + 0x18),*(unsigned int *)(iVar2 + 0x2a0),
                                  iVar2 + 0x88,0,0xffffffffffffffff);
        uStack_2c = *(unsigned int *)(param_1 + 0x18);
        uStack_28 = (unsigned int)uVar4;
        ppuStack_30 = (unsigned char **)&lbl_82015D80;
        (**(int (***)())(*(int *)(iVar5 + 0x10) + 0x20))
                  (iVar5 + 0x10,(unsigned __int64)uStack_2c + 0x78,&ppuStack_30,0,0);
        fn_82696BC8(*(unsigned int *)(param_1 + 4),uVar4);
        ppuStack_30 = &lbl_8200C4D4;
        if ((uVar4 & 0xffffffff) != 0) {
          fn_826824B0(uVar4);
        }
      }
    }
  }
  return;
}

