extern int fn_8240D928();
extern int fn_8265C9E0();
extern int fn_82897BA8();
extern int fn_82897BE0();
extern int fn_8289A818();
extern int fn_8289C1A0();
extern unsigned int lbl_820239B8;


void fn_8289C538(int param_1,char param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  char cVar6;
  unsigned int *puVar5;
  
  fn_8289C1A0();
  if (param_2 == '\0') {
    puVar5 = (unsigned int *)fn_8265C9E0(0xc);
    if (puVar5 == (unsigned int *)0x0) {
      puVar5 = (unsigned int *)0x0;
    }
    else {
      *puVar5 = &lbl_820239B8;
    }
    *(unsigned int **)(param_1 + 0x20) = puVar5;
    puVar5[1] = (int)param_3;
    *(unsigned char *)(puVar5 + 2) = 0;
    fn_82897BE0(*(unsigned int *)(param_1 + 0x18));
    *(unsigned char *)(param_1 + 0x24) = 1;
  }
  else {
    uVar2 = fn_8265C9E0(0x38);
    if ((uVar2 & 0xffffffff) == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)fn_8289A818(uVar2,*(unsigned int *)(param_1 + 0x18),0);
    }
    *(int **)(param_1 + 0x20) = piVar4;
    iVar1 = *piVar4;
    uVar3 = fn_8240D928(param_3);
    (**(int (***)())(iVar1 + 0x28))(piVar4,uVar3,param_1 + 4);
    cVar6 = fn_82897BA8(*(unsigned int *)(param_1 + 0x18));
    if (cVar6 != '\0') {
      piVar4[3] = 3;
      piVar4[4] = 3;
      piVar4[5] = 3;
      piVar4[6] = 3;
    }
    *(unsigned char *)(param_1 + 0x24) = 0;
  }
  return;
}

