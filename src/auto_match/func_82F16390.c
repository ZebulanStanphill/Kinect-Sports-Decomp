extern int fn_82F02410();
extern int fn_82F116E8();
extern int fn_82F15A98();
extern unsigned int lbl_831B8D98;
extern unsigned int lbl_831B8E98;


void fn_82F16390(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = *(unsigned int *)(param_2 + 8);
  uVar3 = *(unsigned int *)(param_2 + 0xc);
  uVar4 = *(unsigned int *)(param_2 + 0x10);
  uVar5 = *(unsigned int *)(param_2 + 0x14);
  uVar6 = *(unsigned int *)(param_2 + 0x18);
  uVar7 = *(unsigned int *)(param_1 + 0x1ebc);
  uVar8 = fn_82F116E8();
  uVar8 = uVar8 ^ (((((iVar1 << 1 | uVar2) << 1 | uVar3) << 1 | uVar4) << 1 | uVar5) << 1 | uVar6);
  fn_82F02410(uVar7,*(unsigned int *)(&lbl_831B8D98 + uVar8 * 4),(&lbl_831B8E98)[uVar8]);
  if (*(int *)(param_1 + 0x6f98) != 0) {
    *(unsigned int *)(param_1 + 0x6fbc) = (unsigned int)(unsigned char)(&lbl_831B8E98)[uVar8] + *(int *)(param_1 + 0x6fbc);
  }
  if ((*(int *)(param_1 + 4) != 8) || (*(int *)(param_1 + 0x6ef8) == 0)) {
    fn_82F02410(uVar7,*(unsigned int *)(param_2 + 0x1c),1);
  }
  if (((*(unsigned int *)(param_1 + 0x924) & 4) != 0) && (*(int *)(param_1 + 0x6f04) == 0)) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_2 + 0x7c),1);
  }
  if ((*(int *)(param_1 + 0xa0c) != 0) && (*(int *)(param_1 + 0x97c) != 0)) {
    if (*(int *)(param_1 + 0x984) == 0) {
      if (*(char *)(param_1 + 0x980) == '\x01') {
        fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                          (((unsigned __int64)*(unsigned int *)(param_1 + 0x588) & 0x7fffffff) * 2 +
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x590)) - 1 !=
                          (unsigned __int64)*(unsigned int *)(param_2 + 0x60),1);
      }
      else {
        fn_82F15A98(param_1,(int)(*(unsigned int *)(param_2 + 0x60) + 1) >> 1,0);
      }
    }
  }
  return;
}

