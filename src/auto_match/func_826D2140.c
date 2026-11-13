extern int fn_8267C498();
extern int fn_8269EA50();
extern int fn_826C8688();
extern int fn_826C90C8();
extern int fn_826D1700();
extern int fn_82700248();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_43;
extern unsigned int uStack_44;
extern unsigned int uStack_45;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_826D2140(int param_1)

{
  char cVar2;
  int iVar1;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned short uStack_48;
  unsigned char uStack_46;
  unsigned char uStack_45;
  unsigned char uStack_44;
  unsigned char uStack_43;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  iVar5 = 0;
  stack_pair_50.second = 0;
  stack_pair_50.first = 1;
  uStack_48 = 0;
  uStack_46 = 0;
  uStack_45 = 0xff;
  uStack_44 = 0;
  uStack_43 = 0;
  cVar2 = fn_8269EA50(param_1,&stack_pair_50.first);
  uVar3 = 4;
  uStack_3c = 0;
  uStack_38 = 0xff;
  uStack_34 = (unsigned int)(((unsigned __int64)(uStack_34) >> 16) & 0xFFFF);
  if (cVar2 == '\0') {
    uVar3 = 5;
  }
  iVar1 = fn_82700248((unsigned __int64)*(unsigned int *)(param_1 + 0xa0) + 0xa2c,uVar3);
  *(unsigned int *)(iVar1 + 4) = 2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  if (*(int *)(iVar1 + 8) != 0) {
    fn_8267C498();
  }
  *(int *)(iVar1 + 8) = param_1;
  if (*(int *)(iVar1 + 0xc) != 0) {
    fn_8267C498();
  }
  *(unsigned int *)(iVar1 + 0xc) = 0;
  *(unsigned int *)(iVar1 + 0x10) = uStack_40;
  *(unsigned int *)(iVar1 + 0x14) = uStack_3c;
  *(unsigned int *)(iVar1 + 0x18) = uStack_38;
  *(unsigned int *)(iVar1 + 0x1c) = uStack_34;
  *(unsigned char *)(param_1 + 0x66) = *(unsigned char *)(param_1 + 0x66) | 0x20;
  fn_826C90C8(param_1,0);
  for (uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0xa9c); uVar4 != 0; uVar4 = uVar4 - 1
      ) {
    iVar1 = fn_826C8688(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xa0) + 0xa98) + iVar5));
    if (param_1 == iVar1) {
      fn_826D1700(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xa0) + 0xa98) + iVar5),param_1);
    }
    iVar5 = iVar5 + 4;
  }
  return;
}

