extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8251F8E0();
extern int fn_8251FBA8();
extern int fn_825200A8();
extern int fn_825200F0();
extern int fn_82554D38();
extern int fn_82554E20();
extern int fn_82554F20();
extern int fn_8265BF48();
extern int fn_827D6968();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83265A24;
extern unsigned int uRam832822a0;


void fn_825F4DE0(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  char cVar4;
  unsigned __int64 uVar5;
  unsigned int auStack_70 [4];
  unsigned char auStack_60 [96];
  
  *(unsigned int *)(param_1 + 0x900) = 0;
  uVar2 = fn_82554D38();
  *(unsigned int *)(param_1 + 0x8dc) = uVar2;
  auStack_70[0] = fn_8265BF48(0xffffffff821ca3fc,0);
  if (((-(unsigned __int64)uRam832822a0 & ~(unsigned __int64)uRam832822a0 & 0xffffffff) >> 0x1f == 0) ||
     (iVar3 = fn_825200A8(auStack_70,param_2), iVar1 = lbl_83265988, iVar3 == 0)) {
    fn_82554E20(*(unsigned int *)(param_1 + 0x8dc),param_2);
  }
  else {
    uVar5 = 0;
    fn_825200F0(auStack_60);
    if ((((*(char *)(iVar1 + 0xd8) == '\0') && (*(int *)(iVar1 + 0x124) != -1)) &&
        (*(int *)(iVar1 + 0x120) != -1)) &&
       (cVar4 = fn_827D6968(lbl_83265A24,auStack_60), cVar4 != '\0')) {
      uVar2 = fn_8251F8E0(param_2,lbl_83265988);
      *(unsigned int *)(param_1 + 0x928) = uVar2;
      uVar5 = fn_8251FBA8();
    }
    if (*(int *)(param_1 + 0x928) != 0) {
      fn_82554F20(*(unsigned int *)(param_1 + 0x8dc),*(int *)(param_1 + 0x928),uVar5,param_2);
    }
  }
  *(unsigned int *)(param_1 + 0x91c) = param_3;
  *(unsigned int *)(param_1 + 0x918) = 0;
  *(unsigned int *)(param_1 + 0x8fc) = 1;
  uVar2 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x8f8) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x8f4) = uVar2;
  *(unsigned int *)(param_1 + 0x920) = uVar2;
  *(unsigned int *)(param_1 + 0x924) = uVar2;
  return;
}

