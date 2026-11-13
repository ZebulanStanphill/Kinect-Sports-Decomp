extern int fn_82E3C690();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


unsigned __int64 fn_82E3E660(int *param_1,int *param_2)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iStack_30;
  int iStack_2c;
  
  if ((*param_1 != 0) && (puVar2 = (unsigned int *)*param_2, puVar2 != (unsigned int *)0x0)) {
    uVar1 = *(unsigned short *)(puVar2 + 4);
    uVar3 = *puVar2;
    uVar5 = *(unsigned __int64 *)param_2;
    uVar4 = (unsigned int)param_1[1] >> 1;
    trapWord(6,(unsigned __int64)uVar4,0);
    fn_82E3C690();
    iStack_2c = (int)uVar5;
    if (param_2[1] != 0) {
      param_2[1] = iStack_2c;
    }
    iStack_30 = (int)((unsigned __int64)uVar5 >> 0x20);
    if (iStack_2c == 0) {
      *(unsigned int *)
       ((int)((((unsigned __int64)uVar1 ^ (unsigned __int64)uVar3) -
               (__int64)(int)(((unsigned __int64)uVar1 ^ (unsigned __int64)uVar3) / (unsigned __int64)uVar4) *
               (__int64)(int)uVar4 & 0xffffffff) << 2) + *param_1) =
           *(unsigned int *)(iStack_30 + 0x18);
    }
    else {
      *(unsigned int *)(iStack_2c + 0x18) = *(unsigned int *)(iStack_30 + 0x18);
    }
    param_1[2] = param_1[2] + -1;
    *(int *)(iStack_30 + 0x18) = param_1[4];
    param_1[4] = iStack_30;
    return 1;
  }
  return 0;
}

