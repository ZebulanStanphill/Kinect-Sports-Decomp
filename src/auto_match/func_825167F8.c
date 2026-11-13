#define true 1
extern int fn_82248B90();
extern int fn_82517978();
extern int fn_8288F9A0();
extern int fn_828A12E8();
extern int fn_828BCC48();
extern int fn_828C2BD8();


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_825167F8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  unsigned int *puVar9;
  int aiStack_3c [15];
  
  for (puVar9 = *(unsigned int **)(param_1 + 0x68); puVar9 != *(unsigned int **)(param_1 + 0x6c);
      puVar9 = puVar9 + 4) {
    uVar2 = *(unsigned int *)(param_1 + 0x10);
    uVar6 = fn_828A12E8(uVar2);
    iVar7 = fn_8288F9A0(uVar6,1);
    aiStack_3c[0] = **(int **)(iVar7 + 4);
    while( true ) {
      iVar7 = aiStack_3c[0];
      uVar6 = fn_828A12E8(uVar2);
      iVar8 = fn_8288F9A0(uVar6,1);
      if (iVar7 == *(int *)(iVar8 + 4)) break;
      uVar4 = puVar9[2];
      uVar1 = *puVar9;
      uVar5 = *(unsigned int *)(param_1 + 0x10);
      uVar6 = (**(int (***)())(**(int **)(iVar7 + 0x14) + 0x44))();
      fn_828C2BD8(uVar5,uVar6,(unsigned __int64)uVar1 + 0xc,(unsigned __int64)uVar4 + 8);
      fn_82248B90(aiStack_3c);
    }
  }
  puVar9 = *(unsigned int **)(param_1 + 0x78);
  if (puVar9 != *(unsigned int **)(param_1 + 0x7c)) {
    do {
      uVar2 = *(unsigned int *)(param_1 + 0x10);
      uVar6 = fn_828A12E8(uVar2);
      iVar7 = fn_8288F9A0(uVar6,1);
      aiStack_3c[0] = **(int **)(iVar7 + 4);
      while( true ) {
        iVar7 = aiStack_3c[0];
        uVar6 = fn_828A12E8(uVar2);
        iVar8 = fn_8288F9A0(uVar6,1);
        if (iVar7 == *(int *)(iVar8 + 4)) break;
        aiStack_3c[1] = 0;
        aiStack_3c[2] = 0;
        piVar3 = *(int **)(iVar7 + 0x14);
        fn_82517978(aiStack_3c + 1,puVar9[2],puVar9[3],0);
        uVar4 = *puVar9;
        uVar5 = *(unsigned int *)(param_1 + 0x10);
        uVar6 = (**(int (***)())(*piVar3 + 0x44))(piVar3);
        fn_828BCC48(uVar5,uVar6,(unsigned __int64)uVar4 + 0xc,aiStack_3c + 1);
        fn_82248B90(aiStack_3c);
      }
      puVar9 = puVar9 + 4;
    } while (puVar9 != *(unsigned int **)(param_1 + 0x7c));
  }
  return 0;
}

