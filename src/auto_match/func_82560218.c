extern int fn_825602B8();
extern int fn_82560308();
extern int fn_82560758();
extern unsigned int lbl_83280B88;


unsigned __int64 fn_82560218(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned char *puVar4;
  
  puVar4 = &lbl_83280B88;
  if ((*(char *)((int)param_2 + -0x7cd7f310) != '\0') &&
     (uVar3 = param_2, iVar1 = fn_825602B8(param_2), iVar1 != 0)) {
    iVar1 = *(int *)(puVar4 + (int)((uVar3 & 0xffffffff) << 2) + 0x10);
    iVar2 = fn_82560758(param_1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_82560308(param_1,param_2,iVar1);
    }
    if ((iVar2 != 0) && (*(int *)(iVar1 + 0xcc) == 0)) {
      return 1;
    }
  }
  return 0;
}

