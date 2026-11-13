typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8304DF58();
extern int fn_8304E098();
extern unsigned int lbl_82002AE0;
extern unsigned int *lbl_83265044;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5d;
extern unsigned int uStack_5e;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_80;


unsigned __int64 fn_8304E470(int *param_1)

{
  float fVar1;
  unsigned short uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int *piVar8;
  unsigned __int64 uStack_80;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned char bStack_60;
  unsigned char uStack_5e;
  unsigned char uStack_5d;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char uStack_40;

  if (*(char *)((int)param_1 + 0x41) == '\0') {
    iVar3 = param_1[2];
    iVar7 = *(int *)(iVar3 + 0x6c);
    if ((*(int *)(iVar7 + 0x18) != 0) || (*(int *)(iVar7 + 8) != -1)) {
      uVar2 = *(unsigned short *)(iVar3 + 0xd4);
      uStack_44 = 0;
      bVar5 = false;
      stack_pair_50.second = 0;
      uStack_48 = 0;
      stack_pair_50.first = lbl_82002AE0;
      fVar1 = *(float *)(iVar3 + 0xdc);
      uStack_80 = ((((unsigned __int64)(uStack_80)) & (~(((unsigned __int64)0xFF) << 56))) | ((((unsigned __int64)((unsigned char)(int)fVar1)) & ((unsigned __int64)0xFF)) << 56));
      uStack_40 = (unsigned char)uStack_80;
      if (((*(unsigned int *)(*(int *)(iVar3 + 0x6c) + 0x14) >> 0x1e & 1) != 0) &&
         ((*(unsigned char *)(iVar3 + 0xdb) & 0x80) == 0)) {
        iVar4 = *(int *)(iVar3 + 0x138);
        param_1[0xd] = iVar4;
        iVar3 = *(int *)(iVar3 + 0x13c);
        param_1[0xf] = iVar3;
        if ((iVar4 == 0) || (bVar5 = true, iVar3 == 0)) {
          bVar5 = false;
        }
      }
      stack_pair_70.first = 0;
      stack_pair_70.second = (unsigned int)*(unsigned short *)(iVar7 + 0x1c);
      piVar8 = param_1 + 10;
      uStack_64 = 0;
      uStack_68 = 0;
      bStack_60 = (unsigned char)((unsigned int)*(unsigned int *)(iVar7 + 0x14) >> 0x1f);
      uStack_5e = 0;
      uStack_5d = 0;
      uStack_80 = (__int64)(int)fVar1;
      uVar6 = (**(int (***)())(*lbl_83265044 + 0x10))
                        (lbl_83265044,*(unsigned int *)(iVar7 + 8),&stack_pair_70.first,&stack_pair_50.first,0,piVar8,0);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      if (!bVar5) {
        *(unsigned char *)((int)param_1 + 0x41) = 1;
        (**(int (***)())(*(int *)*piVar8 + 0x1c))();
        goto LAB_8304e678;
      }
      uVar6 = (**(int (***)())(*param_1 + 0x38))(param_1,uVar2);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      iVar3 = param_1[0xf];
      iVar7 = (**(int (***)())(*(int *)*piVar8 + 0x28))((int *)*piVar8,iVar3,0,&uStack_80);
      if (iVar7 == 1) {
        param_1[0x15] = param_1[0xc];
        fn_8304DF58(param_1);
        if (*(char *)(param_1 + 0x16) == '\0') {
          param_1[0x11] = (int)uStack_80;
          param_1[0x15] = iVar3 - (int)uStack_80;
        }
        (**(int (***)())(*(int *)*piVar8 + 0x1c))();
        return 1;
      }
    }
    uVar6 = 2;
  }
  else {
LAB_8304e678:
    uVar6 = fn_8304E098(param_1);
  }
  return uVar6;
}
