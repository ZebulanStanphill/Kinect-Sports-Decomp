extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;


void fn_827B5828(double param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5,
                  __int64 param_6,unsigned int param_7,unsigned __int64 param_8,__int64 param_9)

{
  unsigned char *puVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  double dVar5;
  
  if (param_1 != (double)lbl_82002AE0) {
    uVar3 = 0;
    if (param_7 != 0) {
      dVar5 = (double)lbl_82002C5C;
      do {
        if ((int)param_6 != 0) {
          puVar1 = (unsigned char *)
                   ((uVar3 + param_5) * *(int *)(param_3 + 0x14) + param_4 +
                    *(int *)(param_3 + 0x18) + -1);
          lVar4 = param_6;
          do {
            uVar2 = (unsigned __int64)
                    (unsigned int)(int)((double)(__int64)(int)((unsigned int)(unsigned char)puVar1[1] - (int)param_9) *
                                param_1 + dVar5) + param_9;
            uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & uVar2;
            if (0xff < (int)uVar2) {
              uVar2 = 0xff;
            }
            puVar1 = puVar1 + 1;
            *puVar1 = (char)uVar2;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_7);
    }
  }
  return;
}

