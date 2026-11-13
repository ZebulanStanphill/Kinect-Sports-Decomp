extern int fn_82460D38();
extern unsigned int lbl_832765BC;


void fn_8235A508(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = lbl_832765BC;
  uVar1 = *(unsigned int *)(*(int *)(lbl_832765BC + 0x28) + 0x40);
  *param_3 = *(unsigned int *)(*(int *)(lbl_832765BC + 0x28) + 0x3c);
  *param_5 = uVar1;
  fn_82460D38(iVar2,0xffffffff821bbce4,param_1,0x20);
  fn_82460D38(iVar2,0xffffffff821bbcf0,param_2,0x20);
  fn_82460D38(iVar2,0xffffffff821bbcfc,param_4,0x20);
  return;
}

