extern unsigned int *auStack_1f00;
extern unsigned int *auStack_f90;
extern int fn_82A8C620();
extern int fn_82A8D2F8();
extern int fn_82A8F228();
extern unsigned int lbl_8201DCB8;
extern unsigned int uStack_1f08;
extern unsigned int uStack_1f14;
extern unsigned int uStack_1f18;
extern unsigned int uStack_1f1c;
extern unsigned int uStack_1f20;


unsigned __int64 fn_82A8F4B8(int *param_1,int *param_2,__int64 param_3)

{
  char cVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_1f20;

  unsigned int uStack_1f18;
  unsigned int uStack_1f14;
  unsigned int uStack_1f08;
  unsigned char auStack_1f00 [3952];
  unsigned char auStack_f90 [3968];
  
  puVar3 = (unsigned int *)*param_1;
  uStack_1f14 = 0x48;
  stack_pair_1f20.first = lbl_8201DCB8;
  uStack_1f08 = lbl_8201DCB8;
  uStack_1f18 = lbl_8201DCB8;
  stack_pair_1f20.second = lbl_8201DCB8;
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = &stack_pair_1f20.first;
  }
  cVar2 = (**(int (***)())(*param_2 + 4))(param_2);
  if ((cVar2 == '\0') ||
     (cVar2 = (**(int (***)())(*param_2 + 0x10))(param_2,auStack_1f00,0xf6e,&stack_pair_1f20.first), cVar2 == '\0'
     )) {
    uVar1 = 0;
  }
  else {
    fn_82A8D2F8(auStack_f90,auStack_1f00,0xf6e);
    fn_82A8C620(auStack_f90,0,0x20,param_3);
    fn_82A8F228(puVar3,param_3 + 4,auStack_f90,0x20);
    uVar1 = 1;
  }
  return uVar1;
}

