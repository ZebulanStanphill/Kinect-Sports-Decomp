#define true 1
extern unsigned int *auStack_d0;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822790E0();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82517978();
extern int fn_82526C70();
extern int fn_82672C20();
extern unsigned int lbl_821A8228;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


unsigned int *
fn_82278BA0(unsigned int *param_1,unsigned int *param_2,int *param_3,char *param_4,unsigned int *param_5
             ,unsigned int *param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  char cVar6;
  char *pcVar7;
  char cVar8;
  struct { unsigned int first; unsigned int second; } stack_pair_e0;

  unsigned char uStack_d8;
  unsigned char auStack_d0 [192];
  
  *param_1 = &lbl_821A8228;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_82517978(param_1 + 2,*param_2,param_2[1],0);
  uVar1 = *param_5;
  uVar2 = param_5[1];
  uVar3 = *param_6;
  uVar4 = param_6[1];
  param_1[0x16] = 0;
  param_1[0x8a] = uVar1;
  param_1[0x89] = 1;
  param_1[0x8b] = uVar2;
  param_1[0x8c] = uVar3;
  param_1[0x8d] = uVar4;
  *(unsigned char *)(param_1 + 0x96) = 0;
  param_1[0x97] = 0;
  fn_822C5B18(param_1 + 0x98,param_7);
  pcVar7 = (char *)(param_1 + 6);
  param_1[0x9e] = 0;
  iVar5 = (int)param_4 - (int)pcVar7;
  do {
    if (param_1 + 0x16 <= pcVar7) break;
    cVar6 = pcVar7[iVar5];
    *pcVar7 = cVar6;
    pcVar7 = pcVar7 + 1;
  } while (cVar6 != '\0');
  if (pcVar7 == (char *)(param_1 + 0x16)) {
    pcVar7[-1] = '\0';
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(unsigned char *)(param_1 + 0x19) = 0;
  *(unsigned short *)(param_1 + 0x29) = 0;
  *(unsigned short *)(param_1 + 0x49) = 0;
  *(unsigned short *)(param_1 + 0x69) = 0;
  do {
    if (param_3[1] == -1) {
      stack_pair_e0.first = 0;
      stack_pair_e0.second = 0;
      fn_82526C70(auStack_d0,0x80,0xffffffff821a81d0);
      fn_82273CD8(&stack_pair_e0.first,2);
      uStack_d8 = 0;
      fn_82672C20(param_1[2],auStack_d0,&stack_pair_e0.first,1);
      param_1[0x89] = 0;
      fn_82273C88(&stack_pair_e0.first);
code_r0x82278d40:
      uVar1 = ltcg_pool_0_0f;
      param_1[0x93] = ltcg_pool_0_0f;
      param_1[0x92] = uVar1;
      param_1[0x95] = uVar1;
      param_1[0x94] = uVar1;
      param_1[0x8f] = uVar1;
      param_1[0x8e] = uVar1;
      param_1[0x91] = uVar1;
      param_1[0x90] = uVar1;
      if (param_2[1] != 0) {
        fn_822315A0();
      }
      fn_82359C18(param_7);
      return param_1;
    }
    cVar6 = *param_4;
    cVar8 = *(char *)(param_3 + 2);
    if (cVar6 == cVar8) {
      pcVar7 = param_4;
      do {
        pcVar7 = pcVar7 + 1;
        if (cVar6 == '\0') goto code_r0x82278ce8;
        cVar6 = *pcVar7;
        cVar8 = pcVar7[(int)param_3 + (8 - (int)param_4)];
      } while (cVar6 == cVar8);
    }
    if (cVar6 == cVar8) {
code_r0x82278ce8:
      fn_822790E0(param_1);
      goto code_r0x82278d40;
    }
    param_3 = (int *)((int)param_3 + *param_3);
  } while( true );
}

