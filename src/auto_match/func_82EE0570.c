typedef unsigned char bool;
#define CONCAT42(h,l) ((unsigned __int64)((((unsigned int)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT62(h,l) ((unsigned __int64)((((unsigned __int64)(h)) << 16) | ((unsigned short)(l))))
extern int fn_82E57888();
extern int fn_82F68CC0();
extern unsigned int stack0x00000014;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned __int64 fn_82EE0570(unsigned __int64 *param_1,int param_2,int *param_3)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 *puStack00000014;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  
  uVar6 = 0;
  if (((param_2 == 0) || (param_1 == (unsigned __int64 *)0x0)) || (param_3 == (int *)0x0)) {
    return 0xffffffff80070057;
  }
  *param_3 = 0;
  uVar2 = *(unsigned int *)(param_2 + 4);
  uVar3 = *(unsigned int *)(param_2 + 0x10);
  puVar4 = *(unsigned __int64 **)(param_2 + 0x14);
  puStack00000014 = param_1;
  if ((int)uVar2 < 7) {
    if (uVar2 == 6) {
      uStack_38 = puVar4[1];
      uStack_40 = CONCAT62(CONCAT42((unsigned int)*(unsigned char *)((int)puVar4 + 3) << 0x18 |
                                    (unsigned int)*(unsigned char *)((int)puVar4 + 2) << 0x10 |
                                    (unsigned int)*(unsigned char *)((int)puVar4 + 1) << 8 | (unsigned int)*(unsigned char *)puVar4,
                                    *(unsigned short *)((int)puVar4 + 4) << 8 |
                                    *(unsigned short *)((int)puVar4 + 4) >> 8),
                           (unsigned short)*puVar4 << 8 | (unsigned short)*puVar4 >> 8);
      fn_82F68CC0(param_1,&uStack_40,0x10);
      puStack00000014 = param_1 + 2;
      goto LAB_82ee0718;
    }
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        if (uVar2 < 3) goto LAB_82ee06b8;
        if (uVar2 != 3) {
          bVar1 = uVar2 == 5;
          if (4 < uVar2) goto LAB_82ee069c;
LAB_82ee05e4:
          uVar5 = *puVar4;
          uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar5 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
          uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar5)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
          *param_1 = ((uVar5 & 0xff) << 0x18 |
                     (uVar5 & 0xff00) << 8 |
                     (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 |
                     (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20 |
                     ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                     ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                     (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                     (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
          puStack00000014 = param_1 + 1;
          goto LAB_82ee0718;
        }
LAB_82ee06c8:
        *(unsigned int *)param_1 =
             (unsigned int)*(unsigned char *)((int)puVar4 + 3) << 0x18 | (unsigned int)*(unsigned char *)((int)puVar4 + 2) << 0x10 |
             (unsigned int)*(unsigned char *)((int)puVar4 + 1) << 8 | (unsigned int)*(unsigned char *)puVar4;
        puStack00000014 = (unsigned __int64 *)((int)param_1 + 4);
        goto LAB_82ee0718;
      }
LAB_82ee06d8:
      fn_82F68CC0(param_1,puVar4,uVar3);
      puStack00000014 = (unsigned __int64 *)(uVar3 + (int)param_1);
      goto LAB_82ee0718;
    }
LAB_82ee06f0:
    if ((uVar3 & 1) == 0) {
      fn_82E57888(&stack0x00000014,puVar4,uVar3);
      goto LAB_82ee0718;
    }
  }
  else {
    if (uVar2 == 0x8000) goto LAB_82ee06f0;
    if (uVar2 == 0x8001) goto LAB_82ee06d8;
    if (uVar2 != 0x8002) {
      if (uVar2 == 0x8003) goto LAB_82ee06c8;
      if (uVar2 == 0x8004) goto LAB_82ee05e4;
      bVar1 = uVar2 == 0x8005;
LAB_82ee069c:
      if (!bVar1) goto LAB_82ee06f8;
LAB_82ee06a0:
      *(unsigned short *)param_1 = *(unsigned short *)puVar4 << 8 | *(unsigned short *)puVar4 >> 8;
      puStack00000014 = (unsigned __int64 *)((int)param_1 + 2);
      goto LAB_82ee0718;
    }
LAB_82ee06b8:
    if (uVar3 == 2) goto LAB_82ee06a0;
    if (uVar3 == 4) goto LAB_82ee06c8;
  }
LAB_82ee06f8:
  uVar6 = 0xffffffffc00d3a9a;
LAB_82ee0718:
  *param_3 = (int)puStack00000014 - (int)param_1;
  return uVar6;
}

