extern unsigned char fn_82695468(int,int);
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_8269A1F0();
extern int fn_826A1F38();
extern int fn_826A30B8();


void fn_826A3970(int param_1)

{
  unsigned char cVar2;
  unsigned int uVar1;
  int iVar3;
  int lVar4;
  
  cVar2 = fn_82695468(param_1,7);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,"Array",0,0);
  }
  else {
    iVar3 = *(unsigned int *)(param_1+8) != 0 ? *(unsigned int *)(param_1+8) - 0x10 : 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      fn_826A30B8(iVar3,0,*(int *)(param_1+0x1c));
      lVar4 = 0;
      if (0 < *(int *)(param_1 + 0x1c)) {
        do {
          uVar1 = fn_826957D0(param_1,lVar4);
          fn_826A1F38(iVar3,lVar4,uVar1);
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < *(int *)(param_1 + 0x1c));
      }
    }
    fn_8269A1F0(*(unsigned int *)(param_1 + 4),*(unsigned int *)(iVar3 + 0x38));
  }
  return;
}

