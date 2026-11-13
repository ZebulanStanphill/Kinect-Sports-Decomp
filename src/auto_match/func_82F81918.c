#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_40;
extern int fn_82F819D0();
extern int fn_82F86B68();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


unsigned int * fn_82F81918(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  int aiStack_50 [2];
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char auStack_40 [64];
  
  uVar3 = 0;
  uVar1 = fn_82F819D0(auStack_40,aiStack_50,param_2,0,0,0,0,param_3);
  if ((uVar1 & 4) == 0) {
    iVar2 = fn_82F86B68(auStack_40,&uStack_48);
    if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
      uVar3 = 0x80;
    }
    if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    uStack_48 = 0;
    uStack_44 = 0;
  }
  *param_1 = uVar3;
  param_1[1] = aiStack_50[0] - (int)param_2;
  *(unsigned __int64 *)(param_1 + 4) = CONCAT44(uStack_48,uStack_44);
  return param_1;
}

