extern unsigned int *auStack_40;
extern int fn_8265C990();
extern int fn_82A1CFC8();
extern int fn_82A20618();
extern int fn_82A21368();
extern int fn_82A214B0();
extern int fn_82A24480();
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_83219B8C;
extern unsigned int lbl_83219B94;
extern unsigned int lbl_83219B9C;
extern unsigned int lbl_83219C4C;
extern unsigned int lbl_83219CB8;
extern unsigned int uRam83219c54;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82A247C0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned char auStack_40 [64];
  
  iVar1 = **(int **)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x14) < 0) {
    *(int *)(*(int *)(param_1 + 0x40) + 4) = *(int *)(param_1 + 0x14);
  }
  lVar4 = (unsigned __int64)**(unsigned int **)(param_1 + 0x40) - 1;
  **(unsigned int **)(param_1 + 0x40) = (unsigned int)lVar4;
  if (lVar4 == 0) {
    uVar6 = *(unsigned int *)(*(int *)(param_1 + 0x40) + 4) >> 0x1f ^ 1;
    RtlLeaveCriticalSection(0xffffffff83219ba0);
    (**(int (***)())(lbl_83219B8C + 4))(*(unsigned int *)(*(int *)(param_1 + 0xc) + 8));
    RtlEnterCriticalSection(0xffffffff83219ba0);
    if (uVar6 != 0) {
      if ((*(unsigned int *)(**(int **)(param_1 + 0xc) + 8) & 0x7ff) != 0) {
        uVar6 = *(unsigned int *)(iVar1 + 8);
        RtlLeaveCriticalSection(0xffffffff83219ba0);
        uVar2 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0xc);
        uStack_50 = (unsigned __int64)uVar6;
        lVar4 = NtSetInformationFile(uVar2,auStack_40,&uStack_50,8,0x14);
        if (-1 < lVar4) {
          uStack_48 = (unsigned __int64)uVar6;
          lVar4 = NtSetInformationFile(uVar2,auStack_40,&uStack_48,8,0x13);
        }
        RtlEnterCriticalSection(0xffffffff83219ba0);
        uVar6 = (unsigned int)lVar4 >> 0x1f ^ 1;
      }
      if (uVar6 != 0) {
        uVar3 = *(unsigned int *)(iVar1 + 0x1c);
        uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x40) + 8);
        *(unsigned int *)(iVar1 + 0x1c) = uVar3 & 0xffffff9f | 0x40;
        *(unsigned int *)(iVar1 + 0x14) = uVar2;
        if ((uVar3 & 1) != 0) {
          lbl_83219CB8 = lbl_83219CB8 + 1;
        }
      }
    }
    RtlLeaveCriticalSection(0xffffffff83219ba0);
    (**(int (***)())(lbl_83219B8C + 4))(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xc));
    RtlEnterCriticalSection(0xffffffff83219ba0);
    if (uVar6 == 0) {
      RtlLeaveCriticalSection(0xffffffff83219ba0);
      *(unsigned int *)(iVar1 + 0x1c) = *(unsigned int *)(iVar1 + 0x1c) & 0xffffffdf;
      if (lbl_83219C4C == 0) {
        fn_82A24480(**(unsigned int **)(param_1 + 0xc));
      }
      RtlEnterCriticalSection(0xffffffff83219ba0);
    }
    RtlLeaveCriticalSection(0xffffffff83219ba0);
    fn_82A21368(lbl_83219B94,iVar1);
    RtlEnterCriticalSection(0xffffffff83219ba0);
    fn_82A214B0(lbl_83219B94,**(unsigned int **)(param_1 + 0xc));
    fn_8265C990(*(unsigned int *)(param_1 + 0xc),lbl_8315D2EC);
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      uVar5 = (unsigned __int64)lbl_83219B9C;
      RtlEnterCriticalSection(uVar5 + 0xc);
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + -1;
      RtlLeaveCriticalSection(uVar5 + 0xc);
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x3c),lbl_8315D2EC);
    }
    fn_8265C990(*(unsigned int *)(param_1 + 0x40),lbl_8315D2EC);
    fn_8265C990(param_1,lbl_8315D2EC);
    RtlLeaveCriticalSection(0xffffffff83219ba0);
    fn_82A1CFC8();
    RtlEnterCriticalSection(0xffffffff83219ba0);
    uRam83219c54 = 0;
    fn_82A20618(2);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      uVar5 = (unsigned __int64)lbl_83219B9C;
      RtlEnterCriticalSection(uVar5 + 0xc);
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + -1;
      RtlLeaveCriticalSection(uVar5 + 0xc);
    }
    fn_8265C990(param_1,lbl_8315D2EC);
  }
  return;
}

