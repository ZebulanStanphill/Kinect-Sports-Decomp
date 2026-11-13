extern int fn_828F4498();
extern int fn_828F9D90();
extern int fn_828FA8D8();
extern int fn_82920540();
extern int fn_829301D0();
extern int fn_82A2A378();
extern int fn_82F68CC0();
extern unsigned int uStack_16d;


__int64 fn_828F4578(int param_1,char *param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                      unsigned __int64 param_6,unsigned int param_7,unsigned __int64 param_8)

{
  char cVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  char *pcVar4;
  int iVar5;
  unsigned int in_stack_00000054;
  char acStack_270 [259];
  unsigned char uStack_16d;
  char acStack_160 [352];
  
  *(unsigned int *)(param_1 + 0x48) = param_7;
  if (param_3 != 0) {
    fn_82A2A378(0xfde9,0,param_2,0xffffffffffffffff,acStack_160,0x104,0,0);
    param_2 = acStack_160;
  }
  pcVar4 = param_2;
  if (*(int *)(param_1 + 0x48) == 0) {
    lVar3 = fn_828F4498(param_1,param_4,param_2);
    if (lVar3 < 0) {
      return lVar3;
    }
    lVar3 = fn_82920540(param_1 + 0x3c,*(unsigned int *)(param_1 + 0x4c),0);
    if (-1 < lVar3) {
      *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x40);
      *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(param_1 + 0x44);
      goto LAB_828f4750;
    }
  }
  else {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar4 - (int)param_2;
    uVar2 = fn_829301D0(param_4,iVar5,1);
    *(int *)(param_1 + 0x4c) = (int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      return -0x7ff8fff2;
    }
    fn_82F68CC0(uVar2,param_2,iVar5);
    acStack_270[0] = '\0';
    lVar3 = (**(int (***)())**(unsigned int **)(param_1 + 0x48))
                      (*(unsigned int **)(param_1 + 0x48),param_8,*(unsigned int *)(param_1 + 0x4c),
                       in_stack_00000054,param_1 + 0x54,param_1 + 0x58,acStack_270,0x104);
    if (-1 < lVar3) {
      if (acStack_270[0] != '\0') {
        uStack_16d = 0;
        pcVar4 = acStack_270;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        iVar5 = (int)pcVar4 - (int)acStack_270;
        lVar3 = fn_829301D0(param_4,iVar5,1);
        if (lVar3 == 0) {
          return -0x7ff8fff2;
        }
        fn_82F68CC0(lVar3,acStack_270,iVar5);
        *(int *)(param_1 + 0x4c) = (int)lVar3;
      }
LAB_828f4750:
      lVar3 = fn_828F9D90(param_1,*(unsigned int *)(param_1 + 0x54),*(unsigned int *)(param_1 + 0x58),
                           *(unsigned int *)(param_1 + 0x4c),1,param_4,param_6);
      return lVar3;
    }
  }
  fn_828FA8D8(param_6,param_5,0x5e3,0xffffffff82029248,param_2);
  return lVar3;
}

