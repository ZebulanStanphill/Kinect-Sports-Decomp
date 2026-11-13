extern int fn_82239010();
extern int fn_825178E0();
extern int fn_828B01F8();
extern unsigned int uStack_60;


void fn_828AEA30(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int *piVar5;
  unsigned char uStack_60;
  
  puVar1 = *(unsigned int **)(param_1 + 0x58);
  *(unsigned int *)(param_1 + 0x58) = 0;
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  fn_828B01F8(param_1 + 0x278);
  piVar5 = (int *)(param_1 + 0x10c);
  lVar4 = 4;
  do {
    iVar2 = *piVar5;
    if (piVar5[-1] != iVar2) {
      uVar3 = fn_825178E0(iVar2,iVar2,piVar5[-1],uStack_60);
      fn_82239010(uVar3,*piVar5,piVar5 + 2,uStack_60);
      *piVar5 = (int)uVar3;
    }
    iVar2 = piVar5[0x10];
    if (piVar5[0xf] != iVar2) {
      uVar3 = fn_825178E0(iVar2,iVar2,piVar5[0xf],uStack_60);
      fn_82239010(uVar3,piVar5[0x10],piVar5 + 0x12,uStack_60);
      piVar5[0x10] = (int)uVar3;
    }
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 4;
  } while (lVar4 != 0);
  *(unsigned char *)(param_1 + 0x1ac) = 0;
  return;
}

