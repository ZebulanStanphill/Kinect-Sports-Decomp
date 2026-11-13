extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82341008();
extern int fn_82347890();
extern int fn_82365BD8();
extern void *fn_8265C9E0(unsigned);
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B1BD0;


unsigned int *
fn_82339488(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int *param_5)

{
  int iVar3;
  void *lVar1;
  unsigned int uVar2;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned char auStack_50 [8];
  unsigned char auStack_48 [8];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  puVar5 = param_1 + 3;
  if (puVar5 != (unsigned int *)0x0) {
    uVar4 = *param_5;
    iVar3 = fn_82365BD8(auStack_50,param_4);
    fn_82341008(puVar5,param_2,param_3,uVar4);
    *puVar5 = &lbl_821B1BD0;
    lVar1 = fn_8265C9E0(0xe0);
    if (lVar1 != 0) {uVar2=fn_82365BD8(auStack_48,iVar3);uVar4=fn_82347890(lVar1,uVar2);}else uVar4=0;
    puVar5[4] = uVar4;
    if (*(void **)(iVar3 + 4) != 0) {
      fn_822315A0(*(void **)(iVar3+4));
    }
  }
  return param_1;
}

