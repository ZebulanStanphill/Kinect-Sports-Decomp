extern int fn_82ABE2E0();
extern int fn_82AD1978();
extern int fn_82AD20C0();
extern int fn_82B8AE98();


void fn_82AD5E58(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  char cVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  
  for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
    for (uVar2 = *(unsigned int *)(uVar1 + 0x1c); ((uVar2 & 1) == 0 && (uVar2 != 0));
        uVar2 = *(unsigned int *)((uVar2 & 0xfffffffe) + 0x28)) {
      uVar7 = (unsigned __int64)(*(unsigned int *)(uVar2 + 8) >> 7) & 0x7f;
      if ((uVar7 == 0x6d) || (uVar7 == 0x6c)) {
        lVar8 = (uVar7 - 0x6d) - ((uVar7 - 0x6e) + (unsigned __int64)(uVar7 - 0x6d == 0));
        iVar4 = (int)((0xcU - lVar8 & 0xffffffff) << 2);
        uVar5 = *(unsigned int *)((int)((lVar8 + 0xbU & 0xffffffff) << 2) + uVar2);
        uVar3 = *(unsigned int *)(*(int *)((int)((0xcU - lVar8 & 0xffffffff) << 2) + uVar2) + 0xc);
        fn_82AD20C0(uVar2,*(unsigned int *)(iVar4 + uVar2),param_1);
        uVar5 = fn_82AD1978(uVar2,uVar5);
        *(unsigned int *)(iVar4 + uVar2) = uVar5;
        cVar6 = fn_82ABE2E0(uVar3);
        if (cVar6 != '\0') {
          fn_82B8AE98(param_1,uVar3);
        }
        *(unsigned int *)(uVar2 + 8) = *(unsigned int *)(uVar2 + 8) & 0xffffc07f | 0x180;
      }
    }
  }
  return;
}

