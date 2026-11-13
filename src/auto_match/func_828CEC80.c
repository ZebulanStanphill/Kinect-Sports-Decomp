extern unsigned int *auStack_34;
extern unsigned int *auStack_58;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_823AA970();
extern int fn_8265CA20();
extern int fn_828A6130();
extern int fn_828CCC38();
extern int fn_828CCD48();
extern int fn_828CE118();
extern int fn_828CE6D8();
extern int fn_828CE968();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_828CEC80(__int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar2;
  __int64 lVar1;
  unsigned char auStack_70 [8];
  unsigned char auStack_68 [8];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned char auStack_58 [4];
  unsigned int *puStack_54;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned char auStack_34 [4];
  unsigned int *puStack_30;
  
  uVar2 = fn_823AA970(param_2);
  uStack_60 = 0;
  uStack_5c = 0;
  fn_828CCD48(auStack_58,auStack_70,auStack_70);
  uStack_3c = uStack_60;
  uStack_38 = uStack_5c;
  uStack_40 = uVar2;
  fn_828CCD48(auStack_34,auStack_70,auStack_70);
  fn_828CE118(auStack_34,auStack_58);
  lVar1 = fn_828CCC38(param_1);
  fn_828CE6D8(param_1 + 0xd,lVar1 + 0xc,&uStack_40);
  fn_828CE968(auStack_68,param_1,lVar1,0);
  fn_828A6130(auStack_68,auStack_34,*puStack_30);
  fn_8265CA20(puStack_30);
  fn_828A6130(auStack_68,auStack_58,*puStack_54);
  fn_8265CA20(puStack_54);
  return;
}

