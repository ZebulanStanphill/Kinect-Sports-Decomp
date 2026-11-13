typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_d0;
extern int fn_82ABE0E8();
extern int strncmp();
extern int memcpy();


bool fn_82ABF228(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned char auStack_120 [32];
  unsigned char auStack_100 [48];
  unsigned char auStack_d0 [160];
  
  memcpy(auStack_d0,0xffffffff820d7990,0x9d);
  memcpy(auStack_100,0xffffffff820d7964,0x26);
  iVar5 = strncmp(param_2,auStack_d0,0x9c);
  if ((iVar5 == 0) || (iVar5 = strncmp(param_2,auStack_100,0x25), iVar5 == 0)) {
    for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
      if ((*(unsigned int *)(uVar1 + 0x1c) & 1) == 0) {
        uVar2 = *(unsigned int *)(uVar1 + 0x18);
        do {
          uVar2 = uVar2 & 0xfffffffe;
          if (uVar2 - 0x28 == 0) break;
          uVar4 = *(unsigned int *)(uVar2 - 0x20) >> 7 & 0x7f;
          if (((((uVar4 == 0x56) || (uVar4 == 0x57)) || (uVar4 == 0x59)) ||
              ((uVar4 == 0x5a || (uVar4 == 0x54)))) || (bVar3 = false, uVar4 == 0x55)) {
            bVar3 = true;
          }
          if ((bVar3) && ((iVar5 = fn_82ABE0E8(uVar2 - 0x28,param_1), iVar5 == 8 || (iVar5 == 9)))
             ) {
            return true;
          }
          uVar2 = *(unsigned int *)(uVar2 - 4);
        } while ((uVar2 & 1) == 0);
      }
    }
  }
  memcpy(auStack_120,0xffffffff820d7950,0x14);
  iVar5 = strncmp(param_2,auStack_120,0x13);
  return iVar5 == 0;
}

