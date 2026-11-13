extern int fn_82E99CD0();
extern int fn_82E99D70();
extern int fn_82F174E0();
extern int memcpy();


unsigned __int64 fn_82E4BEE0(int param_1,unsigned int *param_2,unsigned __int64 param_3,int param_4,int param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  int aiStack_50;
  
  if ((*(int *)(param_4 + 0x10) == 0x56555949) || (*(int *)(param_4 + 0x10) == 0x30323449)) {
    puVar5 = (unsigned int *)(param_4 + -4);
    puVar4 = param_2 + 1;
    lVar6 = 10;
    do {
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    memcpy(*param_2,param_3,*(unsigned int *)(param_4 + 0x14));
  }
  else {
    if (*(int *)(param_1 + 0x5c) == 0) {
      puVar5 = (unsigned int *)(param_4 + -4);
      aiStack_50 = 1;
      puVar4 = (unsigned int *)(param_1 + 0x60);
      lVar6 = 10;
      do {
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar5;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      *(unsigned int *)(param_1 + 100) = 0x28;
      *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_4 + 4);
      uVar2 = *(unsigned int *)(param_4 + 8);
      *(unsigned short *)(param_1 + 0x72) = 0xc;
      *(unsigned int *)(param_1 + 0x6c) = uVar2;
      *(unsigned short *)(param_1 + 0x70) = 1;
      *(unsigned int *)(param_1 + 0x74) = 0x30323449;
      uVar1 = *(int *)(param_4 + 8) * *(int *)(param_4 + 4) * 3;
      *(unsigned int *)(param_1 + 0x78) = ((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (*(int *)(param_1 + 0x8c) != 0) {
        fn_82F174E0();
      }
      if ((*(int *)(*(int *)(param_1 + 0xc) + 4) != 8) || (uVar3 = 2, param_5 != 0)) {
        uVar3 = 0;
      }
      uVar2 = fn_82E99D70(&aiStack_50,param_4,(unsigned int *)(param_1 + 100),0,uVar3);
      *(unsigned int *)(param_1 + 0x8c) = uVar2;
      if (aiStack_50 != 0) {
        if (((aiStack_50 != 3) && (aiStack_50 != 4)) && (aiStack_50 != 5)) {
          if (aiStack_50 == 2) {
            return 0xfffffffffffffffd;
          }
          return 0xffffffffffffff9c;
        }
        return 0xfffffffffffffffe;
      }
      *(unsigned int *)(param_1 + 0x5c) = 1;
    }
    puVar5 = (unsigned int *)(param_1 + 0x60);
    puVar4 = param_2 + 1;
    lVar6 = 10;
    do {
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if ((*(int *)(*(int *)(param_1 + 0xc) + 4) != 8) || (uVar3 = 2, param_5 != 0)) {
      uVar3 = 0;
    }
    fn_82E99CD0(*(unsigned int *)(param_1 + 0x8c),param_3,*param_2,uVar3,1);
  }
  return 0;
}

