unsigned __int64 fn_82BB5FA0(int param_1,unsigned __int64 param_2)

{
  unsigned char cVar1;
  int iVar2;
  unsigned int *puVar3;
  
  iVar2 = 0;
  puVar3 = (unsigned int *)(param_1 + 8);
  do {
    cVar1 = (*(int (**)())(*(int *)*puVar3 + 4))((int *)*puVar3,param_2);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 2);
  return 1;
}

