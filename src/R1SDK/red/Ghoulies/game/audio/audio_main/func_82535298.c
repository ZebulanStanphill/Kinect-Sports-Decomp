extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern int fn_822A8928();
extern int fn_822A8D30();
extern int fn_825363B8();
extern int fn_82536690();
extern int fn_8265C9E0();
extern int fn_828647F0();
extern int fn_82864848();
extern int fn_82864898();
extern unsigned int lbl_821C3FEC;
extern unsigned int lbl_821C4014;
extern unsigned int *lbl_8327F864;
extern unsigned int *lbl_8327F868;
extern unsigned int lbl_8327F874;
extern unsigned int lbl_8327F878;


unsigned int * fn_82535298(unsigned int *param_1,unsigned __int64 param_2,int *param_3,int *param_4)

{
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar1;
  unsigned int *puVar4;
  unsigned int **ppuVar5;
  unsigned int *puStack_a0;
  unsigned int *apuStack_9c [3];
  unsigned char auStack_90 [48];
  unsigned char auStack_60 [96];
  
  fn_82864848(auStack_90);
  iVar2 = fn_822A8928(lbl_8327F878,1,*param_1,auStack_90);
  if (iVar2 < 0) {
    puVar3 = (unsigned int *)fn_8265C9E0(8);
    if (puVar3 == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      puVar3[1] = (int)param_2;
      *puVar3 = &lbl_821C4014;
    }
    puStack_a0 = puVar3;
    uVar1 = fn_828647F0(auStack_60,param_2);
    iVar2 = fn_822A8D30(lbl_8327F874,uVar1);
    if (*(char *)(iVar2 + 0x5c) != '\0') goto LAB_82535340;
    ppuVar5 = &puStack_a0;
  }
  else {
    if (((*param_3 != param_3[1]) || (*param_4 != param_4[1])) &&
       (iVar2 = fn_825363B8(lbl_8327F864,param_3,param_4), iVar2 < 0)) {
      (**(int (***)())(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x290,0xffffffff821c3c40);
    }
    puVar3 = (unsigned int *)0x0;
    puStack_a0 = (unsigned int *)0x0;
    iVar2 = (**(int (***)())(*lbl_8327F864 + 0x10))(lbl_8327F864,auStack_90,&puStack_a0);
    if (iVar2 < 0) {
      iVar2 = (**(int (***)())(*lbl_8327F864 + 0x14))(lbl_8327F864,&puStack_a0);
      if (iVar2 < 0) {
        (**(int (***)())(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x2a6,0xffffffff821c3c64);
      }
      puVar4 = (unsigned int *)fn_8265C9E0(8);
      if (puVar4 != (unsigned int *)0x0) {
        *puVar4 = &lbl_821C4014;
        puVar3 = puVar4;
LAB_8253547c:
        puVar3[1] = (int)param_2;
      }
    }
    else {
      puVar4 = (unsigned int *)fn_8265C9E0(0xc);
      if (puVar4 != (unsigned int *)0x0) {
        *puVar4 = &lbl_821C3FEC;
        puVar4[2] = puStack_a0;
        puVar3 = puVar4;
        goto LAB_8253547c;
      }
    }
    apuStack_9c[0] = puVar3;
    uVar1 = fn_828647F0(auStack_60,param_2);
    iVar2 = fn_822A8D30(lbl_8327F874,uVar1);
    if (*(char *)(iVar2 + 0x5c) != '\0') goto LAB_82535340;
    ppuVar5 = apuStack_9c;
  }
  fn_82536690(iVar2 + 0x24,ppuVar5);
LAB_82535340:
  fn_82864898(auStack_60);
  fn_82864898(auStack_90);
  return puVar3;
}

