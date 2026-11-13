extern int fn_8267B8F0();
extern int fn_826EA070();
extern int fn_826EA0C0();
extern int fn_826EA350();
extern int fn_826EA5C8();
extern int jpeg_std_error();
extern unsigned int lbl_8200D84C;
extern unsigned int lbl_831E7E64;


unsigned int * fn_826EAC58(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  *param_1 = &lbl_8200D84C;
  uVar1 = fn_8267B8F0(lbl_831E7E64,0x540,0x20,0);
  param_1[0xc1] = uVar1;
  puVar4 = param_1 + 0x6e;
  *(unsigned char *)((int)param_1 + 0x309) = 0;
  *(unsigned char *)(param_1 + 0xc2) = 0;
  uVar1 = jpeg_std_error(puVar4);
  puVar3 = param_1 + 2;
  *puVar4 = (unsigned int)fn_826EA5C8;
  param_1[2] = uVar1;
  iVar2 = fn_826EA070(puVar3,puVar4);
  if (iVar2 != 0) {
    fn_826EA350(puVar3,param_3);
    fn_826EA0C0(puVar3,puVar4,0);
  }
  return param_1;
}

