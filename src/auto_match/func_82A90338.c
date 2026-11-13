extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_60;
extern unsigned int *auStack_c0;
extern int fn_82A8B5F8();
extern int fn_82A8C620();
extern int fn_82A8D250();
extern int fn_82A8E9C8();
extern int fn_82A8EF40();
extern int fn_82A8F4B8();
extern unsigned int lbl_821CB794;
extern unsigned int lbl_8315FA80;
extern unsigned int lbl_832234AC;


unsigned __int64 fn_82A90338(int param_1,int *param_2)

{
  float *pfVar1;
  char cVar2;
  float *pfVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned int auStack_120 [4];
  unsigned char auStack_110 [48];
  unsigned char **appuStack_e0 [8];
  unsigned char auStack_c0 [32];
  unsigned char **appuStack_a0 [8];
  unsigned char **appuStack_80 [8];
  unsigned char auStack_60 [48];
  
  cVar2 = (**(int (***)())(*param_2 + 4))(param_2);
  if ((cVar2 != '\0') &&
     (cVar2 = (**(int (***)())(*param_2 + 0x10))(param_2,auStack_60,0x28,auStack_120), cVar2 != '\0')) {
    fn_82A8D250(auStack_110,auStack_60,0x28);
    fn_82A8C620(auStack_110,0x120,0x20,auStack_120);
    if (auStack_120[0] <= *(unsigned int *)(param_1 + 0x5988)) {
      *(unsigned int *)(param_1 + 0x5988) = auStack_120[0];
      fn_82A8C620(auStack_110,0,0x20,param_1 + 0x5964);
      fn_82A8C620(auStack_110,0x20,0x20,param_1 + 0x5968);
      fn_82A8C620(auStack_110,0x40,0x20,param_1 + 0x596c);
      fn_82A8C620(auStack_110,0x60,0x20,param_1 + 0x5970);
      fn_82A8C620(auStack_110,0xa0,0x20,param_1 + 0x5978);
      fn_82A8C620(auStack_110,0x80,0x20,param_1 + 0x5974);
      puVar6 = (unsigned int *)(param_1 + 0x597c);
      fn_82A8C620(auStack_110,0xc0,0x20,puVar6);
      puVar4 = (unsigned int *)(param_1 + 0x5984);
      fn_82A8C620(auStack_110,0xe0,0x20,puVar4);
      puVar5 = (unsigned int *)(param_1 + 0x5980);
      fn_82A8C620(auStack_110,0x100,0x20,puVar5);
      cVar2 = (**(int (***)())(*param_2 + 0x10))
                        (param_2,*(unsigned int *)(param_1 + 0x598c),*(unsigned int *)(param_1 + 0x5988)
                         ,auStack_120);
      if (cVar2 != '\0') {
        auStack_120[0] = 0;
        fn_82A8B5F8(appuStack_80,*(unsigned int *)(param_1 + 0x598c),*puVar6,0);
        cVar2 = fn_82A8F4B8(auStack_120,appuStack_80,param_1);
        if (cVar2 != '\0') {
          auStack_120[0] = 0;
          appuStack_80[0] = &lbl_821CB794;
          fn_82A8B5F8(appuStack_a0,*(unsigned int *)(param_1 + 0x598c),*puVar5,*puVar6);
          cVar2 = fn_82A8F4B8(auStack_120,appuStack_a0,param_1 + 0x2bec);
          if (cVar2 != '\0') {
            appuStack_a0[0] = &lbl_821CB794;
            auStack_120[0] = 0;
            fn_82A8B5F8(appuStack_e0,*(unsigned int *)(param_1 + 0x598c),*puVar4,*puVar5);
            cVar2 = fn_82A8EF40(auStack_120,appuStack_e0,param_1 + 0x57d8);
            if (cVar2 != '\0') {
              appuStack_e0[0] = &lbl_821CB794;
              auStack_120[0] = 0;
              fn_82A8B5F8(auStack_c0,*(unsigned int *)(param_1 + 0x598c),
                            *(unsigned int *)(param_1 + 0x5988),*puVar4);
              cVar2 = fn_82A8E9C8(auStack_120,auStack_c0,param_1 + 0x591c);
              if (cVar2 != '\0') {
                if ((1 < lbl_832234AC) && (lbl_8315FA80 != 1)) {
                  pfVar3 = (float *)(param_1 + 0x5814);
                  lVar7 = 0x48;
                  do {
                    pfVar3[-0xb2b] = -pfVar3[-0xb2b];
                    pfVar3[-0xb2e] = -pfVar3[-0xb2e];
                    pfVar3[-0xb20] = -pfVar3[-0xb20];
                    pfVar3[-0xb1f] = -pfVar3[-0xb1f];
                    pfVar3[-0xb23] = -pfVar3[-0xb23];
                    pfVar3[-0xb22] = -pfVar3[-0xb22];
                    pfVar3[-0x30] = -pfVar3[-0x30];
                    pfVar3[-0x33] = -pfVar3[-0x33];
                    pfVar3[-0x25] = -pfVar3[-0x25];
                    pfVar3[-0x24] = -pfVar3[-0x24];
                    pfVar1 = pfVar3 + -0x27;
                    pfVar3[-0x28] = -pfVar3[-0x28];
                    pfVar3 = pfVar3 + -0x27;
                    *pfVar3 = -*pfVar1;
                    lVar7 = lVar7 + -1;
                  } while (lVar7 != 0);
                  pfVar3 = (float *)(param_1 + 0x5958);
                  lVar7 = 3;
                  do {
                    pfVar3[-0x23] = -pfVar3[-0x23];
                    pfVar3[-0x26] = -pfVar3[-0x26];
                    pfVar3[-0x18] = -pfVar3[-0x18];
                    pfVar3[-0x17] = -pfVar3[-0x17];
                    pfVar1 = pfVar3 + -0x1a;
                    pfVar3[-0x1b] = -pfVar3[-0x1b];
                    pfVar3 = pfVar3 + -0x1a;
                    *pfVar3 = -*pfVar1;
                    lVar7 = lVar7 + -1;
                  } while (lVar7 != 0);
                }
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

