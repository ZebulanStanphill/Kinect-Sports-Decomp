extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82230360();
extern int fn_8223DFF0();
extern int fn_82F6EEA0();


unsigned __int64 fn_830B4380(int *param_1)

{
  char cVar1;
  unsigned __int64 uVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  unsigned int auStack_70 [4];
  unsigned char auStack_60 [48];
  
  if ((((param_1[0x15] == 0) || (param_1[7] == 0)) || (param_1[0xe] == 0)) ||
     ((param_1[0x1c] == 0 || (param_1[0x23] == 0)))) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar2 = (**(int (***)())(*param_1 + 0x10))();
    if (-1 < (int)uVar2) {
      auStack_70[0] = 0;
      uVar2 = (**(int (***)())(*param_1 + 0x14))(param_1,auStack_70);
      if (-1 < (int)uVar2) {
        piVar8 = param_1 + 0x2d;
        fn_82230360(piVar8,0xffffffff82169af0,2);
        piVar6 = param_1 + 0x11;
        piVar5 = piVar6;
        piVar4 = piVar6;
        if (0xf < (unsigned int)param_1[0x16]) {
          piVar5 = (int *)*piVar6;
          piVar4 = (int *)*piVar6;
        }
        do {
          cVar1 = *(char *)piVar5;
          piVar5 = (int *)((int)piVar5 + 1);
        } while (cVar1 != '\0');
        fn_8223DFF0(piVar8,piVar4,(char *)((int)piVar5 + (-1 - (int)piVar4)));
        fn_8223DFF0(piVar8,0xffffffff821bab90,2);
        fn_8223DFF0(piVar8,0xffffffff82188270,0x39);
        piVar5 = param_1 + 3;
        piVar4 = piVar5;
        if (0xf < (unsigned int)param_1[8]) {
          piVar5 = (int *)*piVar5;
          piVar4 = piVar5;
        }
        do {
          cVar1 = *(char *)piVar5;
          piVar5 = (int *)((int)piVar5 + 1);
        } while (cVar1 != '\0');
        fn_8223DFF0(piVar8,piVar4,(char *)((int)piVar5 + (-1 - (int)piVar4)));
        fn_8223DFF0(piVar8,0xffffffff8218826c,3);
        fn_8223DFF0(piVar8,0xffffffff82188244,0x24);
        fn_8223DFF0(piVar8,0xffffffff82188220,0x23);
        fn_8223DFF0(piVar8,0xffffffff821bab90,2);
        piVar8 = param_1 + 0x34;
        fn_82230360(piVar8,0xffffffff821bab90,2);
        fn_8223DFF0(piVar8,0xffffffff82169af0,2);
        piVar5 = piVar6;
        piVar4 = piVar6;
        if (0xf < (unsigned int)param_1[0x16]) {
          piVar5 = (int *)*piVar6;
          piVar4 = (int *)*piVar6;
        }
        do {
          cVar1 = *(char *)piVar5;
          piVar5 = (int *)((int)piVar5 + 1);
        } while (cVar1 != '\0');
        fn_8223DFF0(piVar8,piVar4,(char *)((int)piVar5 + (-1 - (int)piVar4)));
        fn_8223DFF0(piVar8,0xffffffff82169af0,2);
        piVar8 = param_1 + 0x26;
        fn_82230360(piVar8,0xffffffff820eb5d8,5);
        piVar5 = param_1 + 0x18;
        piVar4 = piVar5;
        if (0xf < (unsigned int)param_1[0x1d]) {
          piVar5 = (int *)*piVar5;
          piVar4 = piVar5;
        }
        do {
          cVar1 = *(char *)piVar5;
          piVar5 = (int *)((int)piVar5 + 1);
        } while (cVar1 != '\0');
        fn_8223DFF0(piVar8,piVar4,(char *)((int)piVar5 + (-1 - (int)piVar4)));
        fn_8223DFF0(piVar8,0xffffffff82188214,0xb);
        fn_8223DFF0(piVar8,0xffffffff82188204,0xd);
        fn_8223DFF0(piVar8,0xffffffff821881e8,0x18);
        fn_8223DFF0(piVar8,0xffffffff821881b8,0x2c);
        piVar5 = piVar6;
        if (0xf < (unsigned int)param_1[0x16]) {
          piVar6 = (int *)*piVar6;
          piVar5 = piVar6;
        }
        do {
          cVar1 = *(char *)piVar6;
          piVar6 = (int *)((int)piVar6 + 1);
        } while (cVar1 != '\0');
        fn_8223DFF0(piVar8,piVar5,(char *)((int)piVar6 + (-1 - (int)piVar5)));
        fn_8223DFF0(piVar8,0xffffffff821bab90,2);
        fn_8223DFF0(piVar8,0xffffffff82188194,0x20);
        fn_8223DFF0(piVar8,0xffffffff8218817c,0x16);
        fn_8223DFF0(piVar8,0xffffffff8218816c,0xc);
        piVar6 = param_1 + 10;
        piVar5 = piVar6;
        if (0xf < (unsigned int)param_1[0xf]) {
          piVar6 = (int *)*piVar6;
          piVar5 = piVar6;
        }
        do {
          cVar1 = *(char *)piVar6;
          piVar6 = (int *)((int)piVar6 + 1);
        } while (cVar1 != '\0');
        fn_8223DFF0(piVar8,piVar5,(char *)((int)piVar6 + (-1 - (int)piVar5)));
        fn_8223DFF0(piVar8,0xffffffff821bab90,2);
        fn_8223DFF0(piVar8,0xffffffff82188164,6);
        piVar6 = param_1 + 0x1f;
        piVar5 = piVar6;
        if (0xf < (unsigned int)param_1[0x24]) {
          piVar6 = (int *)*piVar6;
          piVar5 = piVar6;
        }
        do {
          cVar1 = *(char *)piVar6;
          piVar6 = (int *)((int)piVar6 + 1);
        } while (cVar1 != '\0');
        fn_8223DFF0(piVar8,piVar5,(char *)((int)piVar6 + (-1 - (int)piVar5)));
        fn_8223DFF0(piVar8,0xffffffff821bab90,2);
        fn_8223DFF0(piVar8,0xffffffff82188148,0x18);
        fn_8223DFF0(piVar8,0xffffffff8218812c,0x19);
        fn_8223DFF0(piVar8,0xffffffff82188118,0x10);
        pcVar3 = (char *)fn_82F6EEA0((unsigned __int64)(unsigned int)param_1[0x31] +
                                         (unsigned __int64)(unsigned int)param_1[0x38] + (unsigned __int64)auStack_70[0],
                                         auStack_60,10);
        pcVar7 = pcVar3;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        fn_8223DFF0(piVar8,pcVar3,pcVar7 + (-1 - (int)pcVar3));
        fn_8223DFF0(piVar8,0xffffffff82188110,4);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

