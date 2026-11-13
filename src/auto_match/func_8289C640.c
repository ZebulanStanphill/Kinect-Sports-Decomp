extern int fn_82243568();
extern int fn_8236D750();
extern int fn_8240D928();
extern int fn_8265C9E0();
extern int fn_82898308();
extern int fn_8289C1A0();
extern unsigned int lbl_820239B4;
extern unsigned int lbl_820239D4;
extern unsigned int lbl_820239F4;
extern unsigned int lbl_82197140;


void fn_8289C640(int param_1,char param_2,unsigned __int64 param_3)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  
  fn_8289C1A0();
  if (param_2 == '\0') {
    puVar2 = (unsigned int *)fn_8265C9E0(0x24);
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      *puVar2 = &lbl_820239F4;
      puVar2[2] = &lbl_820239B4;
      puVar2[3] = 9;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
    }
    *(unsigned int **)(param_1 + 0x20) = puVar2;
    uVar5 = 0;
    do {
      *(unsigned char *)((int)puVar2 + uVar5 + 4) = 0;
      uVar3 = fn_8240D928(param_3);
      if (uVar5 == uVar3) {
        iVar4 = param_1 + 4;
      }
      else {
        iVar4 = fn_8236D750(*(unsigned int *)(param_1 + 0x18));
      }
      fn_82898308(puVar2 + 2,uVar5,iVar4,0);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
    *(unsigned char *)(param_1 + 0x24) = 0;
  }
  else {
    puVar2 = (unsigned int *)fn_8265C9E0(0x1c);
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      *puVar2 = &lbl_820239D4;
      puVar2[3] = &lbl_82197140;
      puVar2[4] = 9;
      puVar2[5] = 0;
      puVar2[6] = 0;
    }
    *(unsigned int **)(param_1 + 0x20) = puVar2;
    *(unsigned char *)(puVar2 + 2) = 0;
    *(unsigned char *)((int)puVar2 + 9) = 0;
    uVar1 = fn_8236D750(*(unsigned int *)(param_1 + 0x18));
    fn_82243568(puVar2 + 3,0,uVar1,0);
    puVar2[1] = (int)param_3;
    *(unsigned char *)(param_1 + 0x24) = 1;
  }
  return;
}

