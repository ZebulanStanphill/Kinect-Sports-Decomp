#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_44;
extern unsigned int *auStack_50;
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E59EC8();
extern int fn_82EE62E8();
extern unsigned int uStack_46;
extern unsigned int uStack_48;


unsigned __int64 fn_82EE63E8(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  int *piVar6;
  unsigned int uVar7;
  unsigned short auStack_50 [4];
  unsigned short uStack_48;
  unsigned short uStack_46;
  unsigned int auStack_44 [17];
  
  if (param_1[3] == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else if (param_2 == (unsigned int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    uVar1 = param_1[0x10];
    if (uVar1 < 0x1a) {
      uVar5 = 0x1a;
    }
    else {
      piVar6 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar6);
      fn_82E576A8(param_1 + 8,piVar6);
      uVar2 = fn_82E57738(auStack_50,piVar6);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar7 = (unsigned int)auStack_50[0];
      uVar5 = uVar7 * 6 + 0x1a;
      if (uVar5 <= uVar1) {
        uVar5 = 0;
        if (uVar7 != 0) {
          do {
            uStack_48 = 0;
            auStack_44[0] = 0;
            uVar2 = fn_82E57738(&uStack_48,piVar6);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = fn_82E59EC8(auStack_44,piVar6);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            iVar4 = fn_82EE62E8(param_1 + 0x12,
                                    CONCAT44(CONCAT22(uStack_48,uStack_46),auStack_44[0]),0);
            if (iVar4 == 0) {
              return 0xffffffff8007000e;
            }
            uVar5 = uVar5 + 1 & 0xffff;
          } while (uVar5 < uVar7);
        }
        *param_2 = uVar1 - param_1[0x10];
        uVar3 = (**(int (***)())(*param_1 + 0x2c))(param_1);
        if (uVar3 != *param_2) {
          return 0xffffffffc00d3a9a;
        }
        return 0;
      }
    }
    *param_2 = uVar5;
    uVar2 = 0xffffffffc00d36b1;
  }
  return uVar2;
}

