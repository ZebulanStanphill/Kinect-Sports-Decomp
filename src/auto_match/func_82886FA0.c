extern int fn_82886A90();
extern int fn_82887E80();
extern int fn_82888170();
extern int fn_82888228();
extern unsigned int lbl_83212A1C;


unsigned __int64 fn_82886FA0(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  uVar4 = param_3 >> 3;
  iVar2 = *(int *)(param_2 * 4 + param_1);
  if ((1 << (param_3 - (param_3 & 0xfffffff8) & 0x3f) & (unsigned int)*(unsigned char *)(iVar2 + uVar4 + 0x1c)) != 0)
  {
    uVar5 = fn_82887E80();
    fn_82888170(uVar5,2,0x22,1);
    uVar5 = 0x22;
    goto LAB_828870dc;
  }
  uVar1 = *(unsigned int *)(iVar2 + 0xc);
  uVar3 = 1 << (*(unsigned int *)(param_2 * 4 + lbl_83212A1C) & 0x3f);
  uVar7 = (uVar3 >> 2) + uVar1;
  if (uVar3 <= uVar7) {
    uVar7 = uVar7 - uVar3;
  }
  uVar6 = uVar1 - (uVar3 >> 1);
  if (uVar3 <= uVar6) {
    uVar6 = uVar6 + uVar3;
  }
  if (uVar6 < uVar7) {
    if (uVar6 < param_3) goto LAB_8288705c;
  }
  else {
    if (uVar6 < param_3) goto LAB_82887064;
LAB_8288705c:
    if (param_3 <= uVar7) {
LAB_82887064:
      *(unsigned char *)(uVar4 + iVar2 + 0x1c) =
           (unsigned char)(1 << (param_3 + uVar4 * -8 & 0x3f)) | *(unsigned char *)(uVar4 + iVar2 + 0x1c);
      if (uVar7 <= uVar1) {
        if ((param_3 <= uVar1) && (uVar7 < param_3)) {
          return 1;
        }
        fn_82886A90(param_1,param_2);
        return 1;
      }
      if (param_3 <= uVar1) {
        return 1;
      }
      if (uVar7 < param_3) {
        return 1;
      }
      fn_82886A90(param_1,param_2);
      return 1;
    }
  }
  uVar5 = fn_82887E80();
  fn_82888170(uVar5,2,0x23,1);
  uVar5 = 0x23;
LAB_828870dc:
  fn_82888228(param_2,uVar5,1);
  return 0;
}

