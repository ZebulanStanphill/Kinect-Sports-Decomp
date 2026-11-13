extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_826A7398();
extern int fn_826FFF98();
extern unsigned int lbl_82005710;


void fn_8271BE00(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char cVar5;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned int *apuStack_30 [12];
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    puVar1 = *(unsigned char **)(param_1 + 4);
    fn_826959C8(puVar1);
    *puVar1 = 2;
    puVar1[4] = 0;
  }
  else {
    cVar5 = fn_82695468(param_1,0x1b);
    if (cVar5 == '\0') {
      fn_826954C0(param_1,0xffffffff8200ee50,0,0);
    }
    else {
      iVar6 = *(int *)(param_1 + 8) + -0x10;
      if (*(int *)(param_1 + 8) == 0) {
        iVar6 = 0;
      }
      uVar2 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,0);
      fn_82696D38(apuStack_30,uVar4,uVar2,0xffffffffffffffff,0);
      *(unsigned __int64 *)(iVar6 + 0x30) = lbl_82005710;
      uVar2 = *apuStack_30[0];
      uVar4 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
      fn_826FFF98(uVar4,iVar6,uVar2,0);
      puVar1 = *(unsigned char **)(param_1 + 4);
      fn_826959C8(puVar1);
      *puVar1 = 2;
      puVar1[4] = 1;
      uVar3 = apuStack_30[0][2];
      apuStack_30[0][2] = (int)((unsigned __int64)uVar3 - 1);
      if ((unsigned __int64)uVar3 - 1 == 0) {
        fn_826944C8(apuStack_30[0]);
      }
    }
  }
  return;
}

