extern unsigned int *auStack_410;
extern int fn_82F6EDE8();


void fn_82A99F28(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned char auStack_410 [1024];
  
  iVar1 = fn_82F6EDE8(auStack_410,0x400,param_2,param_3);
  if (iVar1 < 0) {
    *(unsigned int *)(param_1 + 0xc) = 0x80004005;
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar1;
  }
  return;
}

