extern unsigned int *auStack_30;
extern int fn_8269F500();
extern int fn_826C8D90();


unsigned __int64 fn_826C91B0(int *param_1,unsigned __int64 param_2,__int64 param_3)

{
  char cVar3;
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int auStack_30;
  
  auStack_30 = 0xffffffff;
  cVar3 = (**(int (***)())(*(int *)param_1[0x27] + 0x34))((int *)param_1[0x27],param_2,&auStack_30,0);
  if (cVar3 == '\0') {
    iVar2 = param_1[0x20];
    if (iVar2 == 0) {
      iVar2 = fn_8269F500(param_1);
    }
    fn_826C8D90(param_1 + 3,0xffffffff8200bdd4,**(unsigned int **)(iVar2 + 0xc),param_2);
    uVar1 = 0;
  }
  else {
    (**(int (***)())(*param_1 + 0x120))(param_1,(unsigned __int64)auStack_30 + param_3);
    uVar1 = 1;
  }
  return uVar1;
}

