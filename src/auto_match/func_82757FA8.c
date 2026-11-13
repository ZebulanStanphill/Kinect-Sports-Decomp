extern int fn_82757D58();
extern int fn_827AFEE8();
extern int fn_827B00E8();
extern unsigned int iStack_68;
extern unsigned int iStack_74;
extern unsigned int iStack_80;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


void fn_82757FA8(int *param_1,unsigned int param_2,unsigned int param_3,char param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  int iStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  int iStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  int iStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned char uStack_5c;
  
  uVar3 = param_3 - param_2;
  uVar4 = 0;
  if (param_1[1] != 0) {
    iVar6 = 0;
    uVar7 = 0;
    do {
      uVar5 = ((int *)(iVar6 + *param_1))[1] + uVar7;
      if (((param_2 <= uVar7) && (uVar7 < param_3)) || ((uVar7 <= param_2 && (param_2 < uVar5)))) {
        iVar1 = *(int *)(iVar6 + *param_1);
        uVar2 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x154);
        if (uVar2 == 0) {
          uVar2 = fn_82757D58(iVar1);
        }
        iStack_68 = param_1[4];
        uStack_78 = 0xffffffff;
        iStack_80 = 0;
        uStack_6c = 0;
        uStack_60 = 0;
        uStack_64 = 0;
        uStack_5c = 8;
        if (uVar7 <= param_2) {
          iStack_80 = param_2 - uVar7;
        }
        uStack_7c = *(int *)(iVar6 + *param_1 + 4) - iStack_80;
        if (uVar3 < uStack_7c) {
          uStack_7c = uVar3;
        }
        iStack_74 = iStack_80;
        uStack_70 = uStack_7c;
        if (param_4 == '\0') {
          fn_827B00E8(uVar2,&iStack_80);
        }
        else {
          fn_827AFEE8();
        }
        uVar3 = uVar3 - uStack_7c;
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 8;
      uVar7 = uVar5;
    } while (uVar4 < (unsigned int)param_1[1]);
  }
  return;
}

