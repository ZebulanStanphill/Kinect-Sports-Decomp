extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_827D9630();
extern void *fn_827D9658();
extern int fn_827DE748();
extern int fn_827E0658();


unsigned int fn_827DE7A8(int param_1,unsigned int *param_2)

{
  void *uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int auStack_70;
  unsigned char auStack_60 [32];
  struct { unsigned int pair[2]; unsigned char value[32]; } entry;
  
  fn_827E0658(&auStack_70,param_1,param_2);
  uVar3 = auStack_70;
  if (uVar3 == *(unsigned int *)(param_1 + 4)) {
    uVar1 = fn_827D9658(auStack_60);
    entry.pair[0] = *param_2;
    fn_827D9630(entry.value,uVar1);
    puVar2 = (unsigned int *)fn_827DE748(&auStack_70,param_1,entry.pair);
    uVar3 = *puVar2;
  }
  return uVar3 + 0x10;
}

