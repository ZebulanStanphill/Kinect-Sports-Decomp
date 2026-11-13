extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_14c;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_8257A9F0();
extern int fn_82811080();
extern int fn_82811400();
extern int fn_828647C0();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_828663F0();
extern int fn_82866418();
extern int fn_82868378();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_8287A7A8();
extern int fn_8287A7D8();
extern int fn_82FE93B8();
extern unsigned int uStack_12c;
extern unsigned int uStack_150;


unsigned __int64 fn_8286F158(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  char cVar8;
  unsigned __int64 uVar2;
  unsigned int *******pppppppuVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int uStack_150;
  unsigned char auStack_14c [12];
  unsigned int ******appppppuStack_140 [5];
  unsigned int uStack_12c;
  unsigned char auStack_120 [32];
  unsigned char auStack_100 [32];
  unsigned char auStack_e0 [32];
  unsigned char auStack_c0 [32];
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [96];
  
  puVar7 = *(unsigned int **)(param_1 + 0x14);
  if (puVar7 != *(unsigned int **)(param_1 + 0x18)) {
    do {
      uVar1 = fn_8287A7A8(*puVar7);
      cVar8 = fn_828647C0(uVar1,param_2);
      if (cVar8 == '\0') {
        uVar1 = fn_82811400(auStack_80,4);
        uVar2 = fn_82811080(0xffffffff832116f8,0x30,uVar1);
        if ((uVar2 & 0xffffffff) == 0) {
          uStack_150 = 0;
        }
        else {
          uStack_150 = fn_8287A7D8(uVar2,param_2);
        }
        fn_8257A9F0(param_1 + 0x14,&uStack_150);
        fn_828648B8(auStack_120,param_2);
        fn_8223B688(appppppuStack_140,auStack_120);
        fn_82230300(auStack_120,1,0);
        pppppppuVar5 = (unsigned int *******)appppppuStack_140[0];
        if (uStack_12c < 0x10) {
          pppppppuVar5 = appppppuStack_140;
        }
        uVar1 = fn_82FE93B8(pppppppuVar5,0xffffffff8286e9b0,uStack_150,0xffffffffffffffff,
                                  auStack_14c);
        if ((int)uVar1 != 1) {
          fn_828648B8(auStack_c0,param_2);
          uVar3 = fn_8223B688(auStack_a0,auStack_c0);
          uVar3 = fn_8286A3D8(uVar3,0,0xffffffff82021aa0,0x1b);
          uVar3 = fn_8223DFF0(uVar3,0xffffffff82021a98,4);
          fn_82240378(auStack_e0,uVar3);
          fn_82230300(auStack_a0,1,0);
          fn_82230300(auStack_c0,1,0);
          uVar3 = fn_8223B688(auStack_80,auStack_e0);
          uVar4 = fn_82868378();
          fn_8286DA10(uVar4,uVar3,uVar1);
          fn_82865170();
          fn_82866418();
          fn_828648B8(auStack_100,param_2);
          fn_82865170();
          piVar6 = (int *)fn_828663F0();
          puVar7 = (unsigned int *)fn_8223B688(auStack_60,auStack_100);
          if (0xf < (unsigned int)puVar7[5]) {
            puVar7 = (unsigned int *)*puVar7;
          }
          (**(int (***)())(*piVar6 + 0xc))(piVar6,0xffffffff82021ae8,0x393,0xffffffff82021abc,puVar7);
          fn_82230300(auStack_60,1,0);
          fn_82230300(auStack_100,1,0);
          fn_82230300(auStack_e0,1,0);
          fn_82230300(appppppuStack_140,1,0);
          return 0xffffffffa0100000;
        }
        fn_82230300(appppppuStack_140,1,0);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(unsigned int **)(param_1 + 0x18));
  }
  return 0x20100000;
}

