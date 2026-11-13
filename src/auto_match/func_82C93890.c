extern unsigned int *auStack_3c;
extern int fn_82CB9388();
extern int fn_82CB9450();
extern int fn_82CBA440();
extern unsigned int uStack_40;


void fn_82C93890(int param_1,int param_2,unsigned __int64 param_3,int param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char *puVar3;
  __int64 lVar4;
  unsigned int uStack_40;
  unsigned int auStack_3c;
  
  uVar1 = *(unsigned int *)(param_1 + 0x1cc);
  iVar2 = (*(int *)(param_1 + 0x88) * param_5 * 2 + param_4) * 2;
  if (*(short *)(*(int *)(param_1 + 0x6f0) + iVar2) == 0x4000) {
    iVar2 = 0;
    do {
      lVar4 = 8;
      puVar3 = (unsigned char *)(*(int *)(param_1 + 0xcc) * iVar2 + param_2 + -1);
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = 0x80;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
  }
  else {
    auStack_3c = (unsigned int)*(short *)(*(int *)(param_1 + 0x6f0) + iVar2);
    uStack_40 = (unsigned int)*(short *)(*(int *)(param_1 + 0x6f4) + iVar2);
    if (*(int *)(param_1 + 0x3cb0) == 7) {
      fn_82CB9450();
    }
    else {
      fn_82CB9388(param_1,&auStack_3c,&uStack_40,param_4 >> 1,param_5 >> 1);
    }
    iVar2 = *(int *)(param_1 + 0xcc);
    fn_82CBA440(param_1,(((int)uStack_40 >> 2) + param_5 * 8) * iVar2 +
                              *(int *)(param_1 + 0xee4) + ((int)auStack_3c >> 2) + param_4 * 8,
                      iVar2,param_2,iVar2,auStack_3c & 3,uStack_40 & 3,uVar1);
  }
  if ((param_3 & 0xffffffff) != 0) {
    (**(int (***)())(param_1 + 0xc70))
              (param_2,param_2,param_3,*(unsigned int *)(param_1 + 0xcc),
               *(unsigned int *)(param_1 + 0x108));
  }
  return;
}

