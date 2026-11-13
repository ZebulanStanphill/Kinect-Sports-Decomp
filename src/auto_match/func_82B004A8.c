typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ACA920();
extern int fn_82AD1978();
extern int fn_82AD19D8();
extern int fn_82AD20C0();
extern int fn_82AF9DC8();
extern int fn_82AFC3B8();
extern int fn_82B841E8();
extern int fn_82B8AC10();


bool fn_82B004A8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,int param_4,unsigned __int64 param_5,
                  int param_6,int param_7,unsigned int param_8)

{
  int iVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar7;
  char cVar9;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  unsigned int *puVar10;
  int *piVar11;
  unsigned __int64 uVar12;
  int *in_stack_00000054;
  unsigned int *in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  
  uVar4 = fn_82ACA920(param_1,param_3,*(unsigned int *)(param_3 + 0xc));
  uVar5 = fn_82ACA920(param_1,param_6,*(unsigned int *)(param_6 + 0xc));
  iVar7 = fn_82AFC3B8(param_1,param_2,uVar4,param_5,uVar5,*(unsigned int *)(param_8 + 0x1c),
                            param_8,in_stack_00000064);
  uVar12 = 0;
  uVar3 = *(unsigned int *)(*(int *)(iVar7 + 0xc) + 8) >> 7 & 0x7f;
  if ((uVar3 == 0) || (bVar2 = true, 0x66 < uVar3)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar12 = fn_82AD19D8(param_8,*(int *)(iVar7 + 0xc),param_1);
  }
  uVar4 = fn_82B841E8(param_1,*(unsigned int *)(param_8 + 0x1c),0,0x75,0,0);
  uVar3 = (unsigned int)uVar4 & 0xfffffffe;
  puVar10 = (unsigned int *)((param_8 & 0xfffffffe) + 0x24);
  *(unsigned int *)(uVar3 + 0x24) = *puVar10;
  *(unsigned int *)(*puVar10 & 0xfffffffe) = uVar3;
  *(unsigned int *)(uVar3 + 0x28) = param_8 & 0xfffffffe;
  *puVar10 = uVar3 + 0x28;
  fn_82AD1978(uVar4,iVar7);
  cVar9 = fn_82AF9DC8(param_1,param_2,param_4,param_5,param_7,param_8,in_stack_0000006c);
  if (cVar9 != '\0') {
    uVar5 = fn_82ACA920(param_1,param_4,*(unsigned int *)(param_4 + 0xc));
    uVar6 = fn_82ACA920(param_1,param_7,*(unsigned int *)(param_7 + 0xc));
    uVar8 = fn_82AFC3B8(param_1,param_2,uVar5,param_5,uVar6,*(unsigned int *)(param_8 + 0x1c),
                              param_8,in_stack_0000006c);
    *in_stack_00000054 = iVar7;
    *in_stack_0000005c = uVar8;
  }
  if ((uVar12 & 0xffffffff) != 0) {
    fn_82AD20C0(param_8,uVar12,param_1);
  }
  piVar11 = *(int **)(iVar7 + 0x10);
  for (iVar1 = *piVar11; iVar1 != iVar7; iVar1 = *(int *)(iVar1 + 4)) {
    piVar11 = (int *)(iVar1 + 4);
  }
  *piVar11 = *(int *)(iVar7 + 4);
  *(unsigned int *)(iVar7 + 0x10) = 0;
  fn_82B8AC10(param_1,uVar4,0,1);
  return cVar9 != '\0';
}

