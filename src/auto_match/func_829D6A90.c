extern unsigned int *auStack_70;
extern int fn_829D4C60();
extern int fn_829D5BF8();
extern int fn_829D5E60();
extern int fn_829D6960();
extern int fn_829DA960();
extern int fn_82A94368();
extern unsigned int lbl_83217170;
extern unsigned int lbl_832179FC;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


__int64 fn_829D6A90(unsigned int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned char auStack_70 [4];
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  
  switch(param_1) {
  case 0x2c002:
    return 0;
  default:
    DbgPrint(0xffffffff82057544,param_1);
    return -0x7fff0001;
  case 0x2c006:
    uVar3 = (unsigned __int64)param_2[2];
    if ((param_2[2] & 1) == 0) {
      uVar3 = uVar3 | 1;
    }
    uVar4 = param_2[1];
    uVar3 = uVar3 | 0x80000000;
    uVar2 = 2;
    goto code_r0x829d6b04;
  case 0x2c007:
    uVar3 = 0xffffffff80000000;
    uVar4 = 0;
    uVar2 = 1;
    goto code_r0x829d6b04;
  case 0x2c008:
    uVar3 = 0xffffffff80000000;
    uVar4 = 0;
    uVar2 = 6;
code_r0x829d6b04:
    lVar5 = fn_829D5BF8(uVar2,*param_2,uVar4,uVar3);
    return lVar5;
  case 0x2c00a:
    lVar5 = 0;
    uVar4 = *(unsigned int *)(lbl_832179FC + 0x8f048);
    break;
  case 0x2c00b:
    *(unsigned int *)(lbl_832179FC + 0x8f4fc) = 1;
    sync(0);
    return 0;
  case 0x2c00e:
    lVar5 = fn_829D5E60(*param_2);
    return lVar5;
  case 0x2c00f:
    fn_829D6960();
    return 0;
  case 0x2c011:
    lVar5 = -0x7fff0001;
    if (0x17 < *param_2) {
      RtlEnterCriticalSection(0xffffffff8315c428);
      iVar1 = lbl_83217170;
      if (lbl_83217170 != 0) {
        fn_82A94368(lbl_83217170 + 0x30,0,auStack_70);
        lVar5 = 0;
        param_2[1] = uStack_6c;
        param_2[2] = uStack_68;
        param_2[3] = uStack_60;
        param_2[4] = uStack_5c;
        param_2[5] = *(unsigned int *)(iVar1 + 100);
      }
      RtlLeaveCriticalSection(0xffffffff8315c428);
    }
    uVar4 = 0x18;
    break;
  case 0x2c012:
    lVar5 = -0x7fff0001;
    if (7 < *param_2) {
      lVar5 = fn_829D4C60(param_2[1],1);
    }
    uVar4 = 8;
    break;
  case 0x2c013:
    lVar5 = -0x7fff0001;
    if ((0xf < *param_2) && (lVar5 = fn_829DA960(param_2[1],&uStack_80), -1 < lVar5)) {
      param_2[2] = uStack_80;
      param_2[3] = uStack_7c;
    }
    uVar4 = 0x10;
  }
  *param_2 = uVar4;
  return lVar5;
}

