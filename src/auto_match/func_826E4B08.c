extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267FC98();
extern int fn_826809F0();
extern int fn_826895E8();
extern unsigned char lbl_83155E40[];
extern unsigned int lbl_831E7E64;


unsigned __int64 fn_826E4B08(void)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  char *pcVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  __int64 lVar9;
  
  uVar2 = fn_8267B890(lbl_831E7E64,0x30,0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_826809F0(uVar2,1,0x39,0x24);
  }
  if ((uVar2 & 0xffffffff) != 0) {
    pcVar6 = lbl_83155E40;
    lVar4 = 0;
    do {
      lVar5 = 0;
      do {
        cVar1 = *pcVar6;
        uVar7 = 0;
        if (cVar1 == '#') {
          uVar7 = 0xffffffffff000000;
        }
        else if (cVar1 == 'a') {
          uVar7 = 0xffffffff80ff00ff;
        }
        else if (cVar1 == 'b') {
          uVar7 = 0xffffffff802020ff;
        }
        else if (cVar1 == 'c') {
          uVar7 = 0xffffffff8000ffff;
        }
        else if (cVar1 == 'g') {
          uVar7 = 0xffffffff8020ff20;
        }
        else if (cVar1 == 'r') {
          uVar7 = 0xffffffff80ff2020;
        }
        else if (cVar1 == 'y') {
          uVar7 = 0xffffffff80ffff00;
        }
        lVar8 = 0;
        do {
          lVar9 = 0;
          do {
            fn_8267FC98(uVar2 + 8,lVar5 + lVar9,lVar4 + lVar8,uVar7);
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < 3);
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < 3);
        lVar5 = lVar5 + 3;
        pcVar6 = pcVar6 + 1;
      } while ((int)lVar5 < 0x39);
      lVar4 = lVar4 + 3;
    } while ((int)pcVar6 < -0x7ceaa0dc);
  }
  uVar3 = fn_8267B890(lbl_831E7E64,0x24,0);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = fn_826895E8(uVar3,uVar2,0);
  }
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C498(uVar2);
  }
  return uVar7;
}

