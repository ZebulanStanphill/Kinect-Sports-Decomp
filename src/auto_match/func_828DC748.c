extern unsigned int *auStack_30;
extern int fn_8288B760();
extern int fn_8288F1E8();
extern int fn_828B23E0();
extern int fn_828B2BF8();
extern int fn_828B5580();
extern int fn_828B55B0();


unsigned __int64 fn_828DC748(int param_1)

{
  unsigned char uVar1;
  unsigned __int64 uVar2;
  char cVar4;
  unsigned __int64 uVar3;
  unsigned char auStack_30 [16];
  
  fn_828B5580(auStack_30,param_1 + 0x60);
  uVar2 = fn_8288F1E8(*(unsigned int *)(param_1 + 0x6c),auStack_30);
  fn_828B55B0(auStack_30);
  if (((uVar2 & 0xffffffff) != 0) && (cVar4 = fn_8288B760(uVar2), cVar4 != '\0')) {
    uVar1 = *(unsigned char *)(param_1 + 0x80);
    uVar3 = fn_828B2BF8();
    fn_828B23E0(uVar3,uVar2,uVar1,param_1 + 0x88);
  }
  return 1;
}

