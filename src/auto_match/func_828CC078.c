extern int fn_8223C478();
extern int fn_8288A398();
extern int fn_82891F28();
extern int fn_828B5C88();
extern int fn_828E9DB8();


void fn_828CC078(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned int uVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x8c);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,cVar1 != '\0',1);
  fn_828B5C88(param_1 + 0x80,*(unsigned int *)(param_1 + 0x6c),param_2);
  uVar2 = *(unsigned int *)(param_1 + 0x88);
  fn_8223C478(param_2,8,0);
  fn_828E9DB8(param_2,uVar2,8);
  if (*(char *)(param_1 + 0x8c) == '\0') {
    piVar4 = (int *)fn_8288A398();
    uVar3 = (**(int (***)())(*piVar4 + 8))();
    uVar2 = *(unsigned int *)(param_1 + 0xa0);
    fn_8223C478(param_2,uVar3,0);
    fn_828E9DB8(param_2,uVar2,uVar3);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x8d);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,cVar1 != '\0',1);
    if (*(char *)(param_1 + 0x8d) == '\0') {
      fn_82891F28(param_2,param_1 + 0x90);
    }
  }
  return;
}

