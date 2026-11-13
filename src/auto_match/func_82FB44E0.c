extern int fn_82FA8938();


void fn_82FB44E0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  if ((*(unsigned char *)(param_1 + 0x30) & 0x80) == 0) {
    fn_82FA8938();
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x1c);
    (*(int (**)())*(unsigned int *)(iVar1 + 4))(iVar1 + 4,param_2);
  }
  return;
}

