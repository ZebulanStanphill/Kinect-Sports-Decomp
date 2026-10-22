typedef unsigned int uint;
extern int fn_825ACF50();
extern int fn_8288CCB8();
extern int fn_8288DFB8();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();

void fn_82890FF0(int param_1,int param_2)
{
  uint *puVar1;
  int lVar2;
  int iStack_50;
  int auStack_4c;
  int auStack_48;
  unsigned char auStack_40 [8];
  unsigned char auStack_38 [8];
  unsigned char auStack_30 [8];
  
  param_2 = param_2 + 0x14;
  lVar2 = param_1 + 4;
  fn_828B5580(auStack_40,param_2);
  fn_8288CCB8(&iStack_50,lVar2,auStack_40);
  fn_828B55B0(auStack_40);
  fn_825ACF50(&auStack_4c,lVar2,iStack_50);
  fn_828B5580(auStack_38,param_2);
  iStack_50 = fn_828B55F8(auStack_38);
  if (iStack_50 != 0x8000) {
    puVar1 = (uint *)fn_8288DFB8(&auStack_4c,param_1 + 0x14,&iStack_50);
    lVar2 = *puVar1 + 0x10;
  }
  fn_828B55B0(auStack_38);
  fn_828B5580(auStack_30,param_2);
  fn_8288CCB8(&iStack_50,lVar2,auStack_30);
  fn_828B55B0(auStack_30);
  fn_825ACF50(&auStack_48,lVar2,iStack_50);
}
