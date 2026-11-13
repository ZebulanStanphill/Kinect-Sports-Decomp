extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEA280();
extern int fn_82E1AA80();


void fn_82E1AEC0(unsigned __int64 param_1,int param_2,int param_3,int param_4)
{
  unsigned int uVar1;
  int iVar2;
  unsigned int iVar3;
  unsigned int *puVar4;
  int cnt;

  if (0 < param_3) {
    puVar4 = (unsigned int *)(param_2 + -0x18);
    cnt = param_3;
    do {
      iVar3 = puVar4[8];
      if (((iVar3 != 0) && (iVar2 = fn_82CEA220(param_4,iVar3), iVar2 <= *(int *)(param_4 + 8))) &&
         (iVar2 = fn_82CEA280(param_4,iVar3,0), iVar2 != 0)) {
        fn_82E1AA80(param_1,iVar3,1);
        iVar2 = fn_82CE5410();
        fn_82CEA160(param_4,*(unsigned int *)(iVar2 + 0x10),iVar3,0);
      }
      puVar4 = puVar4 + 6;
      uVar1 = *puVar4;
      iVar3 = fn_82CE5410();
      fn_82CE5338(*(unsigned int *)(iVar3 + 0x10),uVar1);
      cnt = cnt + -1;
    } while (cnt != 0);
  }
  iVar3 = fn_82CE5410();
  fn_82CE5338(*(unsigned int *)(iVar3 + 0x10),param_2);
  return;
}
