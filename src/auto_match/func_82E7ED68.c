extern int fn_82E7EC68();
extern int fn_82E7ECB8();
extern unsigned int uStack_10;


unsigned __int64 fn_82E7ED68(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned short *puVar4;
  unsigned int uStack_10;
  int aiStack_c;
  
  uStack_10 = 0;
  aiStack_c = 0;
  uVar2 = 0;
  if (param_3 == (unsigned int *)0x0) {
    return 0xffffffff80004003;
  }
  puVar4 = (unsigned short *)param_1;
  if ((*puVar4 & 0x1000) == 0) {
    if ((param_2 & 0xffffffff) == 0) {
      uVar1 = *puVar4 & 0xfff;
      if ((uVar1 == 0xc) || (uVar1 == 0x48)) {
        puVar4 = *(unsigned short **)(puVar4 + 4);
      }
      else {
        puVar4 = puVar4 + 4;
      }
LAB_82e7ee28:
      *param_3 = puVar4;
      return uVar2;
    }
  }
  else {
    uVar2 = fn_82E7EC68(param_1,&uStack_10);
    iVar3 = (int)param_2;
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((param_2 & 0xffffffff) < (unsigned __int64)uStack_10) {
      uVar2 = fn_82E7ECB8(param_1,&aiStack_c);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      puVar4 = (unsigned short *)(aiStack_c * iVar3 + *(int *)((int)param_1 + 0xc));
      goto LAB_82e7ee28;
    }
  }
  return 0xffffffff80070057;
}

