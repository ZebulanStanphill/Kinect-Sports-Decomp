extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern int fn_82866018();
extern int fn_82876E38();
extern int fn_82A29D80();


int
fn_828764E8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,char *param_5,
             unsigned __int64 *param_6)

{
  int uVar1;
  int iVar2;
  unsigned int uVar3;
  union { unsigned __int64 value; unsigned int words[2]; } auStack_140;
  unsigned char auStack_130 [256];
  
  if ((*param_5 == '\0') && (*(char *)(param_1 + 0x420) != '\0')) {
    *param_6 = 0;
    *(unsigned int *)(param_6 + 1) = 0;
    *(unsigned int *)(param_6 + 3) = *(unsigned int *)(param_1 + 0x41c);
    *(unsigned int *)(param_6 + 2) = 0;
    *(unsigned int *)((int)param_6 + 0xc) = 0;
    return 1;
  }
  else {
    *param_5 = '\x01';
    iVar2 = fn_82876E38(param_1 + 8,param_2,param_4,auStack_130);
    if (iVar2 == 1) {
      uVar1 = fn_82866018(auStack_130,param_3,0,0,(unsigned int *)((int)param_6 + 0x14));
      if ((int)uVar1 == 1) {
        uVar3 = fn_82A29D80(*(unsigned int *)((int)param_6 + 0x14),&auStack_140.words[0]);
        auStack_140.words[1] = uVar3;
        *(unsigned int *)(param_6 + 1) = 0;
        *param_6 = auStack_140.value;
        uVar3 = *(unsigned int *)(param_1 + 0x41c);
        *(unsigned int *)(param_6 + 2) = 0;
        *(unsigned int *)((int)param_6 + 0xc) = 0;
        *(unsigned int *)(param_6 + 3) = uVar3;
      }
    }
    else {
      return 2;
    }
  }
  return uVar1;
}

