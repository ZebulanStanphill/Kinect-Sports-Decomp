extern int fn_82C4E470();
extern int fn_82C65F98();
extern int fn_82C66008();
extern int fn_82CA60E0();
extern unsigned int lbl_82109DF0;
extern unsigned int lbl_82109DF1;


unsigned __int64
fn_82C69268(int param_1,char *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  unsigned char bVar1;
  unsigned __int64 *puVar2;
  char cVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  
  *(unsigned int *)(param_1 + 0x1c8) = 0;
  *(unsigned int *)(param_1 + 0x150) = 0;
  fn_82CA60E0(param_1,&cStack_40,param_2,param_3,param_4,param_5,param_6);
  if (*(int *)(param_1 + 0x3cb0) == 0) {
    fn_82C66008(param_1,&cStack_3c);
    cStack_3e = cStack_3c + cStack_40;
    cStack_3d = cStack_3b + cStack_3f;
    fn_82C65F98(&cStack_3e,*(unsigned int *)(param_1 + 0xe24));
    uVar4 = 0;
    *param_2 = cStack_3e;
    param_2[1] = cStack_3d;
  }
  else {
    puVar2 = *(unsigned __int64 **)(param_1 + 0x54);
    iVar5 = (int)((*puVar2 >> 0x33) << 1);
    fn_82C4E470(puVar2,(&lbl_82109DF0)[iVar5]);
    bVar1 = (&lbl_82109DF1)[iVar5];
    if (bVar1 == 0xff) {
      *(unsigned int *)((int)puVar2 + 0x14) = 3;
    }
    if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
      iVar5 = (int)cStack_40 + (unsigned int)bVar1;
      iVar6 = iVar5 + -0x20;
      cVar3 = (char)iVar5;
      if (*(int *)(param_1 + 0xf4) < iVar6) {
        *param_2 = cVar3 + -0x60;
      }
      else if (iVar6 < *(int *)(param_1 + 0xf0)) {
        *param_2 = cVar3 + ' ';
      }
      else {
        *param_2 = (char)iVar6;
      }
      puVar2 = *(unsigned __int64 **)(param_1 + 0x54);
      iVar5 = (int)((*puVar2 >> 0x33) << 1);
      fn_82C4E470(puVar2,(&lbl_82109DF0)[iVar5]);
      bVar1 = (&lbl_82109DF1)[iVar5];
      if (bVar1 == 0xff) {
        *(unsigned int *)((int)puVar2 + 0x14) = 3;
      }
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
        iVar5 = (int)cStack_3f + (unsigned int)bVar1;
        iVar6 = iVar5 + -0x20;
        cVar3 = (char)iVar5;
        if (*(int *)(param_1 + 0xf4) < iVar6) {
          param_2[1] = cVar3 + -0x60;
          return 0;
        }
        if (iVar6 < *(int *)(param_1 + 0xf0)) {
          param_2[1] = cVar3 + ' ';
          return 0;
        }
        param_2[1] = (char)iVar6;
        return 0;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

