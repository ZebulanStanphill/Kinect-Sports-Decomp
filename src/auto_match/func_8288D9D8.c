extern unsigned int *auStack_40;
extern int fn_8288CBD8();
extern int fn_82897620();
extern int fn_8289CB70();
extern int fn_8289F350();
extern int fn_828B5580();
extern int fn_828BDDA0();
extern unsigned int lbl_82023640;
extern unsigned int lbl_82023648;


unsigned int * fn_8288D9D8(unsigned int *param_1,int *param_2,unsigned __int64 param_3,char param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  unsigned int auStack_40;
  
  fn_828BDDA0();
  *param_1 = &lbl_82023648;
  param_1[0x14] = &lbl_82023640;
  fn_828B5580(param_1 + 0x20,param_2 + 5);
  uVar5 = 0;
  param_1[0x22] = (int)param_3;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(unsigned char *)(param_1 + 0x27) = 1;
  *(char *)((int)param_1 + 0x9d) = param_4;
  *(unsigned char *)((int)param_1 + 0x9e) = *(unsigned char *)(param_2 + 0x17);
  if (param_4 != '\0') {
    uVar2 = fn_8289F350(param_2[4],param_3);
    iVar4 = (**(int (***)())(*param_2 + 8))(param_2);
    uVar1 = *(unsigned int *)(*(int *)(iVar4 + 0x10) + 8);
    if (uVar1 != 0) {
      do {
        uVar3 = fn_82897620(iVar4,uVar5);
        auStack_40 = fn_8289CB70(uVar3,uVar2,1,1);
        fn_8288CBD8(param_1 + 0x23,&auStack_40);
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (unsigned __int64)uVar1);
    }
  }
  return param_1;
}

