extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_82EDD518();
extern int fn_82F68CC0();


void fn_82ED5C68(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned char auStack_40 [4];
  unsigned char auStack_3c [60];
  
  if ((((*(int *)(param_1 + 0x4b00) != 0) && ((param_2 & 0xffffffff) != 0)) &&
      ((param_3 & 0xffffffff) != 0)) &&
     (((param_4 & 0xffffffff) != 0 && ((param_5 & 0xffffffff) != 0)))) {
    lVar1 = (__int64)*(int *)(param_1 + 0x550) * (__int64)*(int *)(param_1 + 0x548);
    lVar2 = (__int64)*(int *)(param_1 + 0x55c) * (__int64)*(int *)(param_1 + 0x554);
    fn_82F68CC0(*(unsigned int *)(param_1 + 0x4b08),param_2,lVar1);
    fn_82F68CC0((unsigned __int64)*(unsigned int *)(param_1 + 0x4b08) + lVar1,param_3,lVar2);
    fn_82F68CC0((unsigned __int64)*(unsigned int *)(param_1 + 0x4b08) + lVar2 + lVar1,param_4,lVar2);
    fn_82EDD518(*(unsigned int *)(param_1 + 0x4b00),*(unsigned int *)(param_1 + 0x4b08),
                      *(unsigned int *)(param_1 + 0x4ac0),auStack_3c,param_5,
                      *(unsigned int *)(param_1 + 0x4ae8),auStack_40,*(int *)(param_1 + 0x6f4c) != 0);
  }
  return;
}

