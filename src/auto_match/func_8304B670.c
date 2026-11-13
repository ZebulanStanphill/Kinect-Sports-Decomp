#define true 1
extern int fn_8304D678();
extern int fn_8304D690();


unsigned __int64 fn_8304B670(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38);
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x28);
  uVar4 = 0x2d;
  uVar2 = (unsigned __int64)*(unsigned short *)(param_1 + 0x3c);
  uVar10 = (unsigned __int64)(*param_2 >> 6);
  lVar5 = 0;
  uVar6 = 0;
  uVar9 = ((uVar3 - uVar1 & 0x3ffffff) << 6) / uVar2;
  trapWord(6,uVar2,0);
  uVar8 = uVar10;
  do {
    if (uVar8 == 0) {
LAB_8304b790:
      *param_2 = uVar6;
      trapWord(6,(unsigned __int64)*(unsigned short *)(param_1 + 0x3c),0);
      fn_8304D690(param_1,uVar9,
                      (((unsigned __int64)*(unsigned int *)(param_1 + 0x34) & 0x3ffffff) << 6) /
                      (unsigned __int64)*(unsigned short *)(param_1 + 0x3c));
      return uVar4;
    }
    trapWord(6,uVar2,0);
    if (*(short *)(param_1 + 0x1c) == 1) {
      uVar2 = ((*(unsigned int *)(param_1 + 0x34) - uVar3) + uVar1 & 0xffffffff) / uVar2;
      if (uVar2 <= (uVar10 & 0xffffffff)) {
        uVar4 = 0x11;
        uVar10 = uVar2;
      }
LAB_8304b76c:
      lVar7 = (uVar10 & 0x3ffffff) * 0x40;
      fn_8304D678(param_1,uVar9,lVar7 + uVar9);
      uVar6 = (int)lVar7 + (int)lVar5;
      *(unsigned int *)(param_1 + 0x28) =
           (unsigned int)*(unsigned short *)(param_1 + 0x3c) * (int)uVar10 + *(int *)(param_1 + 0x28);
      goto LAB_8304b790;
    }
    uVar8 = (*(unsigned int *)(param_1 + 0x30) - uVar3 & 0xffffffff) / uVar2;
    if ((uVar10 & 0xffffffff) < uVar8) goto LAB_8304b76c;
    lVar7 = (uVar8 & 0x3ffffff) * 0x40;
    *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x2c);
    fn_8304D678(param_1,uVar9,lVar7 + uVar9);
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x28);
    uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38);
    lVar5 = lVar7 + lVar5;
    uVar6 = (unsigned int)lVar5;
    uVar2 = (unsigned __int64)*(unsigned short *)(param_1 + 0x3c);
    uVar10 = uVar10 - uVar8;
    trapWord(6,uVar2,0);
    uVar9 = ((uVar3 - uVar1 & 0x3ffffff) << 6) / uVar2;
    if (*(short *)(param_1 + 0x1c) != 0) {
      *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -1;
    }
    uVar8 = uVar10 & 0xffffffff;
  } while( true );
}

