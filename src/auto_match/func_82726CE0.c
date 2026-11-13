extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern int fn_8267BF50();
extern int fn_8267C498();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82726AB8();
extern int fn_8278D3F0();
extern int fn_827998E8();
extern int fn_82799DA8();
extern int fn_827A7E68();


void fn_82726CE0(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  int iVar8;
  __int64 lVar9;
  int iVar10;
  unsigned char auStack_b0 [48];
  unsigned char auStack_80 [128];
  
  if ((*(int *)(param_1 + 0xd0) != 0) &&
     (uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xd0) + 8), uVar6 != 0)) {
    iVar8 = 0;
    do {
      if (**(unsigned int **)(param_1 + 0xd0) != 0) {
        uVar2 = fn_827A7E68((unsigned __int64)**(unsigned int **)(param_1 + 0xd0) + 0x30,0,0xffffffff8200befc
                                  ,0xffffffffffffffff);
        uVar3 = fn_827A7E68((unsigned __int64)**(unsigned int **)(param_1 + 0xd0) + 0x30,0,0xffffffff820110cc
                                  ,0xffffffffffffffff);
        uVar4 = fn_8267BF50(param_1);
        fn_826FDED0(auStack_b0,uVar4);
        if ((uVar2 & 0xffffffff) != 0) {
          uVar4 = fn_8278D3F0(auStack_80,auStack_b0,uVar2);
          fn_82726AB8(auStack_b0,uVar4);
          fn_826FDF58(auStack_80);
        }
        if ((uVar3 & 0xffffffff) != 0) {
          uVar4 = fn_8278D3F0(auStack_80,auStack_b0,uVar3);
          fn_82726AB8(auStack_b0,uVar4);
          fn_826FDF58(auStack_80);
        }
        puVar7 = (unsigned int *)(*(int *)(*(int *)(param_1 + 0xd0) + 4) + iVar8);
        uVar1 = *puVar7;
        lVar9 = (unsigned __int64)puVar7[1] + (unsigned __int64)uVar1;
        fn_82799DA8(*(unsigned int *)(param_1 + 0xa0),auStack_b0,uVar1,lVar9);
        iVar10 = *(int *)(*(int *)(param_1 + 0xd0) + 4) + iVar8;
        uVar5 = fn_827998E8(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 8),uVar1,lVar9);
        if (*(int *)(iVar10 + 8) != 0) {
          fn_8267C498();
        }
        *(unsigned int *)(iVar10 + 8) = uVar5;
        fn_826FDF58(auStack_b0);
      }
      uVar6 = uVar6 - 1;
      iVar8 = iVar8 + 0x14;
    } while (uVar6 != 0);
  }
  return;
}

