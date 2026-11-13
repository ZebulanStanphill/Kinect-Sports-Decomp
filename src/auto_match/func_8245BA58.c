typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern int fn_82459C60();
extern int fn_8245BFF0();
extern int fn_8245C0B8();
extern int fn_8245C1D8();
extern int fn_8245CBE0();
extern int fn_82522FF0();
extern int fn_82A1E108();
extern int fn_82A1E300();
extern int fn_82CE0668();


unsigned __int64 fn_8245BA58(int param_1)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  double dVar4;
  unsigned int auStack_30;
  
  RtlEnterCriticalSection();
  if (*(int *)(param_1 + 0x584) != 0) {
    fn_8245BFF0(param_1,1);
    *(unsigned int *)(param_1 + 0x584) = 0;
  }
  if (*(int *)(param_1 + 0x58c) != 0) {
    fn_8245BFF0(param_1,0xc);
    *(unsigned int *)(param_1 + 0x58c) = 0;
  }
  if ((*(int *)(param_1 + 0x588) == 0) || (iVar2 = fn_8245C0B8(param_1), iVar2 == 0)) {
    *(unsigned int *)(param_1 + 0x3c) = 0;
    *(unsigned int *)(param_1 + 0x38) = 0;
    RtlLeaveCriticalSection(param_1);
  }
  else {
    RtlLeaveCriticalSection(param_1);
    bVar1 = true;
    do {
      if (*(int *)(param_1 + 0x6a4) < 2) {
        dVar4 = (double)fn_82522FF0();
        if ((*(int *)(param_1 + 0x6a4) == 0) &&
           (*(double *)(param_1 + 0x670) < dVar4 - *(double *)(param_1 + 0x678))) {
          *(double *)(param_1 + 0x678) = dVar4;
          auStack_30 = 0x20;
          iVar2 = (**(int (***)())(**(int **)(param_1 + 0x6a0) + 8))
                            (*(int **)(param_1 + 0x6a0),param_1 + 0x618,&auStack_30);
          RtlEnterCriticalSection(param_1);
          if (iVar2 < 0) {
            uVar3 = 4;
            *(unsigned int *)(param_1 + 0x638) = 0;
          }
          else {
            iVar2 = param_1 + 0x1c;
            RtlEnterCriticalSection(iVar2);
            fn_82CE0668(param_1 + 0x6b8,0x10);
            if (iVar2 != 0) {
              RtlLeaveCriticalSection(iVar2);
            }
            uVar3 = 3;
            *(unsigned int *)(param_1 + 0x638) = 1;
          }
          *(unsigned int *)(param_1 + 0x6a4) = uVar3;
          RtlLeaveCriticalSection(param_1);
        }
      }
      else if (*(int *)(param_1 + 0x6a4) == 3) {
        fn_8245C1D8();
      }
      else {
        fn_8245BFF0(param_1,2);
        RtlEnterCriticalSection(param_1);
        *(unsigned int *)(param_1 + 0x6a4) = 0;
        *(unsigned int *)(param_1 + 0xc4) = 0;
        *(unsigned int *)(param_1 + 200) = 0;
        *(unsigned int *)(param_1 + 0xd8) = 0;
        *(unsigned int *)(param_1 + 0xcc) = 0;
        fn_82459C60(param_1 + 0x40);
        fn_8245CBE0(param_1);
        *(unsigned int *)(param_1 + 0x6a8) = 0;
        RtlLeaveCriticalSection(param_1);
        fn_82A1E108(1000);
      }
      RtlEnterCriticalSection(param_1);
      if ((*(int *)(param_1 + 0x588) == 0) || (iVar2 = fn_8245C0B8(param_1), iVar2 == 0)) {
        bVar1 = false;
        *(unsigned int *)(param_1 + 0x3c) = 0;
        *(unsigned int *)(param_1 + 0x38) = 0;
      }
      RtlLeaveCriticalSection(param_1);
      fn_82A1E300();
    } while (bVar1);
  }
  return 0;
}

