typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ACAFD8();
extern int fn_82AD12C8();
extern int fn_82AF9758();
extern int fn_82B85910();
extern int fn_82B8BCB0();


unsigned __int64
fn_82AF9DC8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned int *param_5,
             unsigned __int64 param_6,unsigned int *param_7)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar4;
  unsigned __int64 uVar3;
  char cVar6;
  unsigned int uVar5;
  unsigned int uVar7;
  
  iVar4 = fn_82AF9758();
  if (iVar4 == 0) {
LAB_82af9fec:
    uVar3 = 1;
  }
  else {
    if (iVar4 != 3) {
      uVar7 = *param_7;
      *param_7 = uVar7 & 0xfffffffe;
      uVar5 = param_3[3];
      uVar1 = param_5[3];
      if ((*param_3 >> 0x19 & 7) + (*param_5 >> 0x19 & 7) < 5) {
        *param_7 = uVar7 & 0xfffffffa;
        cVar6 = fn_82ACAFD8(uVar5);
        if ((cVar6 != '\0') && (cVar6 = fn_82B85910(uVar5,param_6), cVar6 != '\0')) {
          cVar6 = fn_82B8BCB0(param_1,uVar5,param_6,1);
          if (cVar6 == '\0') goto LAB_82af9e08;
          *param_7 = *param_7 | 4;
        }
        *param_7 = *param_7 & 0xfffffff7;
        cVar6 = fn_82ACAFD8(uVar1);
        if ((cVar6 != '\0') && (cVar6 = fn_82B85910(uVar1,param_6), cVar6 != '\0')) {
          cVar6 = fn_82B8BCB0(param_1,uVar1,param_6,1);
          if (cVar6 == '\0') goto LAB_82af9e08;
          *param_7 = *param_7 | 8;
        }
        uVar7 = *param_7 & 0xffffdfff;
        *param_7 = uVar7;
        uVar5 = *(unsigned int *)(uVar5 + 8) >> 7 & 0x7f;
        if ((uVar5 == 0x7d) || (bVar2 = false, uVar5 == 0x7c)) {
          bVar2 = true;
        }
        if (bVar2) {
          uVar5 = *(unsigned int *)(uVar1 + 8) >> 7 & 0x7f;
          if ((uVar5 == 0x7d) || (bVar2 = false, uVar5 == 0x7c)) {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_82af9f78;
          if ((((*param_5 ^ *param_3) >> 1 & 1) == 0) && (((*param_5 ^ *param_3) & 0x18) == 0))
          goto LAB_82af9f78;
LAB_82af9fc0:
          *param_7 = uVar7 | 0x2000;
        }
        else {
LAB_82af9f78:
          uVar7 = 0;
          uVar5 = 0;
          if ((*param_3 & 8) != 0) {
            uVar7 = fn_82AD12C8(param_2);
          }
          if ((*param_5 & 8) != 0) {
            uVar5 = fn_82AD12C8(param_4);
          }
          if (uVar7 != uVar5) {
            uVar7 = *param_7;
            goto LAB_82af9fc0;
          }
          param_7[2] = uVar7;
        }
        uVar7 = *param_7;
        if ((uVar7 & 0x2000) == 0) {
          uVar7 = uVar7 & 0xfffff80f | 0xa0;
        }
        else {
          uVar7 = uVar7 & 0xfffff80f | 0x140;
        }
        *param_7 = uVar7;
        goto LAB_82af9fec;
      }
    }
LAB_82af9e08:
    uVar3 = 0;
  }
  return uVar3;
}

