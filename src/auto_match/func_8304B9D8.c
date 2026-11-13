extern unsigned int *auStack_40;
extern int fn_8304B7E0();
extern int fn_8304D8A0();
extern unsigned int uStack_34;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_8304B9D8(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int aiStack_48 [2];
  unsigned char auStack_40 [12];
  unsigned short uStack_34;
  
  uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 8) + 0x138);
  if (uVar6 == 0) {
    uVar1 = 2;
  }
  else {
    iVar2 = fn_8304D8A0(uVar6,*(unsigned int *)(*(int *)(param_1 + 8) + 0x13c),auStack_40,0x12,
                            param_1 + 0x10,&uStack_50,aiStack_48,(int *)(param_1 + 0x34));
    if (iVar2 == 1) {
      uVar4 = (unsigned __int64)uStack_34;
      *(unsigned short *)(param_1 + 0x3c) = uStack_34;
      lVar5 = uStack_4c + uVar6;
      iVar2 = (int)lVar5;
      *(int *)(param_1 + 0x38) = iVar2;
      lVar3 = (__int64)(int)(uStack_50 >> 6) * (__int64)(int)(unsigned int)uStack_34 + lVar5;
      *(int *)(param_1 + 0x2c) = (int)lVar3;
      if ((aiStack_48[0] == 0) || (*(short *)(*(int *)(param_1 + 8) + 0xd4) == 1)) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34) + iVar2;
      }
      else {
        *(unsigned int *)(param_1 + 0x30) = (aiStack_48[0] + 1U >> 6) * (unsigned int)uStack_34 + iVar2;
      }
      *(int *)(param_1 + 0x28) = iVar2;
      trapWord(6,uVar4,0);
      *(int *)(param_1 + 0x20) = (int)(((lVar3 - lVar5 & 0x3ffffffU) << 6) / uVar4);
      trapWord(6,uVar4,0);
      *(int *)(param_1 + 0x24) =
           (int)((((unsigned __int64)*(unsigned int *)(param_1 + 0x30) - lVar5 & 0x3ffffff) << 6) /
                (unsigned __int64)uStack_34);
      if ((*(unsigned char *)(*(int *)(param_1 + 8) + 0xdb) & 0x80) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = fn_8304B7E0(param_1);
      }
    }
    else {
      uVar1 = 7;
    }
  }
  return uVar1;
}

