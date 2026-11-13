extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_82A8BF78();
extern int fn_82A8C620();
extern int fn_82A8C770();
extern unsigned int lbl_8201DCB8;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


unsigned __int64 fn_82A8EBF8(int *param_1,int *param_2,__int64 param_3)

{
  char cVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_84;
  unsigned char auStack_80 [16];
  unsigned char auStack_50 [80];
  
  puVar3 = (unsigned int *)*param_1;
  uStack_84 = lbl_8201DCB8;
  stack_pair_90.first = lbl_8201DCB8;
  stack_pair_90.second = lbl_8201DCB8;
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = &stack_pair_90.first;
  }
  cVar2 = (**(int (***)())(*param_2 + 4))(param_2);
  if ((cVar2 == '\0') ||
     (cVar2 = (**(int (***)())(*param_2 + 0x10))(param_2,auStack_80,0x29,&stack_pair_90.first), cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    fn_82A8BF78(auStack_50,auStack_80,0x29);
    fn_82A8C620(auStack_50,0,0x20,param_3);
    fn_82A8C770(puVar3,param_3 + 4,auStack_50,0x20);
    fn_82A8C770(puVar3 + 1,param_3 + 0x38,auStack_50,0xb2);
    uVar1 = 1;
  }
  return uVar1;
}

