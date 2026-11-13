#define true 1
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern unsigned int *auStack_80;
extern unsigned int *auStack_98;
extern int fn_82A2C4A8();
extern int fn_82A2C520();
extern int fn_82A2C660();
extern int fn_82A2C7D8();
extern int fn_82A2CB08();
extern int fn_82A2E9B0();
extern int fn_82A2F770();
extern int fn_82A30690();
extern int fn_82A30700();
extern int fn_82F68CC0();
extern unsigned int iStack_a0;
extern unsigned int uStack_40;
extern unsigned int uStack_90;
extern unsigned int uStack_9c;


unsigned __int64 fn_82A31960(int param_1,int param_2,int *param_3,char *param_4)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned short uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  int iStack_a0;
  unsigned int uStack_9c;
  unsigned int auStack_98 [2];
  unsigned int uStack_90;
  char *pcStack_8c;
  unsigned char auStack_80 [40];
  unsigned char bStack_58;
  unsigned char bStack_54;
  unsigned char bStack_53;
  unsigned char bStack_52;
  unsigned char bStack_51;
  unsigned char bStack_50;
  unsigned char bStack_4f;
  unsigned int uStack_40;
  
  iVar6 = *(int *)(param_2 + 0x50);
  if (*(unsigned short *)(param_4 + 8) == 0) {
    return 0xffffffffc000000d;
  }
  pcVar7 = *(char **)(param_4 + 0xc) + *(unsigned short *)(param_4 + 8);
  pcVar10 = pcVar7;
  if (pcVar7[-1] == '\\') {
    pcVar10 = pcVar7 + -1;
    pcVar7 = pcVar7 + -1;
  }
  do {
    if (pcVar10 <= *(char **)(param_4 + 0xc)) {
LAB_82a319dc:
      uVar3 = (unsigned short)((int)pcVar7 - (int)pcVar10);
      uVar2 = (int)pcVar7 - (int)pcVar10 & 0xffff;
      uStack_90 = CONCAT22(uVar3,uVar3);
      pcStack_8c = pcVar10;
      iVar5 = fn_82A2C7D8(&uStack_90);
      if (iVar5 == 0) {
        return 0xffffffffc0000033;
      }
      if (*(int *)(iVar6 + 0xc) == 0) {
        piVar9 = (int *)param_3[2];
      }
      else {
        piVar9 = *(int **)(*(int *)(iVar6 + 0xc) + 8);
        if (((*(unsigned char *)((int)piVar9 + 0x35) & 4) == 0) &&
           (((*(unsigned char *)((int)param_3 + 0x35) ^ *(unsigned char *)((int)piVar9 + 0x35)) & 1) != 0)) {
          return 0xffffffffc0000022;
        }
      }
      if ((int *)*param_3 != param_3) {
        return 0xffffffffc0000022;
      }
      uVar4 = fn_82A2E9B0(param_1,piVar9,&uStack_90,0,auStack_80);
      if ((int)uVar4 < 0) {
        if ((int)uVar4 != -0x3fffffcc) {
          return uVar4;
        }
      }
      else {
        if ((*param_4 == '\0') || ((bStack_58 & 0x80) != 0)) {
          return 0xffffffffc0000035;
        }
        iVar6 = fn_82A2C660(piVar9,&uStack_90);
        if (iVar6 != 0) {
          return 0xffffffffc0000022;
        }
        uVar4 = fn_82A30690(param_1,uStack_40,&iStack_a0,&uStack_90,auStack_98,&uStack_9c);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        *(unsigned char *)(iStack_a0 + 0x28) = *(unsigned char *)(iStack_a0 + 0x28) & 0xc0;
        fn_82A2CB08(param_1,uStack_90,auStack_98[0],uStack_9c);
        if (((unsigned __int64)bStack_52 * 0x100 + (unsigned __int64)bStack_53) * 0x100 + (unsigned __int64)bStack_54 !=
            0) {
          fn_82A2F770(param_1,((unsigned __int64)bStack_4f * 0x100 + (unsigned __int64)bStack_50) * 0x100 +
                                (unsigned __int64)bStack_51,0,0);
        }
      }
      fn_82F68CC0(param_3 + 0x14,pcVar10,uVar2);
      *(char *)(param_3 + 0xd) = (char)uVar2;
      if ((int *)param_3[2] != piVar9) {
        iVar6 = param_3[0x12];
        piVar11 = param_3 + 0x12;
        piVar8 = (int *)param_3[0x13];
        *piVar8 = iVar6;
        *(int **)(iVar6 + 4) = piVar8;
        fn_82A2C4A8(param_3[2]);
        bVar1 = *(unsigned char *)((int)piVar9 + 0x35);
        param_3[2] = (int)piVar9;
        fn_82A2C520(piVar9,bVar1 & 1);
        if (((bVar1 & 1) != 0) ||
           (piVar8 = (int *)(param_1 + 0x78), (*(unsigned char *)((int)piVar9 + 0x35) & 4) == 0)) {
          piVar8 = piVar9;
        }
        iVar6 = *piVar8;
        param_3[0x13] = (int)piVar8;
        *piVar11 = iVar6;
        *(int **)(iVar6 + 4) = piVar11;
        *piVar8 = (int)piVar11;
      }
      uVar4 = fn_82A30700(param_1,param_3,0);
      return uVar4;
    }
    if (*pcVar10 == '\\') {
      pcVar10 = pcVar10 + 1;
      goto LAB_82a319dc;
    }
    pcVar10 = pcVar10 + -1;
  } while( true );
}

