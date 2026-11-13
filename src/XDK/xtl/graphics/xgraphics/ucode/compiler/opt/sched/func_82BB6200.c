extern int fn_82AB15D0();
extern int fn_82BC30C0();


unsigned __int64 fn_82BB6200(int *param_1,int *param_2)

{
  char cVar3;
  int iVar1;
  int iVar2;
  unsigned __int64 uVar4;
  
  cVar3 = (**(int (***)())(*param_1 + 0x44))();
  if (cVar3 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e03e8,0xffffffff820e0168,0xd5);
  }
  cVar3 = (**(int (***)())(*param_2 + 0x44))(param_2);
  if (cVar3 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e03d4,0xffffffff820e0168,0xd6);
  }
  iVar1 = fn_82BC30C0(param_1);
  iVar2 = fn_82BC30C0(param_2);
  if ((((param_1[0x2a] != param_2[0x2a]) || (iVar1 == 0)) || (iVar2 == 0)) ||
     (uVar4 = 1, iVar1 != iVar2)) {
    uVar4 = 0;
  }
  return uVar4;
}

