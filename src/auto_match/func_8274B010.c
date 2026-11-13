extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8267C4F0();
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826A7398();
extern int fn_82713EE8();
extern int fn_8271D378();
extern int fn_8274A8E0();
extern int fn_8274A960();
extern unsigned int iStack_11c;
extern unsigned int iStack_224;
extern unsigned int iStack_228;
extern unsigned int iStack_230;
extern unsigned int iStack_cc;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_10c;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern unsigned int uStack_194;
extern unsigned int uStack_198;
extern unsigned int uStack_19c;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1c4;
extern unsigned int uStack_1c8;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1d4;
extern unsigned int uStack_1d8;
extern unsigned int uStack_1dc;
extern unsigned int uStack_1e0;
extern unsigned int uStack_1f0;
extern unsigned int uStack_1f4;
extern unsigned int uStack_1f8;
extern unsigned int uStack_1fc;
extern unsigned int uStack_200;
extern unsigned int uStack_204;
extern unsigned int uStack_208;
extern unsigned int uStack_20c;
extern unsigned int uStack_210;
extern unsigned int uStack_214;
extern unsigned int uStack_218;
extern unsigned int uStack_21c;
extern unsigned int uStack_220;
extern unsigned int uStack_22c;
extern unsigned int uStack_4c;
extern unsigned int uStack_58;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;
extern unsigned int uStack_d8;
extern unsigned int uStack_ec;
extern unsigned int uStack_fc;


