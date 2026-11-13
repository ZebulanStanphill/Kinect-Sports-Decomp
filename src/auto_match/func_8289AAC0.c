extern int fn_82243568();
extern int fn_8236D750();
extern int fn_8265C9E0();
extern int fn_8289A818();
extern unsigned int lbl_820239B8;


void fn_8289AAC0(int param_1,char param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  uVar1 = fn_8236D750(*(unsigned int *)(param_1 + 0x18));
  fn_82243568(param_1 + 4,0,uVar1,0);
  if (param_2 == '\0') {
    puVar4 = (unsigned int *)fn_8265C9E0(0xc);
    if (puVar4 == (unsigned int *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      *puVar4 = &lbl_820239B8;
    }
    *(unsigned int **)(param_1 + 0x20) = puVar4;
    puVar4[1] = param_3;
    *(unsigned char *)(puVar4 + 2) = 0;
  }
  else {
    uVar2 = fn_8265C9E0(0x38);
    if ((uVar2 & 0xffffffff) == 0) {
      *(unsigned int *)(param_1 + 0x20) = 0;
    }
    else {
      uVar3 = fn_8289A818(uVar2,*(unsigned int *)(param_1 + 0x18),1);
      *(unsigned int *)(param_1 + 0x20) = uVar3;
    }
  }
  return;
}

