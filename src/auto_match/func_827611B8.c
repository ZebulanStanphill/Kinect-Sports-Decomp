typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_120;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_220;
extern unsigned int *auStack_268;
extern unsigned int *auStack_270;
extern unsigned int *auStack_a0;
extern unsigned int fStack_294;
extern unsigned int fStack_298;
extern unsigned int fStack_29c;
extern unsigned int fStack_2a0;
extern int fn_8275D2B8();
extern int fn_8275E130();
extern int fn_8275E498();
extern int fn_8275FD58();
extern int fn_8275FDB0();
extern int fn_82760648();
extern unsigned int iStack_230;
extern unsigned int iStack_250;
extern unsigned int iStack_2b4;
extern unsigned int iStack_2b8;
extern unsigned int iStack_2bc;
extern unsigned int iStack_2c0;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_204;
extern unsigned int uStack_208;
extern unsigned int uStack_20c;
extern unsigned int uStack_278;
extern unsigned int uStack_27c;
extern unsigned int uStack_280;
extern unsigned int uStack_288;
extern unsigned int uStack_28c;
extern unsigned int uStack_290;


unsigned __int64 fn_827611B8(int *param_1,int *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  __int64 lVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  int iVar11;
  int iVar12;
  int iStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  int aiStack_2b0 [2];
  int aiStack_2a8;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  struct { unsigned int first; unsigned int second; } stack_pair_290;

  unsigned int uStack_288;
  unsigned char abStack_284 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_280;

  unsigned int uStack_278;
  unsigned char auStack_270 [8];
  unsigned char auStack_268 [8];
  unsigned char abStack_260 [16];
  int iStack_250;
  unsigned char abStack_240 [16];
  int iStack_230;
  unsigned char auStack_220 [20];
  unsigned int uStack_20c;
  unsigned int uStack_208;
  unsigned int uStack_204;
  char cStack_200;
  unsigned char auStack_1a0 [20];
  unsigned int uStack_18c;
  unsigned int uStack_188;
  unsigned int uStack_184;
  char cStack_180;
  unsigned char auStack_120 [128];
  unsigned char auStack_a0 [160];

  iStack_2b8 = 0;
  iStack_2bc = 0;
  (**(int (***)())(*param_1 + 0x44))(param_1,&iStack_2b8,&iStack_2bc);
  iStack_2c0 = 0;
  iStack_2b4 = 0;
  (**(int (***)())(*param_2 + 0x44))(param_2,&iStack_2c0,&iStack_2b4);
  if ((iStack_2b8 == iStack_2c0) && (iStack_2bc == iStack_2b4)) {
    fn_82760648(auStack_220,param_1);
    fn_82760648(auStack_1a0,param_2);
    while (cStack_200 != '\x01') {
      if (cStack_180 == '\x01') goto LAB_82761438;
      pbVar10 = (unsigned char *)&stack_pair_290.first;
      pbVar8 = (unsigned char *)&stack_pair_280.first;
      stack_pair_290.first = uStack_20c;
      stack_pair_290.second = uStack_208;
      uStack_288 = uStack_204;
      stack_pair_280.first = uStack_18c;
      stack_pair_280.second = uStack_188;
      uStack_278 = uStack_184;
      do {
        bVar1 = *pbVar10;
        bVar2 = *pbVar8;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar10 = pbVar10 + 1;
        pbVar8 = pbVar8 + 1;
      } while (pbVar10 != abStack_284);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) goto LAB_82761438;
      fn_8275FD58(&aiStack_2a8,auStack_220);
      fn_8275FD58(aiStack_2b0,auStack_1a0);
      fn_8275E130(&aiStack_2a8,&fStack_294,&fStack_29c);
      fn_8275E130(aiStack_2b0,&fStack_298,&fStack_2a0);
      iVar12 = aiStack_2a8;
      if ((fStack_294 != fStack_298) || (fStack_29c != fStack_2a0)) goto LAB_82761438;
      fn_8275D2B8(auStack_120,aiStack_2a8);
      fn_8275FD58(auStack_270,auStack_120);
      iVar5 = fn_8275FDB0(auStack_270);
      iVar11 = aiStack_2b0[0];
      fn_8275D2B8(auStack_a0,aiStack_2b0[0]);
      fn_8275FD58(auStack_268,auStack_a0);
      iVar6 = fn_8275FDB0(auStack_268);
      if (iVar5 != iVar6) goto LAB_82761438;
      while( true ) {
        if ((*(unsigned char *)(iVar12 + 0x20) == 1) ||
           (bVar3 = false, (*(unsigned char *)(iVar12 + 0x20) & 0x80) == 0)) {
          bVar3 = true;
        }
        if (bVar3) break;
        if ((*(unsigned char *)(iVar11 + 0x20) == 1) ||
           (bVar3 = false, (*(unsigned char *)(iVar11 + 0x20) & 0x80) == 0)) {
          bVar3 = true;
        }
        if (bVar3) goto LAB_82761438;
        fn_8275E498(&aiStack_2a8,abStack_260);
        fn_8275E498(aiStack_2b0,abStack_240);
        if (iStack_250 != iStack_230) goto LAB_82761438;
        pbVar8 = abStack_240;
        pbVar10 = abStack_260;
        lVar7 = 0;
        if (iStack_250 * 4 != 0) {
          pbVar9 = pbVar10 + iStack_250 * 4;
          do {
            lVar7 = (unsigned __int64)*pbVar10 - (unsigned __int64)*pbVar8;
            if (lVar7 != 0) break;
            pbVar10 = pbVar10 + 1;
            pbVar8 = pbVar8 + 1;
          } while (pbVar10 != pbVar9);
        }
        iVar12 = aiStack_2a8;
        iVar11 = aiStack_2b0[0];
        if ((int)lVar7 != 0) goto LAB_82761438;
      }
    }
    uVar4 = 1;
  }
  else {
LAB_82761438:
    uVar4 = 0;
  }
  return uVar4;
}
