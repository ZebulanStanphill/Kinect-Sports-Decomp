extern unsigned int *auStack_2c;
extern int fn_8256BF18();
extern int fn_8256D078();
extern int fn_8256D1B8();
extern int fn_8259BB38();
extern unsigned int uStack_30;


void fn_82460C90(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int uStack_30;
  unsigned int auStack_2c;
  
  puVar4 = (unsigned int *)(param_1 + 0x94);
  if (puVar4 != (unsigned int *)0x0) {
    uVar3 = (unsigned __int64)*puVar4;
    if (uVar3 != (uVar3 - 1) + (unsigned __int64)(uVar3 == 0)) {
      uVar1 = fn_8256BF18();
      fn_8256D078(uVar1,puVar4);
      *puVar4 = 0;
    }
  }
  if (param_2 != (unsigned int *)0x0) {
    uVar3 = (unsigned __int64)*param_2;
    if (uVar3 != (uVar3 - 1) + (unsigned __int64)(uVar3 == 0)) {
      iVar2 = fn_8256BF18();
      uStack_30 = *param_2;
      fn_8259BB38(&auStack_2c,iVar2,&uStack_30);
      uVar3 = (unsigned __int64)auStack_2c;
      if (uVar3 != *(unsigned int *)(iVar2 + 4)) {
        fn_8256D1B8(iVar2,uVar3 + 0x10,uVar3 + 0x28,*param_2);
      }
      *puVar4 = *param_2;
    }
  }
  return;
}

