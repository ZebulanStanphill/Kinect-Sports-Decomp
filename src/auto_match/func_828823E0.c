extern int fn_82881E68();
extern int fn_8289F160();
extern int fn_82CE0678();
extern int fn_82CE06D8();
extern int fn_82CE06E8();
extern int fn_82CE06F8();
extern unsigned int iStack_3c;
extern unsigned int lbl_83212A04;
extern unsigned int uStack_40;


void fn_828823E0(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  __int64 lVar1;
  int *piVar3;
  unsigned int uStack_40;
  int iStack_3c;
  int aiStack_38;
  
  iStack_3c = param_1;
  fn_8289F160(&aiStack_38,0xffffffff83212a00,&iStack_3c);
  if ((aiStack_38 == lbl_83212A04) ||
     (piVar3 = (int *)(*(int *)(aiStack_38 + 0x10) + 0x28), *(int *)(aiStack_38 + 0x10) == 0))
  {
    piVar3 = (int *)0x0;
  }
  if ((*piVar3 != 0) && (iVar2 = fn_82CE06F8(*piVar3), iVar2 != 3)) {
    fn_82CE06D8(*piVar3);
  }
  aiStack_38 = param_1;
  fn_8289F160(&iStack_3c,0xffffffff83212a00,&aiStack_38);
  if ((iStack_3c == lbl_83212A04) ||
     (lVar1 = (unsigned __int64)*(unsigned int *)(iStack_3c + 0x10) + 0x34,
     (unsigned __int64)*(unsigned int *)(iStack_3c + 0x10) == 0)) {
    lVar1 = 0;
  }
  iVar2 = fn_82CE0678(lVar1,param_2,&uStack_40);
  if (iVar2 == 0) {
    fn_82881E68(param_1,&uStack_40);
    fn_82CE06E8(uStack_40);
  }
  return;
}

