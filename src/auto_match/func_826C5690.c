int fn_826C5690(int *param_1,int param_2)

{
  int *piVar1;
  unsigned char cVar3;
  int uVar2;
  
  if ((((((unsigned char)((struct Flags { unsigned pad:27; unsigned flag:1; unsigned rest:4; } *)(param_1 + 0x23))->flag) != 0) && (param_1[0x6a] < 0)) &&
      (cVar3 = (*(unsigned char (**)(int *))(*param_1 + 0x6c))(param_1), cVar3 == '\0')) &&
     (piVar1 = (int *)param_1[8], piVar1 != (int *)0x0)) {
    uVar2 = (*(int (**)())(*piVar1 + 0xe8))(piVar1,param_2);
    return uVar2;
  }
  return 0;
}

