extern unsigned int *auStack_50;
extern int fn_82E780A8();
extern int fn_82E78690();
extern int fn_82E79B28();
extern int fn_82EEB7A8();
extern int memcpy();


unsigned __int64 fn_82E7AC38(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned int auStack_50;
  
  if ((param_2 == 0) ||
     (uVar5 = (unsigned int)*(unsigned short *)(param_2 + 10), uVar5 < *(unsigned short *)(param_2 + 0x40))) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar2 = 0;
    if (uVar5 < *(unsigned int *)(param_1 + 0x1e0)) {
      do {
        uVar1 = *(unsigned int *)(param_1 + 0x1e0);
        lVar6 = (unsigned __int64)uVar1 - 1;
        lVar3 = fn_82E78690(param_1 + 0x178,lVar6,&auStack_50);
        if ((-(unsigned int)(lVar3 != 0) & auStack_50) == 0) goto LAB_82e7ad50;
        fn_82EEB7A8(param_1 + 0x1e4);
        if (((unsigned __int64)uVar1 <= (unsigned __int64)*(unsigned int *)(param_1 + 0x1e0)) &&
           (iVar4 = fn_82E780A8(param_1 + 0x178,lVar6), -1 < iVar4)) {
          *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + -1;
        }
      } while (uVar5 < *(unsigned int *)(param_1 + 0x1e0));
    }
    memcpy(param_1 + 0x13c,param_2,0x3c);
    if ((unsigned __int64)*(unsigned short *)(param_1 + 0x146) != 0) {
      lVar3 = fn_82E78690(param_1 + 0x178,(unsigned __int64)*(unsigned short *)(param_1 + 0x146) - 1,&auStack_50);
      uVar5 = -(unsigned int)(lVar3 != 0) & auStack_50;
      if (uVar5 == 0) {
LAB_82e7ad50:
        uVar2 = 0xffffffff8000ffff;
      }
      else {
        *(unsigned int *)(uVar5 + 0x17) = *(unsigned int *)(param_2 + 0x3c);
        if (*(int *)(uVar5 + 300) != 0) {
          if (*(short *)(param_2 + 0x40) == 0) {
            *(unsigned int *)(uVar5 + 300) = 0;
            *(unsigned char *)(uVar5 + 0x130) = 0;
            *(unsigned int *)(uVar5 + 0x134) = 0;
          }
          else if (*(short *)(param_2 + 0x40) != 0) {
            do {
              lVar3 = fn_82E78690(param_1 + 0x178,(*(unsigned short *)(param_1 + 0x146) - uVar2) + -1,
                                    &auStack_50);
              uVar5 = -(unsigned int)(lVar3 != 0) & auStack_50;
              if (uVar5 == 0) goto LAB_82e7ad50;
              uVar2 = uVar2 + 1 & 0xffff;
              *(unsigned int *)(uVar5 + 0x134) = *(unsigned int *)(param_2 + 0x44);
              *(unsigned char *)(uVar5 + 0x13c) = *(unsigned char *)(param_2 + 0x48);
            } while (uVar2 < *(unsigned short *)(param_2 + 0x40));
          }
        }
        uVar2 = fn_82E79B28(param_1);
      }
    }
  }
  return uVar2;
}

