extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_826826A8();
extern int fn_826827F8();
extern int fn_826944C8();
extern int fn_826959C8();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696AD0();
extern int fn_82696D38();
extern int fn_826B44A0();
extern unsigned int lbl_820071A4;
extern unsigned int lbl_8200C4D4;
extern unsigned int uStack_74;


void fn_826B53D0(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  char cVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  int aiStack_80;
  unsigned char **ppuStack_78;
  unsigned int uStack_74;
  unsigned int *puStack_70;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [32];
  
  fn_82695DA0(auStack_50,*(unsigned int *)(*param_1 + 8));
  uVar1 = *param_1;
  puVar6 = (unsigned int *)(uVar1 + 8);
  fn_82696330(*(unsigned int *)(uVar1 + 8));
  uVar5 = *puVar6;
  *puVar6 = uVar5 - 0x10;
  if (uVar5 - 0x10 < *(unsigned int *)(uVar1 + 0xc)) {
    fn_826827F8(puVar6);
  }
  auStack_60[0] = 0;
  fn_826959C8(auStack_60);
  uVar1 = *param_1;
  puVar6 = (unsigned int *)(uVar1 + 8);
  auStack_60[0] = 1;
  uVar5 = *(int *)(uVar1 + 8) + 0x10;
  *puVar6 = uVar5;
  if (*(unsigned int *)(uVar1 + 0x10) <= uVar5) {
    fn_826826A8(puVar6);
  }
  if (*puVar6 != 0) {
    fn_82695DA0(*puVar6,auStack_60);
  }
  if (param_2 == 0x55) {
    piVar2 = (int *)fn_82696AD0(auStack_50,*param_1);
    if (piVar2 == (int *)0x0) goto LAB_826b5584;
LAB_826b5514:
    puStack_70 = param_1 + 9;
    uStack_74 = *param_1;
    ppuStack_78 = (unsigned char **)&lbl_820071A4;
    (**(int (***)())(*piVar2 + 0x20))(piVar2,(unsigned __int64)uStack_74 + 0x78,&ppuStack_78,0xb,0);
    ppuStack_78 = &lbl_8200C4D4;
  }
  else {
    fn_82696D38(&aiStack_80,auStack_50,*param_1,0xffffffffffffffff,0);
    auStack_40[0] = 0;
    cVar3 = fn_826B44A0(*param_1,&aiStack_80,auStack_40,param_1[8],0,0,0);
    if (cVar3 != '\0') {
      piVar2 = (int *)fn_82696AD0(auStack_40,*param_1);
      if (piVar2 != (int *)0x0) {
        fn_82696330(auStack_40);
        lVar4 = (unsigned __int64)*(unsigned int *)(aiStack_80 + 8) - 1;
        *(int *)(aiStack_80 + 8) = (int)lVar4;
        if (lVar4 == 0) {
          fn_826944C8(aiStack_80);
        }
        goto LAB_826b5514;
      }
    }
    fn_82696330(auStack_40);
    lVar4 = (unsigned __int64)*(unsigned int *)(aiStack_80 + 8) - 1;
    *(int *)(aiStack_80 + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(aiStack_80);
    }
  }
LAB_826b5584:
  fn_82696330(auStack_60);
  fn_82696330(auStack_50);
  return;
}

