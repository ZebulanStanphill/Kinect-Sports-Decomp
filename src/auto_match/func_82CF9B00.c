extern int fn_82CE5410();
extern unsigned int lbl_8323B4A0;


void fn_82CF9B00(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  uVar3 = KeTlsGetValue(lbl_8323B4A0);
  uVar1 = *param_1;
  if ((uVar1 != 0) && (*(char *)(param_1 + 4) != '\0')) {
    uVar2 = param_1[2];
    iVar4 = fn_82CE5410();
    (**(int (***)())(**(int **)(iVar4 + 0x14) + 0x10))
              (*(int **)(iVar4 + 0x14),(unsigned __int64)uVar1,(unsigned __int64)uVar2 - (unsigned __int64)uVar1,1);
  }
  iVar4 = fn_82CE5410();
  (**(int (***)())(**(int **)(iVar4 + 0x14) + 8))(*(int **)(iVar4 + 0x14),uVar3,0x14);
  KeTlsSetValue(lbl_8323B4A0,0);
  return;
}

