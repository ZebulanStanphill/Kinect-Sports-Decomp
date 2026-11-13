extern int fn_8236D750();
extern int fn_8240D928();
extern int fn_8265C9E0();
extern int fn_82898308();
extern int fn_8289C1A0();
extern unsigned int lbl_820239B4;
extern unsigned int lbl_82023A10;
extern unsigned int lbl_82023A30;


void fn_8289C7B0(int param_1,char param_2,unsigned __int64 param_3)

{
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar1;
  int iVar4;
  unsigned int uVar5;
  
  fn_8289C1A0();
  if (param_2 == '\0') {
    puVar2 = (unsigned int *)fn_8265C9E0(0xc);
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      *puVar2 = &lbl_82023A30;
    }
    *(unsigned int **)(param_1 + 0x20) = puVar2;
    puVar2[1] = (int)param_3;
    *(unsigned char *)(puVar2 + 2) = 0;
    *(unsigned char *)(param_1 + 0x24) = 1;
  }
  else {
    puVar2 = (unsigned int *)fn_8265C9E0(0x44);
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      *puVar2 = &lbl_82023A10;
      puVar2[4] = 9;
      puVar2[3] = &lbl_820239B4;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[0xb] = 9;
      puVar2[10] = &lbl_820239B4;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
    }
    *(unsigned int **)(param_1 + 0x20) = puVar2;
    uVar5 = 0;
    *(unsigned char *)(puVar2 + 1) = 0;
    do {
      *(unsigned char *)((int)puVar2 + uVar5 + 5) = 1;
      uVar3 = fn_8240D928(param_3);
      if (uVar5 == uVar3) {
        iVar4 = param_1 + 4;
        fn_82898308(puVar2 + 3,uVar5,iVar4,0);
      }
      else {
        uVar1 = fn_8236D750(*(unsigned int *)(param_1 + 0x18));
        fn_82898308(puVar2 + 3,uVar5,uVar1,0);
        iVar4 = fn_8236D750(*(unsigned int *)(param_1 + 0x18));
      }
      fn_82898308(puVar2 + 10,uVar5,iVar4,0);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
    *(unsigned char *)(param_1 + 0x24) = 0;
  }
  return;
}

