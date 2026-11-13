extern unsigned int *auStack_20;
extern int fn_8249ABC0();
extern int fn_8249B598();
extern int fn_8249F490();
extern int fn_82F4EBE8();
extern int fn_82F52188();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_82475290(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned char auStack_20 [16];
  
  uVar2 = fn_8249ABC0();
  fn_8249B598(uVar2,param_1);
  piVar3 = (int *)fn_82F4EBE8();
  if ((piVar3 != (int *)0x0) && (iVar4 = (**(int (***)())(*piVar3 + 4))(piVar3), iVar4 != 0)) {
    iVar4 = fn_8249ABC0();
    puVar1 = *(unsigned int **)(iVar4 + 0xec);
    uStack_30 = *puVar1;
    uStack_2c = puVar1[1];
    uStack_28 = puVar1[2];
    uStack_24 = puVar1[3];
    fn_82F52188(auStack_20,piVar3,1);
    iVar4 = fn_8249F490(&uStack_30);
    if (iVar4 != 0) {
      return 1;
    }
  }
  return 0;
}

