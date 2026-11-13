extern int fn_8288E040();
extern int fn_828C9918();
extern unsigned int iStack_30;


void fn_828C99A0(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iStack_30;
  int aiStack_2c;
  
  iStack_30 = param_3;
  fn_828C9918(&aiStack_2c,param_1 + 8,&iStack_30);
  iVar1 = aiStack_2c;
  if (aiStack_2c != *(int *)(param_1 + 0xc)) {
    iVar2 = aiStack_2c + 0x18;
    aiStack_2c = param_2;
    fn_8288E040(&iStack_30,iVar2,&aiStack_2c);
    if ((param_4 != '\0') && (*(__int64 *)(iStack_30 + 0x18) == *(__int64 *)(iVar1 + 0x38))) {
      *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + -1;
    }
    *(unsigned __int64 *)(iStack_30 + 0x18) = 1;
  }
  return;
}

