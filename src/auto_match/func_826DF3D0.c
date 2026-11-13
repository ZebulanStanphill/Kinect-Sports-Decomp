extern unsigned int *auStack_48;
extern unsigned int *auStack_60;
extern int fn_826A8E58();
extern int fn_826D9590();
extern int fn_826DA0A0();
extern int fn_826DF0B0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5c;


void fn_826DF3D0(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned char auStack_60;
  unsigned int uStack_5c;
  unsigned int *apuStack_58 [2];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_48 [8];
  
  iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x20) + 0x90);
  sync(1);
  if (iVar3 != 0) {
    uStack_5c = 0;
    do {
      lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + 0x54;
      RtlEnterCriticalSection(lVar4);
      if (*(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x4c) <= *(unsigned int *)(iVar3 + 0x14)) {
        RtlLeaveCriticalSection(lVar4);
        break;
      }
      iVar1 = *(int *)(*(unsigned int *)(iVar3 + 0x14) * 4 + *(int *)(*(int *)(param_1 + 0x1c) + 0x48));
      RtlLeaveCriticalSection(lVar4);
      puVar5 = (unsigned int *)(iVar3 + 0xc);
      uStack_50 = 0;
      uStack_4c = 0;
      apuStack_58[0] = puVar5;
      fn_826D9590(auStack_48,&uStack_5c,apuStack_58);
      cVar2 = fn_826A8E58(auStack_48,&uStack_50);
      if (cVar2 != '\0') {
        if (iVar1 != 0) {
          (**(int (***)())(*param_2 + 4))(param_2,param_1,iVar1,((unsigned __int64)*puVar5 & 0xfffffffc) + 8);
        }
        auStack_60 = 1;
        fn_826DF0B0(&uStack_5c,puVar5,&auStack_60);
      }
      iVar3 = *(int *)(iVar3 + 0x18);
      sync(1);
    } while (iVar3 != 0);
    fn_826DA0A0(&uStack_5c);
  }
  return;
}

