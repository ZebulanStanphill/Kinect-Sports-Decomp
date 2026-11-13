typedef unsigned char bool;
#define true 1
extern int fn_82813428();
extern int fn_82813CB8();
extern int fn_82A1E6A0();
extern unsigned int iStack_38;
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


__int64 fn_82813FD0(__int64 param_1,char param_2)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar5;
  __int64 lVar4;
  unsigned int uVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned __int64 uStack_40;
  int iStack_38;
  unsigned int *puStack_34;
  
  puVar5 = (unsigned int *)param_1;
  *puVar5 = 0;
  do {
    puVar7 = (unsigned int *)(param_1 + 4);
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar7 + 1,0,param_1 + 4);
      *puVar7 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  puVar5[2] = 0;
  do {
    puVar7 = (unsigned int *)(param_1 + 0xc);
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar7 + 1,0,param_1 + 0xc);
      *puVar7 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  *(unsigned __int64 *)(puVar5 + 4) = 0;
  puVar5[6] = 0;
  sync(0);
  *(unsigned char *)(puVar5 + 0xc) = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  lVar4 = fn_82813CB8(param_1,0x10);
  bVar1 = lVar4 == 0;
  iVar3 = (int)lVar4;
  if (!bVar1) {
    *(unsigned int *)(iVar3 + 8) = 0;
    do {
      puVar7 = (unsigned int *)(lVar4 + 0xc);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar7 + 1,0,lVar4 + 0xc);
        *puVar7 = uVar2;
        bVar1 = true;
      }
    } while (!bVar1);
  }
  uStack_40 = *(unsigned __int64 *)(puVar5 + 8);
  puStack_34 = puVar5 + 8;
  iStack_38 = iVar3;
  fn_82813428(&uStack_40);
  puStack_34 = puVar5 + 10;
  uStack_40 = *(unsigned __int64 *)(puVar5 + 10);
  iStack_38 = iVar3;
  fn_82813428(&uStack_40);
  if (param_2 != '\0') {
    uVar6 = fn_82A1E6A0(0,1,0,0);
    puVar5[0xe] = uVar6;
  }
  sync(0);
  return param_1;
}

