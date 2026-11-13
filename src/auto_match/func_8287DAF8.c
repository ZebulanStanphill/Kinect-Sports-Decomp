extern int fn_8287D6D8();
extern int fn_828821A0();
extern int fn_82882218();
extern unsigned int iStack_1c;
extern unsigned int lbl_83211898;
extern unsigned int uStack_20;


void fn_8287DAF8(int param_1,int param_2)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int uStack_20;
  int iStack_1c;
  
  uVar1 = *(unsigned int *)(param_2 + 0x18);
  cVar2 = fn_828821A0(uVar1);
  if ((cVar2 == '\0') && (cVar2 = fn_82882218(uVar1), cVar2 == '\0')) {
    uStack_20 = uVar1;
    fn_8287D6D8(&iStack_1c,param_1 + 0xf0,&uStack_20);
    lbl_83211898 = lbl_83211898 + 1;
    *(int *)(iStack_1c + 0x40) = *(int *)(iStack_1c + 0x40) + 1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

