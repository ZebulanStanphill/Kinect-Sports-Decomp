extern int fn_82A84B10();
extern int fn_82A84B80();
extern unsigned int lbl_8322344C;


unsigned __int64 fn_82A822A8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  char cVar3;
  
  if ((lbl_8322344C == '\0') || (iVar2 = fn_82A84B10(), *(int *)(iVar2 + 0x14) == 0)) {
    uVar1 = 0xffffffff8000ffff;
  }
  else if (((param_4 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) < 0x2000)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar1 = fn_82A84B10();
    cVar3 = fn_82A84B80(uVar1,param_3,param_4,param_1,param_2);
    if (cVar3 != '\0') {
      return 0;
    }
    uVar1 = 0xffffffff80004005;
  }
  thunk_FUN_82a2b748(uVar1);
  return 0x65b;
}

