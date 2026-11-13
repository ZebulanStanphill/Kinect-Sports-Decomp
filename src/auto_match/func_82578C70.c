extern int fn_8251FA58();
extern int fn_82545950();
extern int fn_82545A90();
extern int fn_8262F8D8();
extern int fn_826457A8();
extern int fn_8265CA20();
extern int fn_8265CAA0();


void fn_82578C70(int param_1)

{
  unsigned short *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = *(unsigned short **)(param_1 + 0x34);
  iVar4 = 0;
  iVar5 = (*(int *)(puVar1 + 4) - *(int *)(puVar1 + 2)) / (int)(unsigned int)*puVar1;
  if (0 < iVar5) {
    do {
      iVar3 = (unsigned int)**(unsigned short **)(param_1 + 0x34) * iVar4 +
              *(int *)(*(unsigned short **)(param_1 + 0x34) + 2);
      if (*(int *)(iVar3 + 0x10) != 0) {
        *(unsigned int *)(iVar3 + 0x10) = 0;
        if (*(int *)(iVar3 + 0x134) != 0) {
          iVar5 = *(int *)(iVar3 + 300);
                    /* WARNING: Subroutine does not return */
          fn_8262F8D8(iVar5,0xc,0,*(unsigned int *)(iVar5 + 0x18),0,
                            *(unsigned int *)(iVar5 + 0x18),*(unsigned int *)(iVar5 + 0x1c),2);
        }
        if (*(int *)(iVar3 + 0x14c) != 0) {
          iVar5 = 0;
          if (0 < *(int *)(iVar3 + 0x13c)) {
            iVar4 = 0;
            do {
              do {
                iVar2 = fn_826457A8(*(unsigned int *)
                                           (*(int *)(iVar4 + *(int *)(iVar3 + 0x140)) + 8));
              } while (iVar2 != 0);
              fn_8265CA20(*(unsigned int *)(iVar4 + *(int *)(iVar3 + 0x140)));
              iVar5 = iVar5 + 1;
              *(unsigned int *)(iVar4 + *(int *)(iVar3 + 0x140)) = 0;
              iVar4 = iVar4 + 4;
            } while (iVar5 < *(int *)(iVar3 + 0x13c));
          }
          fn_8265CAA0(*(unsigned int *)(iVar3 + 0x140));
          iVar5 = *(int *)(iVar3 + 0x144);
          *(unsigned int *)(iVar3 + 0x140) = 0;
                    /* WARNING: Subroutine does not return */
          fn_8262F8D8(iVar5,0xc,0,*(unsigned int *)(iVar5 + 0x18),0,
                            *(unsigned int *)(iVar5 + 0x18),*(unsigned int *)(iVar5 + 0x1c),2);
        }
        if ((*(int *)(iVar3 + 0x1c) != 0) && (*(int *)(iVar3 + 200) != 0)) {
          fn_82545950(iVar3 + 200);
        }
        if (*(int *)(iVar3 + 0x18) != 0) {
          iVar2 = 0;
          if (0 < *(int *)(iVar3 + 0xcc)) {
            iVar6 = 0;
            do {
              fn_8251FA58(*(unsigned int *)(iVar6 + *(int *)(iVar3 + 0xd0)));
              iVar2 = iVar2 + 1;
              iVar6 = iVar6 + 4;
            } while (iVar2 < *(int *)(iVar3 + 0xcc));
          }
          fn_8265CAA0(*(unsigned int *)(iVar3 + 0xd0));
          *(unsigned int *)(iVar3 + 0xd0) = 0;
          if (*(int *)(iVar3 + 0xc4) != 0) {
            fn_82545A90(iVar3 + 0xc4);
          }
        }
        fn_8265CAA0(*(unsigned int *)(iVar3 + 0x118));
        *(unsigned int *)(iVar3 + 0x118) = 0;
        fn_8251FA58(*(unsigned int *)(iVar3 + 0x78));
        fn_8251FA58(*(unsigned int *)(iVar3 + 0x7c));
        fn_8251FA58(*(unsigned int *)(iVar3 + 0x80));
        fn_8265CAA0(*(unsigned int *)(iVar3 + 0x124));
        *(unsigned int *)(iVar3 + 0x124) = 0;
        fn_8265CAA0(*(unsigned int *)(iVar3 + 0xa0));
        *(unsigned int *)(iVar3 + 0xa0) = 0;
        fn_8265CAA0(*(unsigned int *)(iVar3 + 0xb0));
        *(unsigned int *)(iVar3 + 0xb0) = 0;
        fn_8265CAA0(*(unsigned int *)(iVar3 + 0xc0));
        *(unsigned int *)(iVar3 + 0xc0) = 0;
        fn_8251FA58(*(unsigned int *)(iVar3 + 0x74));
        fn_8251FA58(*(unsigned int *)(iVar3 + 0x84));
        fn_8251FA58(*(unsigned int *)(iVar3 + 0x88));
        fn_8251FA58(*(unsigned int *)(iVar3 + 0x8c));
        if (*(int *)(iVar3 + 0x90) != 0) {
          fn_8251FA58();
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  return;
}

