#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82A1E968();
extern int fn_82C44B20();
extern int fn_82C48040();
extern int fn_82C48100();
extern int fn_82C4C448();
extern int fn_82C562F0();
extern unsigned int iStack_78;
extern unsigned int uStack_74;


unsigned __int64
fn_82C4D608(int param_1,int param_2,unsigned __int64 param_3,int param_4,int param_5,int param_6,
             int param_7,int param_8)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int aiStack_80 [2];
  int iStack_78;
  unsigned int uStack_74;
  
  iVar1 = *(int *)(param_1 + 0x2e0);
  uVar2 = *(unsigned int *)(iVar1 + 0x6070);
  if (*(int *)(iVar1 + 0x4ff8) == 0) {
    fn_82A1E968(&iStack_78);
    *(unsigned int *)(iVar1 + 0x4ff8) = 1;
    *(__int64 *)(iVar1 + 0x4fe0) = *(__int64 *)(iVar1 + 0x4fe0) - CONCAT44(iStack_78,uStack_74);
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
    if ((((((param_3 & 0xffffffff) == 0) || (param_4 == 0)) || (param_5 == 0)) ||
        ((param_6 == 0 || (param_7 == 0)))) || ((param_8 == 0 || (param_2 == 0)))) {
      uVar3 = 0xfffffffffffffffd;
    }
    else {
      uVar6 = (unsigned int)param_3;
      if (*(int *)(iVar1 + 0x5618) == 0) {
        *(unsigned int *)(iVar1 + 0x5684) = uVar6;
        *(int *)(iVar1 + 0x5688) = param_4;
        *(unsigned int *)(iVar1 + 0x5680) = 1;
        *(int *)(iVar1 + 0x568c) = param_5;
        *(int *)(iVar1 + 0x5690) = param_6;
        *(int *)(iVar1 + 0x5694) = param_7;
        *(int *)(iVar1 + 0x5698) = param_8;
        uVar3 = fn_82C4C448(param_1,0x30323449,0xc,0,0,param_3);
        fn_82C44B20(iVar1);
      }
      else {
        fn_82C48040(param_1,aiStack_80,&iStack_78);
        iVar4 = *(int *)(iVar1 + 0x5664);
        if ((aiStack_80[0] == iVar4) && (iStack_78 == *(int *)(iVar1 + 0x5668))) {
          *(unsigned int *)(iVar1 + 0x5684) = uVar6;
          *(int *)(iVar1 + 0x5688) = param_4;
          *(unsigned int *)(iVar1 + 0x5680) = 1;
          *(int *)(iVar1 + 0x568c) = param_5;
          *(int *)(iVar1 + 0x5690) = param_6;
          *(int *)(iVar1 + 0x5694) = param_7;
          *(int *)(iVar1 + 0x5698) = param_8;
          uVar3 = fn_82C4C448(param_1,0x30323449,0xc,0,0,param_3);
          fn_82C44B20(iVar1);
        }
        else {
          if (*(int *)(iVar1 + 0x566c) == 0) {
            if (iVar4 < aiStack_80[0]) {
              iVar4 = aiStack_80[0];
            }
            iVar5 = *(int *)(iVar1 + 0x5668);
            if (*(int *)(iVar1 + 0x5668) < iStack_78) {
              iVar5 = iStack_78;
            }
            iVar4 = fn_82C562F0((unsigned __int64)uVar2 + 8,
                                      ((__int64)iVar5 * (__int64)iVar4 + 0x20U & 0x3fffffff) << 2,
                                      0xffffffff82196582);
            *(int *)(iVar1 + 0x566c) = iVar4;
            *(unsigned int *)(iVar1 + 0x5670) = iVar4 + 0x7fU & 0xffffff80;
            if (iVar4 == 0) {
              return 0xfffffffffffffff7;
            }
          }
          *(unsigned int *)(iVar1 + 0x5680) = 0;
          fn_82C4C448(param_1,0x30323449,0xc,0,0,*(unsigned int *)(iVar1 + 0x5670));
          *(unsigned int *)(iVar1 + 0x5680) = 1;
          *(unsigned int *)(iVar1 + 0x5684) = uVar6;
          *(int *)(iVar1 + 0x5688) = param_4;
          *(int *)(iVar1 + 0x568c) = param_5;
          *(int *)(iVar1 + 0x5690) = param_6;
          *(int *)(iVar1 + 0x5694) = param_7;
          *(int *)(iVar1 + 0x5698) = param_8;
          uVar3 = fn_82C48100(param_1,0x30323449,0xc,aiStack_80[0],iStack_78,
                                  *(unsigned int *)(iVar1 + 0x5664),*(unsigned int *)(iVar1 + 0x5668),
                                  *(unsigned int *)(iVar1 + 0x5670));
          fn_82C44B20(iVar1);
        }
      }
    }
  }
  else {
    uVar3 = 0xfffffffffffffffc;
  }
  return uVar3;
}

