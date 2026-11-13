#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_828358A8();
extern int fn_82835968();
extern int fn_82F64020();
extern unsigned int uStack_24;
extern unsigned int uStack_26;
extern unsigned int uStack_27;


void fn_82836098(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  char *pcVar6;
  char *pcVar7;
  unsigned char bStack_28;
  unsigned char uStack_27;
  unsigned short uStack_26;
  unsigned int uStack_24;
  
  fn_82835968(param_1,param_2,&bStack_28);
  pcVar3 = (char *)fn_828358A8(param_1);
  uVar4 = 0xffffffff8201f410;
  pcVar6 = "int";
  pcVar7 = pcVar3;
  do {
    cVar1 = *pcVar7;
    cVar2 = *pcVar6;
    if (cVar1 == '\0') break;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    uVar4 = 0xffffffff8201f338;
  }
  else {
    pcVar6 = "unsigned int";
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      uVar4 = 0xffffffff8201f34c;
    }
    else {
      pcVar6 = "short";
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar5 = (unsigned __int64)CONCAT11(bStack_28,uStack_27);
        uVar4 = 0xffffffff8201f358;
        goto LAB_82836454;
      }
      pcVar6 = "unsigned short";
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar5 = (unsigned __int64)CONCAT11(bStack_28,uStack_27);
        uVar4 = 0xffffffff8201f36c;
        goto LAB_82836454;
      }
      pcVar6 = "long";
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar4 = 0xffffffff8201f378;
      }
      else {
        pcVar6 = "unsigned long";
        pcVar7 = pcVar3;
        do {
          cVar1 = *pcVar7;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 != cVar2) {
          pcVar6 = "long long";
          pcVar7 = pcVar3;
          do {
            cVar1 = *pcVar7;
            cVar2 = *pcVar6;
            if (cVar1 == '\0') break;
            pcVar7 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            uVar4 = 0xffffffff8201f39c;
          }
          else {
            pcVar6 = "unsigned long long";
            pcVar7 = pcVar3;
            do {
              cVar1 = *pcVar7;
              cVar2 = *pcVar6;
              if (cVar1 == '\0') break;
              pcVar7 = pcVar7 + 1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 != cVar2) {
              pcVar6 = "float";
              pcVar7 = pcVar3;
              do {
                cVar1 = *pcVar7;
                cVar2 = *pcVar6;
                if (cVar1 == '\0') break;
                pcVar7 = pcVar7 + 1;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                fn_82F64020(param_3,0x100,0xffffffff8201f3c8,
                                  (double)(float)CONCAT22(CONCAT11(bStack_28,uStack_27),uStack_26));
                return;
              }
              pcVar6 = "double";
              pcVar7 = pcVar3;
              do {
                cVar1 = *pcVar7;
                cVar2 = *pcVar6;
                if (cVar1 == '\0') break;
                pcVar7 = pcVar7 + 1;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                fn_82F64020(param_3,0x100,0xffffffff8201f3d4,
                                  CONCAT44(CONCAT22(CONCAT11(bStack_28,uStack_27),uStack_26),
                                           uStack_24));
                return;
              }
              pcVar6 = "bool";
              pcVar7 = pcVar3;
              do {
                cVar1 = *pcVar7;
                cVar2 = *pcVar6;
                if (cVar1 == '\0') break;
                pcVar7 = pcVar7 + 1;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                uVar5 = 0xffffffff8201f3e0;
                if (bStack_28 == 0) {
                  uVar5 = 0xffffffff8201f3e8;
                }
                uVar4 = 0xffffffff8201f3f0;
              }
              else {
                pcVar6 = "char";
                pcVar7 = pcVar3;
                do {
                  cVar1 = *pcVar7;
                  cVar2 = *pcVar6;
                  if (cVar1 == '\0') break;
                  pcVar7 = pcVar7 + 1;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 == cVar2);
                if (cVar1 == cVar2) {
                  uVar4 = 0xffffffff8201f3fc;
                  uVar5 = (unsigned __int64)(char)bStack_28;
                }
                else {
                  pcVar7 = "unsigned char";
                  do {
                    cVar1 = *pcVar3;
                    cVar2 = *pcVar7;
                    if (cVar1 == '\0') break;
                    pcVar3 = pcVar3 + 1;
                    pcVar7 = pcVar7 + 1;
                  } while (cVar1 == cVar2);
                  if (cVar1 != cVar2) {
                    return;
                  }
                  uVar5 = (unsigned __int64)bStack_28;
                }
              }
              goto LAB_82836454;
            }
            uVar4 = 0xffffffff8201f3b8;
          }
          fn_82F64020(param_3,0x100,uVar4,
                            CONCAT44(CONCAT22(CONCAT11(bStack_28,uStack_27),uStack_26),uStack_24));
          return;
        }
        uVar4 = 0xffffffff8201f38c;
      }
    }
  }
  uVar5 = (unsigned __int64)CONCAT22(CONCAT11(bStack_28,uStack_27),uStack_26);
LAB_82836454:
  fn_82F64020(param_3,0x100,uVar4,uVar5);
  return;
}

