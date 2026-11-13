extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_826C62B8();
extern int fn_826C6368();
extern int fn_827552C8();
extern int fn_827553F0();


void fn_826CD5E8(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  unsigned int uVar7;
  
  if (((*(int *)(param_1 + 0x1a8) == 9999) && (*(int *)(param_1 + 0x1ac) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x1ac) + 0x1c) != 0)) {
    if (((~(unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 0xc) + 0x14) & 0xffffffff) >> 6 & 1) == 0) {
      iVar1 = (*(int **)(param_2 + 0xc))[5];
      uVar4 = (**(int (***)())(**(int **)(param_2 + 0xc) + 0x3c))();
      puVar6 = (unsigned int *)fn_827553F0(*(unsigned int *)(*(int *)(param_1 + 0x1ac) + 0x1c),uVar4,
                                         iVar1,0,0);
      if (puVar6 == (unsigned int *)0x0) {
        return;
      }
      uVar3 = fn_8267B890(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x14),0x1c,0);
      if ((uVar3 & 0xffffffff) == 0) {
        puVar5 = (unsigned int *)0x0;
      }
      else {
        puVar5 = (unsigned int *)fn_826C62B8(uVar3,0,puVar6[5],0xffffffff8200bf80,0,puVar6[6]);
      }
      uVar2 = *puVar6;
      *puVar6 = (unsigned int)((unsigned __int64)uVar2 - 1);
      if ((unsigned __int64)uVar2 - 1 == 0) {
        fn_826C6368(puVar6);
        fn_8267BE38(puVar6);
      }
    }
    else {
      if (*(int *)(param_2 + 0x14) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(unsigned int *)(*(int *)(param_2 + 0x14) + 0x2c);
      }
      uVar3 = fn_8267B890(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x14),0x1c,0);
      if ((uVar3 & 0xffffffff) == 0) {
        puVar5 = (unsigned int *)0x0;
      }
      else {
        puVar5 = (unsigned int *)fn_826C62B8(uVar3,0,param_2,0xffffffff8200bf80,0,uVar7);
      }
    }
    if (puVar5 != (unsigned int *)0x0) {
      fn_827552C8(*(unsigned int *)(*(int *)(param_1 + 0x1ac) + 0x1c),puVar5);
      uVar2 = *puVar5;
      *puVar5 = (unsigned int)((unsigned __int64)uVar2 - 1);
      if ((unsigned __int64)uVar2 - 1 == 0) {
        fn_826C6368(puVar5);
        fn_8267BE38(puVar5);
      }
    }
  }
  return;
}

