extern int fn_822636E0();
extern unsigned int lbl_82192734;


void fn_82388020(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    fn_822636E0((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                      (double)*(float *)(param_1 + 0x28),(double)*(float *)(param_1 + 0x2c),
                      *(unsigned int *)(iVar1 + 0x5e0),(int)*(float *)(param_1 + 0x10),param_3,
                      (int)*(float *)(param_1 + 0x14),param_5,(int)*(float *)(param_1 + 0x18),
                      param_7,(int)*(float *)(param_1 + 0x1c));
    puVar3 = (unsigned int *)(param_1 + 0x1c);
    *(int *)(iVar1 + 0x5e0) = *(int *)(iVar1 + 0x5e0) + 1;
    lVar4 = 4;
    *(unsigned int *)(param_1 + 0xc) = 0;
    uVar2 = lbl_82192734;
    do {
      puVar3[-3] = uVar2;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

