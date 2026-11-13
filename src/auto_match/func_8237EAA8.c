#define NAN(x) ((x) != (x))
extern int fn_822315A0();
extern int fn_8237F060();
extern int fn_824D2AE8();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uRam831d2298;
extern unsigned int uRam831d229c;
extern unsigned int uRam831d2530;


unsigned __int64 fn_8237EAA8(double param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8,int param_9)

{
  unsigned int uVar1;
  unsigned int uVar2;
  float fVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int iStack_80;
  int iStack_7c;
  
  uVar6 = 0xffffffff831d1ca8;
  fn_824D2AE8(&iStack_80,param_2 + 0x24c);
  fVar3 = ltcg_pool_0_0f;
  uVar1 = *(unsigned int *)(param_2 + 0x274);
  if ((iStack_80 != 0) && (*(int *)(iStack_80 + 0xa0) != 0)) {
    uVar6 = (unsigned __int64)*(unsigned int *)(param_2 + 0x298);
    goto LAB_8237f03c;
  }
  dVar8 = (double)ltcg_pool_0_0f;
  if (param_9 == 0) {
    if (param_3 == 0) {
      if (in_stack_00000054 == 0) {
        if ((param_5 == 0) && ((double)*(float *)(param_2 + 0x25c) == dVar8)) {
          if (param_6 == 0) {
            if ((param_8 == 0) && ((double)*(float *)(param_2 + 0x260) == dVar8)) {
              if (in_stack_00000064 == 0) {
                uVar6 = fn_8237F060(param_2);
              }
              else {
                uVar6 = 0xffffffff831d1e70;
              }
            }
            else {
              uVar2 = *(unsigned int *)(param_2 + 0x27c);
              if (uVar2 == 0) {
                *(float *)(param_2 + 0x280) = ltcg_pool_0_0f;
                *(unsigned int *)(param_2 + 0x27c) = 1;
LAB_8237ed24:
                if (in_stack_00000064 == 0) {
                  uVar6 = 0xffffffff831d22d0;
                }
                else {
                  uVar6 = 0xffffffff831d23b4;
                }
              }
              else {
                if (uVar2 == 1) {
                  if (in_stack_0000005c == 0) goto LAB_8237ed24;
                  uVar6 = 0xffffffff831d2400;
                  if (in_stack_00000064 == 0) {
                    uVar6 = 0xffffffff831d231c;
                  }
                  uVar5 = 2;
                }
                else {
                  if (2 < uVar2) {
                    if (uVar2 == 3) {
                      uVar6 = 0xffffffff831d244c;
                      if (in_stack_00000064 == 0) {
                        uVar6 = 0xffffffff831d2368;
                      }
                      dVar7 = (double)(float)((double)*(float *)(param_2 + 0x260) - param_1);
                      if (*(float *)(&lbl_821954D8 +
                                    ((unsigned int)(unsigned char)((dVar7 < dVar8) << 2) |
                                    (unsigned int)(NAN(dVar7) || NAN(dVar8)) << 2)) < 0.0) {
                        dVar7 = dVar8;
                      }
                      *(float *)(param_2 + 0x260) = (float)dVar7;
                    }
                    goto LAB_8237efd0;
                  }
                  lVar4 = -0x7ce2dd30;
                  *(unsigned int *)(param_2 + 0x260) = uRam831d2530;
                  if (param_8 != 0) {
                    if (in_stack_00000064 != 0) goto LAB_8237ece0;
                    goto LAB_8237ebf0;
                  }
                  uVar6 = 0xffffffff831d244c;
                  if (in_stack_00000064 == 0) {
                    uVar6 = 0xffffffff831d2368;
                  }
                  uVar5 = 3;
                }
                *(unsigned int *)(param_2 + 0x27c) = uVar5;
              }
            }
          }
          else {
            if (in_stack_00000064 != 0) {
              lVar4 = -0x7ce2e0f8;
              if (param_7 != 0) goto LAB_8237ebd4;
              goto LAB_8237eb4c;
            }
            if (param_7 == 0) {
              lVar4 = -0x7ce2e0f8;
LAB_8237ebf0:
              uVar6 = lVar4 + 0x4c;
            }
            else {
LAB_8237ebe4:
              uVar6 = 0xffffffff831d1f08;
            }
          }
        }
        else if (uVar1 == 0) {
          *(float *)(param_2 + 0x25c) = ltcg_pool_0_0f;
          *(unsigned int *)(param_2 + 0x274) = 1;
          if (in_stack_00000064 == 0) {
            if (param_7 == 0) {
              uVar6 = 0xffffffff831d1fa0;
            }
            else {
              uVar6 = 0xffffffff831d1f08;
            }
          }
          else if (param_7 == 0) {
            uVar6 = 0xffffffff831d2168;
          }
          else {
            uVar6 = 0xffffffff831d20d0;
          }
          *(float *)(param_2 + 0x280) = fVar3;
        }
        else if (uVar1 == 1) {
          *(float *)(param_2 + 0x25c) = ltcg_pool_0_0f;
          if (in_stack_0000005c == 0) {
            if (in_stack_00000064 == 0) {
              if (param_7 != 0) goto LAB_8237ebe4;
              uVar6 = 0xffffffff831d1fa0;
            }
            else {
              lVar4 = -0x7ce2e0f8;
              if (param_7 != 0) goto LAB_8237ebd4;
              uVar6 = 0xffffffff831d2168;
            }
          }
          else {
            uVar6 = 0xffffffff831d21b4;
            if (in_stack_00000064 == 0) {
              uVar6 = 0xffffffff831d1fec;
            }
            uVar5 = 2;
LAB_8237ee6c:
            *(unsigned int *)(param_2 + 0x274) = uVar5;
          }
        }
        else if (uVar1 < 3) {
          if ((iStack_80 != 0) && (uVar5 = lbl_821CA460, *(int *)(iStack_80 + 0xa0) != 0)) {
LAB_8237ee54:
            *(unsigned int *)(param_2 + 0x25c) = uVar5;
            uVar6 = 0xffffffff831d224c;
            if (in_stack_00000064 == 0) {
              uVar6 = 0xffffffff831d2084;
            }
            uVar5 = 4;
            goto LAB_8237ee6c;
          }
          if (param_5 == 0) {
            uVar6 = 0xffffffff831d2200;
            *(unsigned int *)(param_2 + 0x25c) = uRam831d2298;
            if (in_stack_00000064 == 0) {
              uVar6 = 0xffffffff831d2038;
            }
            uVar5 = 3;
            goto LAB_8237ee6c;
          }
          uVar6 = 0xffffffff831d21b4;
          if (in_stack_00000064 == 0) {
            uVar6 = 0xffffffff831d1fec;
          }
          *(float *)(param_2 + 0x25c) = ltcg_pool_0_0f;
        }
        else if (uVar1 == 3) {
          dVar7 = (double)(float)((double)*(float *)(param_2 + 0x25c) - param_1);
          if (*(float *)(&lbl_821954D8 +
                        ((unsigned int)(unsigned char)((dVar7 < dVar8) << 2) | (unsigned int)(NAN(dVar7) || NAN(dVar8)) << 2)
                        ) < 0.0) {
            dVar7 = dVar8;
          }
          *(float *)(param_2 + 0x25c) = (float)dVar7;
          if (dVar7 <= dVar8) {
            uVar5 = lbl_821CA460;
            if (in_stack_00000064 != 0) {
              uVar5 = uRam831d229c;
            }
            goto LAB_8237ee54;
          }
          lVar4 = -0x7ce2e0f8;
          if (in_stack_00000064 == 0) {
LAB_8237ece0:
            uVar6 = lVar4 + 0x130;
          }
          else {
            uVar6 = 0xffffffff831d2200;
          }
        }
        else if (uVar1 < 5) {
          if (in_stack_00000064 == 0) {
            uVar6 = 0xffffffff831d2084;
            *(unsigned int *)(param_2 + 0x25c) = lbl_821CA460;
          }
          else {
            uVar6 = 0xffffffff831d224c;
            dVar7 = (double)(float)((double)*(float *)(param_2 + 0x25c) - param_1);
            if (*(float *)(&lbl_821954D8 +
                          ((unsigned int)(unsigned char)((dVar7 < dVar8) << 2) |
                          (unsigned int)(NAN(dVar7) || NAN(dVar8)) << 2)) < 0.0) {
              dVar7 = dVar8;
            }
            *(float *)(param_2 + 0x25c) = (float)dVar7;
            if (dVar7 <= dVar8) {
              *(unsigned int *)(param_2 + 0x274) = 0;
            }
          }
          if (in_stack_0000005c == 0) {
            *(float *)(param_2 + 0x25c) = fVar3;
            *(unsigned int *)(param_2 + 0x274) = 0;
          }
        }
      }
      else {
        uVar6 = 0xffffffff831d1e24;
      }
    }
    else if (in_stack_00000064 == 0) {
      if (param_4 == 0) {
        uVar6 = 0xffffffff831d1dd8;
      }
      else {
        uVar6 = 0xffffffff831d1d8c;
      }
    }
    else {
      uVar6 = 0xffffffff831d1ebc;
    }
  }
  else {
    *(float *)(param_2 + 0x260) = ltcg_pool_0_0f;
    param_8 = 0;
    lVar4 = -0x7ce2dd30;
    if (in_stack_00000064 == 0) {
LAB_8237ebd4:
      uVar6 = lVar4 + 0x1c8;
    }
    else {
LAB_8237eb4c:
      uVar6 = lVar4 + 0x214;
    }
  }
LAB_8237efd0:
  if (param_5 == 0 && (double)*(float *)(param_2 + 0x25c) == dVar8) {
    *(unsigned int *)(param_2 + 0x274) = 0;
  }
  if (param_8 == 0 && (double)*(float *)(param_2 + 0x260) == dVar8) {
    *(unsigned int *)(param_2 + 0x27c) = 0;
  }
  *(float *)(param_2 + 0x278) = (float)(param_1 + (double)*(float *)(param_2 + 0x278));
  if (uVar1 != *(unsigned int *)(param_2 + 0x274)) {
    *(float *)(param_2 + 0x278) = (float)dVar8;
  }
LAB_8237f03c:
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  return uVar6;
}

