#define true 1
extern int fn_8255BFC0();
extern unsigned int lbl_831C119C;


unsigned __int64 fn_825BBBE0(int param_1,int param_2)

{
  unsigned short *puVar1;
  int (**pcVar2)();
  int iVar4;
  char cVar5;
  unsigned __int64 uVar3;
  unsigned short *puVar6;
  
  puVar6 = *(unsigned short **)(*(int *)(param_2 + 0x34) + 4);
  puVar1 = *(unsigned short **)(*(int *)(param_2 + 0x34) + 8);
  while( true ) {
    if (puVar1 <= puVar6) {
      return 0xffffffffffffffff;
    }
    iVar4 = fn_8255BFC0(*(unsigned int *)(param_1 + 0x2fc),*puVar6);
    if (*(int (***)())(&lbl_831C119C + (unsigned int)*(unsigned short *)(iVar4 + 4) * 0x10) == (int (**)())0x0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = (**(int (***)())(&lbl_831C119C + (unsigned int)*(unsigned short *)(iVar4 + 4) * 0x10))(iVar4,param_1);
    }
    if (cVar5 != '\0') break;
    puVar6 = puVar6 + 1;
  }
  pcVar2 = *(int (***)())((unsigned int)*(unsigned short *)(iVar4 + 4) * 0x10 + -0x7ce3ee5c);
  if (pcVar2 != (int (**)())0x0) {
    uVar3 = (*pcVar2)(iVar4);
    return uVar3;
  }
  return 0xffffffffffffffff;
}

