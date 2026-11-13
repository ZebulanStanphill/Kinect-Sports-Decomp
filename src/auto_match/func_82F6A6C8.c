extern void fn_82F6A638(void);
extern unsigned int fn_82A1F470(void);
extern unsigned int *auStack_50;
extern int fn_82A1E0C0();
extern int fn_82D7E470();
extern void _invalid_parameter_noinfo(void);
extern int free();
extern int *_errno(void);
extern int fn_82F682B0();
extern int fn_82F6E1C8();
extern int fn_82F6F940();


unsigned int fn_82F6A6C8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
                       unsigned __int64 param_5,unsigned char *param_6)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned char auStack_50 [8];
  
  uVar3 = 0;
  if (param_3 == 0) {
    puVar1 = (unsigned int *)_errno();
    *puVar1 = 0x16;
    _invalid_parameter_noinfo();
  }
  else {
    fn_82D7E470();
    iVar2 = fn_82F6E1C8(1,0xc4);
    if (iVar2 != 0) {
      fn_82F6F940(iVar2,0);
      *(int *)(iVar2 + 0x54) = param_3;
      *(unsigned int *)(iVar2 + 0x58) = param_4;
      *(unsigned int *)(iVar2 + 4) = 0xffffffff;
      if (param_6 == (unsigned char *)0x0) {
        param_6 = auStack_50;
      }
      uVar3 = fn_82A1E0C0(param_1,param_2,fn_82F6A638,iVar2,param_5,param_6);
      if ((uVar3) != 0) {
        return uVar3;
      }
      uVar3 = fn_82A1F470();
    }
    free(iVar2);
    if ((uVar3) != 0) {
      fn_82F682B0(uVar3);
    }
  }
  return 0;
}

