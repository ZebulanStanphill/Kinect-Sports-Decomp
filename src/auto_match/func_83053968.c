extern int fn_83050528();
extern int fn_830543B8();
extern int fn_83055CF0();
extern int fn_83055EE8();


void fn_83053968(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + -0x40;
  RtlEnterCriticalSection(iVar1);
  if ((*(unsigned int *)(param_1 + 0x30) == 0) && (*(unsigned int *)(param_1 + 0x34) == 0)) {
    fn_83050528(param_1 + -0x78,3);
    RtlLeaveCriticalSection(iVar1);
  }
  else {
    iVar2 = param_1 + -0x78;
    fn_83050528(iVar2,3);
    fn_83055CF0(iVar2);
    fn_830543B8(iVar2,0);
    RtlLeaveCriticalSection(iVar1);
    fn_83055EE8(*(unsigned int *)(param_1 + -0x18),iVar2);
  }
  return;
}

