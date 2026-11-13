extern int fn_826D6630();
extern int fn_8276A0B8();
extern int fn_8276A0F0();
extern int fn_827BA058();


unsigned __int64
fn_82773F48(int param_1,int *param_2,int *param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             int *param_6,char param_7)

{
  unsigned __int64 uVar1;
  int *piVar2;
  int iVar3;
  unsigned short uVar4;
  
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = 0;
  param_2[5] = 0;
  *(unsigned short *)(param_2 + 6) = 0;
  *(unsigned short *)((int)param_2 + 0x1a) = 0;
  if (((param_7 == '\0') && ((param_5 & 0xffffffff) != 0)) ||
     (iVar3 = *(int *)(*param_3 + 0x10), iVar3 == 0)) {
    iVar3 = fn_827BA058(param_1 + 0x40,*(unsigned int *)(*param_6 + 0xc),param_3,param_4,param_5
                              ,*(unsigned short *)(param_2 + 4),param_6[5]);
    param_2[3] = iVar3;
    if (iVar3 == 0) {
      if ((((param_5 & 0xffffffff) != 0) && (param_6[5] != 0)) &&
         (*(char *)(param_1 + 0x19) != '\0')) {
        fn_826D6630((unsigned __int64)(unsigned int)param_6[5] + 0xc,0xffffffff82015348);
      }
      *(unsigned char *)(param_1 + 0x19) = 0;
      return 0;
    }
    param_2[5] = *(int *)(((*(unsigned short *)(*(int *)(iVar3 + 0xc) + 0x20) & 0xffff3fff) + 6) * 0x14 +
                         param_1);
    *(unsigned short *)(*(int *)(iVar3 + 0xc) + 0x20) = *(unsigned short *)(*(int *)(iVar3 + 0xc) + 0x20) | 0x8000;
  }
  else {
    *(unsigned short *)(param_2 + 4) = 0;
    *(unsigned short *)((int)param_2 + 0x12) = 0x100;
    uVar1 = fn_8276A0F0(iVar3,*(unsigned short *)(param_3 + 1));
    piVar2 = (int *)fn_8276A0B8(uVar1,*(unsigned int *)(*param_3 + 0x14));
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(int (***)())(*piVar2 + 0xc))(piVar2,*(unsigned int *)(*param_6 + 0xc));
      param_2[5] = iVar3;
      uVar4 = (**(int (***)())(*piVar2 + 4))(piVar2);
      *(unsigned short *)(param_2 + 6) = uVar4;
      uVar4 = (**(int (***)())(*piVar2 + 8))(piVar2);
      *(unsigned short *)((int)param_2 + 0x1a) = uVar4;
    }
  }
  return 1;
}

