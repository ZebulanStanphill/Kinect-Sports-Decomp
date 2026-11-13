typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD1A40();
extern int fn_82AD2128();
extern int fn_82AD35E8();
extern int fn_82B81D80();
extern int fn_82B841E8();


unsigned int * fn_82B860F0(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,char param_5)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  bool bVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  
  uVar6 = param_2[3];
  puVar7 = param_2;
  if (param_5 != '\0') {
    uVar6 = fn_82AD35E8(param_1,*(unsigned int *)(param_1 + 0x234),0,param_2);
    puVar7 = (unsigned int *)fn_82AD17B0(param_1,uVar6);
    uVar2 = uVar6 & 0xfffffffe;
    *puVar7 = *puVar7 & 0xf1ffffff | *param_2 & 0xe000000;
    iVar1 = *(int *)(param_1 + 0x234);
    puVar9 = (unsigned int *)(iVar1 + 0x18);
    *(unsigned int *)(uVar2 + 0x24) = *puVar9;
    *(unsigned int *)(*puVar9 & 0xfffffffe) = uVar2;
    *(unsigned int *)(uVar2 + 0x28) = iVar1 - 0xcU | 1;
    *puVar9 = uVar2 + 0x28;
  }
  uVar2 = *(unsigned int *)(uVar6 + 8);
  *(unsigned int *)(uVar6 + 8) = uVar2 | 0x20;
  uVar10 = (unsigned __int64)(unsigned int)(1 << (*puVar7 >> 0x19 & 7)) - 1;
  *(unsigned int *)(uVar6 + 8) =
       (unsigned int)((((0x8da691691448U >> (uVar10 & 0x7f)) >> (uVar10 & 0x7f)) >> (uVar10 & 0x7f) & 7) <<
             0xe) | (unsigned int)((uVar10 & 0xffff1fff) << 1) & 0x1e | uVar2 & 0xfffe3fe1 | 0x20;
  fn_82B81D80(uVar6,param_3,0xe4);
  if ((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) != 0xffff0000) goto LAB_82b86330;
  uVar10 = (param_3 & 0xffffffff) >> 4;
  bVar4 = false;
  if (uVar10 == 0x3d) {
    *puVar7 = *puVar7 | 1;
LAB_82b86230:
    bVar4 = true;
  }
  else if (uVar10 < 4) goto LAB_82b86230;
  if (bVar4) {
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x234) + 0x5c);
    if ((uVar2 == 0) || (uVar8 = uVar2, (*(unsigned int *)(uVar2 + 8) & 0x3f80) != 0x3a80)) {
      uVar8 = fn_82B841E8(param_1,*(int *)(param_1 + 0x234),0,0x75,0,0);
      uVar5 = uVar8 & 0xfffffffe;
      if (uVar2 == 0) {
        iVar1 = *(int *)(param_1 + 0x234);
        *(unsigned int *)(uVar5 + 0x28) = *(unsigned int *)(iVar1 + 0x1c);
        *(unsigned int *)((*(unsigned int *)(iVar1 + 0x1c) & 0xfffffffe) + 0x24) = uVar5 + 0x28;
        *(unsigned int *)(uVar5 + 0x24) = iVar1 + 0x1cU | 1;
        *(unsigned int *)(iVar1 + 0x1c) = uVar5;
      }
      else {
        uVar2 = uVar2 & 0xfffffffe;
        *(unsigned int *)(uVar5 + 0x28) = *(unsigned int *)(uVar2 + 0x28);
        *(unsigned int *)((*(unsigned int *)(uVar2 + 0x28) & 0xfffffffe) + 0x24) = uVar5 + 0x28;
        *(unsigned int *)(uVar5 + 0x24) = uVar2 + 0x28;
        *(unsigned int *)(uVar2 + 0x28) = uVar5;
      }
      iVar1 = *(int *)(param_1 + 0x234);
      iVar3 = *(int *)(iVar1 + 0x5c);
      if (iVar3 != 0) {
        fn_82AD2128(uVar8,0,iVar3,param_1);
      }
      *(unsigned int *)(iVar1 + 0x5c) = uVar8;
      *(unsigned int *)(uVar8 + 8) = *(unsigned int *)(uVar8 + 8) | 0x2000000;
    }
    fn_82AD1A40(uVar6,uVar8,param_1);
  }
LAB_82b86330:
  fn_82AD1978(param_4,puVar7);
  return puVar7;
}

