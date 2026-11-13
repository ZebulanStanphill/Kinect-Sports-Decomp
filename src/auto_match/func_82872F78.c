extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82810280();
extern int fn_828108B8();
extern int fn_82810A28();
extern int fn_82835208();
extern int fn_8287AB90();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned __int64 fn_82872F78(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [48];
  
  uVar1 = fn_8287AB90();
  puVar2 = (unsigned int *)fn_828108B8(&uStack_50,param_2,uVar1);
  stack_pair_70.first = *puVar2;
  stack_pair_70.second = puVar2[1];
  uStack_68 = puVar2[2];
  fn_82810280(param_1 + 0xf4,&stack_pair_70.first);
  puVar2 = (unsigned int *)fn_82810A28(auStack_40,param_1 + 0xf4);
  uStack_60 = *puVar2;
  uStack_5c = puVar2[1];
  uStack_58 = puVar2[2];
  puVar2 = (unsigned int *)fn_828108B8(auStack_30,param_2,&uStack_60);
  uStack_50 = *puVar2;
  uStack_4c = puVar2[1];
  uStack_48 = puVar2[2];
  fn_82835208(param_3,&uStack_50);
  return 0x20150000;
}

