extern unsigned int *auStack_120;
extern unsigned int *auStack_150;
extern unsigned int *auStack_a0;
extern int fn_82A8C620();
extern int fn_82A8D3A0();
extern int fn_82A8EA88();
extern unsigned int lbl_8201DCB8;
extern unsigned int uStack_134;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;


unsigned __int64 fn_82A8EF40(int *param_1,int *param_2,__int64 param_3)

{
  char cVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int auStack_150;
  struct { unsigned int first; unsigned int second; } stack_pair_148;

  unsigned int uStack_140;
  unsigned int uStack_134;
  unsigned char auStack_120 [128];
  unsigned char auStack_a0 [160];
  
  puVar3 = (unsigned int *)*param_1;
  uStack_140 = 3;
  auStack_150 = lbl_8201DCB8;
  uStack_134 = lbl_8201DCB8;
  stack_pair_148.first = lbl_8201DCB8;
  stack_pair_148.second = lbl_8201DCB8;
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = &stack_pair_148.first;
  }
  cVar2 = (**(int (***)())(*param_2 + 4))(param_2);
  if ((cVar2 == '\0') ||
     (cVar2 = (**(int (***)())(*param_2 + 0x10))(param_2,auStack_a0,0x76,&auStack_150), cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    fn_82A8D3A0(auStack_120,auStack_a0,0x76);
    fn_82A8C620(auStack_120,0,0x20,param_3);
    fn_82A8EA88(puVar3,param_3 + 4,auStack_120,0x20);
    uVar1 = 1;
  }
  return uVar1;
}

