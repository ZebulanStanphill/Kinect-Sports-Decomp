extern unsigned int *auStack_60;
extern int fn_82F68CC0();
extern unsigned int iStack_5c;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_82AA05D8(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int iVar3;
  __int64 lVar2;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  fn_82F68CC0(auStack_60,param_1,0x30);
  uVar1 = uStack_40;
  uVar5 = 0;
  if (uStack_40 == 1) {
    uVar6 = (unsigned __int64)uStack_3c;
    if (uVar6 == 0) {
      uVar5 = (__int64)(int)(unsigned int)*(unsigned short *)(param_3 + 6) *
              (__int64)(int)(unsigned int)*(unsigned short *)(param_3 + 4);
      if ((iStack_5c == 2) || (iStack_5c == 1)) {
        if ((uVar5 & 3) == 0) {
          uVar5 = uVar5 >> 2;
        }
        else {
          uVar5 = (uVar5 >> 2) + 1;
        }
      }
    }
    else if (uVar6 != 0) {
      piVar4 = (int *)(*(int *)(param_3 + 0xc) + param_2 + -4);
      do {
        piVar4 = piVar4 + 2;
        iVar3 = *piVar4 + param_2;
        uStack_44 = (unsigned int)*(unsigned short *)(iVar3 + 6);
        uStack_48 = (unsigned int)*(unsigned short *)(iVar3 + 4);
        uStack_50 = (unsigned int)*(unsigned short *)(*piVar4 + param_2);
        uStack_4c = (unsigned int)*(unsigned short *)(iVar3 + 2);
        uStack_40 = (unsigned int)*(unsigned short *)(iVar3 + 8);
        uStack_3c = (unsigned int)*(unsigned short *)(iVar3 + 10);
        lVar2 = ((int (*)())fn_82AA05D8)(auStack_60,param_2);
        uVar6 = uVar6 - 1;
        uVar5 = lVar2 + uVar5;
      } while (uVar6 != 0);
    }
  }
  else {
    uStack_40 = 1;
    iVar3 = fn_82AA05D8(auStack_60,param_2,param_3);
    uVar5 = (__int64)iVar3 * (__int64)(int)uVar1;
  }
  return uVar5;
}

