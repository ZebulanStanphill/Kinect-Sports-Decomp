extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern int fn_82FF5200();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82FF4C68(int param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int (**pcVar2)();
  int iVar3;
  int iVar4;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  iVar4 = param_1 + 0x88;
  RtlEnterCriticalSection(iVar4);
  uVar1 = *(unsigned int *)(param_2 + 0x50);
  iVar3 = fn_82FF5200(param_1 + 4,uVar1);
  if (((*(unsigned int *)(iVar3 + 0x28) & 4) == 0) ||
     (pcVar2 = *(int (***)())(iVar3 + 0x20), pcVar2 == (int (**)())0x0)) {
    RtlLeaveCriticalSection(iVar4);
  }
  else {
    uStack_50 = *(unsigned int *)(iVar3 + 0x24);
    uStack_4c = *(unsigned int *)(iVar3 + 0xc);
    uStack_44 = *(unsigned int *)(iVar3 + 8);
    uStack_40 = *param_3;
    uStack_3c = param_3[1];
    uStack_38 = param_3[2];
    uStack_48 = uVar1;
    fn_82A1E7D8(*(unsigned int *)(param_1 + 0xa4));
    RtlLeaveCriticalSection(iVar4);
    (*pcVar2)(4,&uStack_50);
    fn_82A1E810(*(unsigned int *)(param_1 + 0xa4));
  }
  return;
}

