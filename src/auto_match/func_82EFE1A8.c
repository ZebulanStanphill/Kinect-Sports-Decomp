#define CARRY8(a,b) ((((unsigned __int64)(a)) + ((unsigned __int64)(b))) < ((unsigned __int64)(a)))
extern unsigned int *auStack_6c;
extern int fn_82F261D8();
extern unsigned int uStack_70;


unsigned char fn_82EFE1A8(int param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4,int *param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  int iVar2;
  unsigned int uStack_70;
  unsigned int auStack_6c [27];
  
  auStack_6c[0] = param_5[2];
  uStack_70 = param_5[3];
  fn_82F261D8(param_1,auStack_6c,&uStack_70,param_7,param_8);
  (**(int (***)())(param_1 + 0x9b8))
            ((__int64)((int)uStack_70 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
             (__int64)((int)auStack_6c[0] >> 2) + param_3,*(int *)(param_1 + 0x564),param_4,0x10,
             auStack_6c[0] & 3,uStack_70 & 3,*(unsigned int *)(param_1 + 0x904),
             *(unsigned int *)(param_1 + 0x618));
  iVar1 = (**(int (***)())(param_1 + 0x5298))(param_2,0x10,param_4,0x10,0x10);
  if (*param_5 != 0) {
    auStack_6c[0] = param_5[4];
    uStack_70 = param_5[5];
    fn_82F261D8(param_1,auStack_6c,&uStack_70,param_7,param_8);
    (**(int (***)())(param_1 + 0x9b8))
              ((__int64)((int)uStack_70 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
               (__int64)((int)auStack_6c[0] >> 2) + param_3,*(int *)(param_1 + 0x564),param_4,0x10,
               auStack_6c[0] & 3,uStack_70 & 3,*(unsigned int *)(param_1 + 0x904),
               *(unsigned int *)(param_1 + 0x618));
    iVar2 = (**(int (***)())(param_1 + 0x5298))(param_2,0x10,param_4,0x10,0x10);
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
    }
  }
  return -!CARRY8((__int64)(iVar1 * 0x32 >> 8) - param_6,param_6 ^ 0x80000000) & 1;
}