unsigned __int64 fn_8274B010(unsigned __int64 param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  char cVar1;
  __int64 lVar2;
  int *piVar4;
  unsigned char *puVar5;
  int iVar6;
  char cVar7;
  unsigned __int64 uVar3;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  unsigned char uVar11;
  int iStack_230;
  unsigned int uStack_22c;
  int iStack_228;
  int iStack_224;
  unsigned int uStack_220;
  unsigned int uStack_21c;
  unsigned int uStack_218;
  unsigned int uStack_214;
  unsigned int uStack_210;
  unsigned int uStack_20c;
  unsigned int uStack_208;
  unsigned int uStack_204;
  unsigned int uStack_200;
  unsigned int uStack_1fc;
  unsigned int uStack_1f8;
  unsigned int uStack_1f4;
  unsigned int uStack_1f0;
  unsigned int uStack_1e0;
  unsigned int uStack_1dc;
  unsigned int uStack_1d8;
  unsigned int uStack_1d4;
  unsigned int uStack_1d0;
  unsigned int uStack_1cc;
  unsigned int uStack_1c8;
  unsigned int uStack_1c4;
  unsigned int uStack_1c0;
  unsigned int uStack_1bc;
  unsigned int uStack_1b8;
  unsigned int uStack_1b4;
  unsigned int uStack_1b0;
  unsigned int uStack_1a0;
  unsigned int uStack_19c;
  unsigned int uStack_198;
  unsigned int uStack_194;
  unsigned int uStack_190;
  unsigned int uStack_18c;
  unsigned int uStack_188;
  unsigned int uStack_184;
  unsigned int uStack_180;
  unsigned int uStack_17c;
  unsigned int uStack_178;
  unsigned int uStack_174;
  unsigned int uStack_170;
  unsigned int uStack_160;
  unsigned int uStack_15c;
  unsigned int uStack_158;
  unsigned int uStack_154;
  unsigned int uStack_150;
  unsigned int uStack_14c;
  unsigned int uStack_148;
  unsigned int uStack_144;
  unsigned int uStack_140;
  unsigned int uStack_13c;
  unsigned int uStack_138;
  unsigned int uStack_134;
  unsigned int uStack_130;
  unsigned char auStack_120 [4];
  int iStack_11c;
  unsigned char auStack_110 [4];
  unsigned char uStack_10c;
  unsigned char auStack_100 [4];
  unsigned char uStack_fc;
  unsigned char auStack_f0 [4];
  unsigned char uStack_ec;
  unsigned char auStack_e0 [8];
  unsigned int uStack_d8;
  unsigned char auStack_d0 [4];
  int iStack_cc;
  unsigned char auStack_c0 [4];
  char cStack_bc;
  unsigned char auStack_b0 [8];
  unsigned int uStack_a8;
  unsigned char auStack_a0 [8];
  unsigned int uStack_98;
  unsigned char auStack_90 [4];
  char cStack_8c;
  unsigned char auStack_80 [4];
  char cStack_7c;
  unsigned char auStack_70 [4];
  char cStack_6c;
  unsigned char auStack_60 [8];
  unsigned int uStack_58;
  unsigned char auStack_50 [4];
  unsigned char uStack_4c;
  
  lVar2 = fn_826A7398(param_2);
  piVar4 = (int *)fn_8274A8E0(lVar2 + 8);
  uVar11 = 0;
  uStack_22c = 0;
  if (piVar4 != (int *)0x0) {
    (**(int (***)())(*piVar4 + 4))(piVar4,&uStack_22c);
  }
  if (*(unsigned char *)(param_2 + 0x7c) < 7) {
    fn_82681728(&iStack_230,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,0xffffffff82012dc4);
    cVar7 = fn_8271D378(&iStack_230,param_3,0);
    lVar2 = (unsigned __int64)*(unsigned int *)(iStack_230 + 8) - 1;
    *(int *)(iStack_230 + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_826944C8(iStack_230);
    }
    if (cVar7 == '\0') {
      fn_82681728(&iStack_230,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,0xffffffff82012db0)
      ;
      cVar7 = fn_8271D378(&iStack_230,param_3,0);
      lVar2 = (unsigned __int64)*(unsigned int *)(iStack_230 + 8) - 1;
      *(int *)(iStack_230 + 8) = (int)lVar2;
      if (lVar2 == 0) {
        fn_826944C8(iStack_230);
      }
      if (cVar7 == '\0') {
        fn_82681728(&iStack_230,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,
                          0xffffffff82012ef0);
        cVar7 = fn_8271D378(&iStack_230,param_3,0);
        lVar2 = (unsigned __int64)*(unsigned int *)(iStack_230 + 8) - 1;
        *(int *)(iStack_230 + 8) = (int)lVar2;
        if (lVar2 == 0) {
          fn_826944C8(iStack_230);
        }
        if (cVar7 == '\0') {
          fn_82681728(&iStack_230,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,
                            0xffffffff82012f1c);
          cVar7 = fn_8271D378(&iStack_230,param_3,0);
          lVar2 = (unsigned __int64)*(unsigned int *)(iStack_230 + 8) - 1;
          *(int *)(iStack_230 + 8) = (int)lVar2;
          if (lVar2 == 0) {
            fn_826944C8(iStack_230);
          }
          if (cVar7 == '\0') {
            fn_82681728(&iStack_230,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,
                              0xffffffff82012ee8);
            cVar7 = fn_8271D378(&iStack_230,param_3,0);
            lVar2 = (unsigned __int64)*(unsigned int *)(iStack_230 + 8) - 1;
            *(int *)(iStack_230 + 8) = (int)lVar2;
            if (lVar2 == 0) {
              fn_826944C8(iStack_230);
            }
            if (cVar7 == '\0') {
              fn_82681728(&iStack_230,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,
                                0xffffffff82012ea0);
              cVar7 = fn_8271D378(&iStack_230,param_3,0);
              lVar2 = (unsigned __int64)*(unsigned int *)(iStack_230 + 8) - 1;
              *(int *)(iStack_230 + 8) = (int)lVar2;
              if (lVar2 == 0) {
                fn_826944C8(iStack_230);
              }
              if (cVar7 == '\0') {
                fn_82681728(&iStack_230,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,
                                  0xffffffff82012da0);
                cVar7 = fn_8271D378(&iStack_230,param_3,0);
                lVar2 = (unsigned __int64)*(unsigned int *)(iStack_230 + 8) - 1;
                *(int *)(iStack_230 + 8) = (int)lVar2;
                if (lVar2 == 0) {
                  fn_826944C8(iStack_230);
                }
                if (cVar7 == '\0') goto LAB_8274b8c0;
                piVar4 = (int *)fn_8274A960(&iStack_228,param_2);
                auStack_d0[0] = 5;
                iStack_cc = *piVar4;
                *(int *)(iStack_cc + 8) = *(int *)(iStack_cc + 8) + 1;
                fn_82695FA0(param_4,auStack_d0);
                fn_82696330(auStack_d0);
                iStack_224 = iStack_228;
                goto LAB_8274b43c;
              }
              if ((piVar4 != (int *)0x0) && ((uStack_22c & 4) == 0)) {
                uVar11 = 1;
              }
              auStack_f0[0] = 2;
              uStack_ec = uVar11;
              fn_82695FA0(param_4,auStack_f0);
              puVar5 = auStack_f0;
            }
            else {
              if ((piVar4 != (int *)0x0) && ((uStack_22c & 1) == 0)) {
                uVar11 = 1;
              }
              auStack_110[0] = 2;
              uStack_10c = uVar11;
              fn_82695FA0(param_4,auStack_110);
              puVar5 = auStack_110;
            }
          }
          else {
            cStack_7c = '\x01' - (piVar4 == (int *)0x0);
            auStack_80[0] = 2;
            fn_82695FA0(param_4,auStack_80);
            puVar5 = auStack_80;
          }
        }
        else {
          iVar6 = fn_826A7398(param_2);
          lVar2 = (**(int (***)())(*(int *)(iVar6 + 8) + 0xc))((int *)(iVar6 + 8),0x1b);
          if (lVar2 != 0) {
            fn_8267C4F0(lVar2);
          }
          cStack_bc = '\x01' - (lVar2 == 0);
          auStack_c0[0] = 2;
          fn_82695FA0(param_4,auStack_c0);
          puVar5 = auStack_c0;
        }
      }
      else {
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_194 = 0;
        uStack_198 = 0;
        uStack_18c = 1;
        uStack_190 = 1;
        uStack_174 = lbl_82002AE0;
        uStack_17c = 0;
        uStack_178 = lbl_82002AE0;
        uStack_180 = 0;
        uStack_184 = 0;
        uStack_188 = 0;
        uStack_170 = 0;
        piVar4 = (int *)fn_826A7398(param_2);
        (**(int (***)())(*piVar4 + 0x68))(piVar4,&uStack_1a0);
        auStack_60[0] = 4;
        uStack_58 = uStack_19c;
        fn_82695FA0(param_4,auStack_60);
        puVar5 = auStack_60;
      }
    }
    else {
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_154 = 0;
      uStack_158 = 0;
      uStack_14c = 1;
      uStack_150 = 1;
      uStack_134 = lbl_82002AE0;
      uStack_13c = 0;
      uStack_138 = lbl_82002AE0;
      uStack_140 = 0;
      uStack_144 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      piVar4 = (int *)fn_826A7398(param_2);
      (**(int (***)())(*piVar4 + 0x68))(piVar4,&uStack_160);
      auStack_e0[0] = 4;
      uStack_d8 = uStack_160;
      fn_82695FA0(param_4,auStack_e0);
      puVar5 = auStack_e0;
    }
  }
  else {
    pcVar8 = "screenResolutionX";
    pcVar10 = *(char **)*param_3;
    pcVar9 = pcVar10;
    do {
      cVar7 = *pcVar9;
      cVar1 = *pcVar8;
      if (cVar7 == '\0') break;
      pcVar9 = pcVar9 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar7 == cVar1);
    if (cVar7 == cVar1) {
      uStack_220 = 0;
      uStack_21c = 0;
      uStack_214 = 0;
      uStack_218 = 0;
      uStack_20c = 1;
      uStack_210 = 1;
      uStack_1f4 = lbl_82002AE0;
      uStack_1fc = 0;
      uStack_1f8 = lbl_82002AE0;
      uStack_200 = 0;
      uStack_204 = 0;
      uStack_208 = 0;
      uStack_1f0 = 0;
      piVar4 = (int *)fn_826A7398(param_2);
      (**(int (***)())(*piVar4 + 0x68))(piVar4,&uStack_220);
      auStack_a0[0] = 4;
      uStack_98 = uStack_220;
      fn_82695FA0(param_4,auStack_a0);
      puVar5 = auStack_a0;
    }
    else {
      pcVar8 = "screenResolutionY";
      pcVar9 = pcVar10;
      do {
        cVar7 = *pcVar9;
        cVar1 = *pcVar8;
        if (cVar7 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar7 == cVar1);
      if (cVar7 == cVar1) {
        uStack_1e0 = 0;
        uStack_1dc = 0;
        uStack_1d4 = 0;
        uStack_1d8 = 0;
        uStack_1cc = 1;
        uStack_1d0 = 1;
        uStack_1b4 = lbl_82002AE0;
        uStack_1bc = 0;
        uStack_1b8 = lbl_82002AE0;
        uStack_1c0 = 0;
        uStack_1c4 = 0;
        uStack_1c8 = 0;
        uStack_1b0 = 0;
        piVar4 = (int *)fn_826A7398(param_2);
        (**(int (***)())(*piVar4 + 0x68))(piVar4,&uStack_1e0);
        auStack_b0[0] = 4;
        uStack_a8 = uStack_1dc;
        fn_82695FA0(param_4,auStack_b0);
        puVar5 = auStack_b0;
      }
      else {
        pcVar8 = "hasIME";
        pcVar9 = pcVar10;
        do {
          cVar7 = *pcVar9;
          cVar1 = *pcVar8;
          if (cVar7 == '\0') break;
          pcVar9 = pcVar9 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar7 == cVar1);
        if (cVar7 == cVar1) {
          iVar6 = fn_826A7398(param_2);
          lVar2 = (**(int (***)())(*(int *)(iVar6 + 8) + 0xc))((int *)(iVar6 + 8),0x1b);
          if (lVar2 != 0) {
            fn_8267C4F0(lVar2);
          }
          cStack_8c = '\x01' - (lVar2 == 0);
          auStack_90[0] = 2;
          fn_82695FA0(param_4,auStack_90);
          puVar5 = auStack_90;
        }
        else {
          pcVar8 = "hasAudio";
          pcVar9 = pcVar10;
          do {
            cVar7 = *pcVar9;
            cVar1 = *pcVar8;
            if (cVar7 == '\0') break;
            pcVar9 = pcVar9 + 1;
            pcVar8 = pcVar8 + 1;
          } while (cVar7 == cVar1);
          if (cVar7 == cVar1) {
            cStack_6c = '\x01' - (piVar4 == (int *)0x0);
            auStack_70[0] = 2;
            fn_82695FA0(param_4,auStack_70);
            puVar5 = auStack_70;
          }
          else {
            pcVar8 = "hasMP3";
            pcVar9 = pcVar10;
            do {
              cVar7 = *pcVar9;
              cVar1 = *pcVar8;
              if (cVar7 == '\0') break;
              pcVar9 = pcVar9 + 1;
              pcVar8 = pcVar8 + 1;
            } while (cVar7 == cVar1);
            if (cVar7 == cVar1) {
              if ((piVar4 != (int *)0x0) && ((uStack_22c & 1) == 0)) {
                uVar11 = 1;
              }
              auStack_50[0] = 2;
              uStack_4c = uVar11;
              fn_82695FA0(param_4,auStack_50);
              puVar5 = auStack_50;
            }
            else {
              pcVar8 = "hasStreamingAudio";
              pcVar9 = pcVar10;
              do {
                cVar7 = *pcVar9;
                cVar1 = *pcVar8;
                if (cVar7 == '\0') break;
                pcVar9 = pcVar9 + 1;
                pcVar8 = pcVar8 + 1;
              } while (cVar7 == cVar1);
              if (cVar7 != cVar1) {
                pcVar9 = "serverString";
                do {
                  cVar7 = *pcVar10;
                  cVar1 = *pcVar9;
                  if (cVar7 == '\0') break;
                  pcVar10 = pcVar10 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (cVar7 == cVar1);
                if (cVar7 != cVar1) {
LAB_8274b8c0:
                  uVar3 = fn_82713EE8(param_1,param_2,param_3,param_4);
                  return uVar3;
                }
                piVar4 = (int *)fn_8274A960(&iStack_224,param_2);
                auStack_120[0] = 5;
                iStack_11c = *piVar4;
                *(int *)(iStack_11c + 8) = *(int *)(iStack_11c + 8) + 1;
                fn_82695FA0(param_4,auStack_120);
                fn_82696330(auStack_120);
LAB_8274b43c:
                lVar2 = (unsigned __int64)*(unsigned int *)(iStack_224 + 8) - 1;
                *(int *)(iStack_224 + 8) = (int)lVar2;
                if (lVar2 != 0) {
                  return 1;
                }
                fn_826944C8(iStack_224);
                return 1;
              }
              if ((piVar4 != (int *)0x0) && ((uStack_22c & 4) == 0)) {
                uVar11 = 1;
              }
              auStack_100[0] = 2;
              uStack_fc = uVar11;
              fn_82695FA0(param_4,auStack_100);
              puVar5 = auStack_100;
            }
          }
        }
      }
    }
  }
  fn_82696330(puVar5);
  return 1;
}

