#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack_50 ((*(unsigned __int64*)&uStack_50))
extern unsigned int *auStack_40;
extern int fn_82E57888();
extern int fn_82EF2CB8();
extern int fn_82F68CC0();
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_82EF33F0(int *param_1,int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned short *puVar4;
  int *piVar5;
  unsigned short *puStack_80;
  unsigned short *puStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int aiStack_5c [3];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned __int64 uStack_48;
  unsigned __int64 auStack_40 [8];
  
  uVar3 = 0;
  auStack_40[0] = 0;
  if (param_1[3] == 0) {
    uVar3 = 0xffffffffc00d36b6;
  }
  else if ((param_4 == (unsigned int *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    (**(int (***)())(*param_1 + 0x14))(param_1,auStack_40,0);
    if (auStack_40[0] < 0x100000000) {
      *param_4 = (unsigned int)auStack_40[0];
      if (param_3 < (unsigned int)auStack_40[0]) {
        uVar3 = 0xffffffffc00d36b1;
      }
      else {
        uStack_48 = *(unsigned __int64 *)(param_1 + 6);
        _uStack_50 = CONCAT44((unsigned int)*(unsigned char *)((int)param_1 + 0x13) << 0x18 |
                              (unsigned int)*(unsigned char *)((int)param_1 + 0x12) << 0x10 |
                              (unsigned int)*(unsigned char *)((int)param_1 + 0x11) << 8 |
                              (unsigned int)*(unsigned char *)(param_1 + 4),
                              CONCAT22(*(unsigned short *)(param_1 + 5) << 8 | *(unsigned short *)(param_1 + 5) >> 8
                                       ,*(unsigned short *)((int)param_1 + 0x16) << 8 |
                                        *(unsigned short *)((int)param_1 + 0x16) >> 8));
        fn_82F68CC0(param_2,&uStack_50,0x10);
        uVar2 = *(unsigned __int64 *)(param_1 + 8);
        uStack_4c = (unsigned int)uVar2;
        uStack_50 = (unsigned int)(uVar2 >> 0x20);
        *(unsigned __int64 *)(param_2 + 0x10) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (unsigned __int64)(uStack_4c >> 8) & 0xff00 | (unsigned __int64)(uStack_4c >> 0x18)) << 0x20 |
             ((unsigned __int64)uStack_50 & 0xff) << 0x18 |
             ((unsigned __int64)uStack_50 & 0xff00) << 8 |
             (unsigned __int64)(uStack_50 >> 8) & 0xff00 | (unsigned __int64)(uStack_50 >> 0x18);
        uStack_48 = *(unsigned __int64 *)(param_1 + 0x14);
        uStack_4c = CONCAT22(*(unsigned short *)(param_1 + 0x13) << 8 | *(unsigned short *)(param_1 + 0x13) >> 8,
                             *(unsigned short *)((int)param_1 + 0x4e) << 8 |
                             *(unsigned short *)((int)param_1 + 0x4e) >> 8);
        _uStack_50 = CONCAT44((unsigned int)*(unsigned char *)((int)param_1 + 0x4b) << 0x18 |
                              (unsigned int)*(unsigned char *)((int)param_1 + 0x4a) << 0x10 |
                              (unsigned int)*(unsigned char *)((int)param_1 + 0x49) << 8 |
                              (unsigned int)*(unsigned char *)(param_1 + 0x12),uStack_4c);
        fn_82F68CC0(param_2 + 0x18,&uStack_50,0x10);
        uVar2 = 0;
        *(unsigned int *)(param_2 + 0x28) =
             (unsigned int)*(unsigned char *)((int)param_1 + 0x267) << 0x18 |
             (unsigned int)*(unsigned char *)((int)param_1 + 0x266) << 0x10 |
             (unsigned int)*(unsigned char *)((int)param_1 + 0x265) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x99);
        puVar4 = (unsigned short *)(param_2 + 0x2c);
        if (param_1[0x99] != 0) {
          piVar5 = param_1 + 0x16;
          do {
            fn_82EF2CB8(piVar5,uVar2,&puStack_7c);
            *puVar4 = *puStack_7c << 8 | *puStack_7c >> 8;
            fn_82EF2CB8(piVar5,uVar2,&iStack_78);
            puVar4[1] = *(unsigned short *)(iStack_78 + 2) << 8 | *(unsigned short *)(iStack_78 + 2) >> 8;
            puStack_80 = puVar4 + 2;
            fn_82EF2CB8(piVar5,uVar2,&iStack_74);
            fn_82EF2CB8(piVar5,uVar2,&iStack_70);
            fn_82E57888(&puStack_80,*(unsigned int *)(iStack_70 + 4),
                         (unsigned __int64)*(unsigned short *)(iStack_74 + 2) << 1);
            fn_82EF2CB8(piVar5,uVar2,&iStack_6c);
            *puStack_80 = *(unsigned short *)(iStack_6c + 0xc) << 8 | *(unsigned short *)(iStack_6c + 0xc) >> 8;
            puStack_80 = puStack_80 + 1;
            fn_82EF2CB8(piVar5,uVar2,&iStack_68);
            fn_82EF2CB8(piVar5,uVar2,&iStack_64);
            fn_82E57888(&puStack_80,*(unsigned int *)(iStack_64 + 8),
                         (unsigned __int64)*(unsigned short *)(iStack_68 + 0xc) << 1);
            fn_82EF2CB8(piVar5,uVar2,&iStack_60);
            puVar4 = puStack_80 + 1;
            *puStack_80 = *(unsigned short *)(iStack_60 + 0x14) << 8 | *(unsigned short *)(iStack_60 + 0x14) >> 8;
            fn_82EF2CB8(piVar5,uVar2,aiStack_5c);
            fn_82EF2CB8(piVar5,uVar2,&uStack_50);
            uVar1 = *(unsigned short *)(aiStack_5c[0] + 0x14);
            fn_82F68CC0(puVar4,*(unsigned int *)(uStack_50 + 0x10),(unsigned int)uVar1);
            uVar2 = uVar2 + 1;
            puVar4 = (unsigned short *)((unsigned int)uVar1 + (int)puVar4);
          } while ((uVar2 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[0x99]);
        }
      }
    }
    else {
      uVar3 = 0xffffffffc00d3a9a;
    }
  }
  return uVar3;
}

