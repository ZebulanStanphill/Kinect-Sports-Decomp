extern int fn_82260560();
extern unsigned int lbl_82192734;
extern unsigned int uRam831c996c;


void fn_82399AD0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    fn_82260560((double)*(float *)(param_1 + 0xbec),(double)*(float *)(param_1 + 0xbf0),
                      (double)*(float *)(param_1 + 0xbf4),(double)*(float *)(param_1 + 0xbf8),
                      uRam831c996c,(int)*(float *)(param_1 + 0xbdc),param_3,
                      (int)*(float *)(param_1 + 0xbe0),param_5,(int)*(float *)(param_1 + 0xbe4),
                      param_7,(int)*(float *)(param_1 + 0xbe8));
    *(unsigned int *)(param_1 + 0xbd8) = 0;
    uVar1 = lbl_82192734;
    lVar3 = 4;
    puVar2 = (unsigned int *)(param_1 + 0xbe8);
    do {
      puVar2[-3] = uVar1;
      puVar2 = puVar2 + 1;
      *puVar2 = uVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(unsigned int *)(param_1 + 0x2a4) = 0;
  }
  return;
}

