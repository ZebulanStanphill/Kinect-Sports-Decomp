extern int fn_82264400();
extern unsigned int lbl_82192734;
extern unsigned int lbl_831D1918;
extern unsigned int lbl_83276554;


void fn_823C51D0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  if ((lbl_831D1918 != 0) && (*(int *)(param_1 + 0x1680) != 0)) {
    puVar3 = (unsigned int *)(param_1 + 0x1698);
    fn_82264400((double)*(float *)(param_1 + 0x1698),(double)*(float *)(param_1 + 0x169c),
                      (double)*(float *)(param_1 + 0x16a0),(double)*(float *)(param_1 + 0x16a4),
                      lbl_83276554,(int)*(float *)(param_1 + 0x1688),param_3,
                      (int)*(float *)(param_1 + 0x168c),param_5,(int)*(float *)(param_1 + 0x1690),
                      param_7,(int)*(float *)(param_1 + 0x1694));
    *(unsigned int *)(param_1 + 0x1684) = 0;
    uVar1 = lbl_82192734;
    for (puVar2 = (unsigned int *)(param_1 + 0x1688); puVar2 != puVar3; puVar2 = puVar2 + 1) {
      *puVar2 = uVar1;
    }
    for (; puVar3 != (unsigned int *)(param_1 + 0x16a8); puVar3 = puVar3 + 1) {
      *puVar3 = uVar1;
    }
    *(unsigned int *)(param_1 + 0x1680) = 0;
  }
  return;
}

