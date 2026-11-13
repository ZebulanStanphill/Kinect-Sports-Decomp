extern unsigned int *auStack_10;
extern int fn_82865170();
extern int fn_82866400();
extern int fn_8286D418();


unsigned __int64 fn_82873AA0(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned char auStack_10 [1];
  
  for (puVar1 = (unsigned int *)**(unsigned int **)(param_1 + 4);
      (puVar1 != *(unsigned int **)(param_1 + 4) && (puVar1[2] != param_2));
      puVar1 = (unsigned int *)*puVar1) {
  }
  if (puVar1 == *(unsigned int **)(param_1 + 4)) {
    uVar2 = 0xffffffffa0120000;
  }
  else {
    fn_8286D418(auStack_10,(unsigned int *)(param_1 + 4));
    fn_82865170();
    iVar3 = fn_82866400();
    uVar2 = 0x20120000;
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
  }
  return uVar2;
}

