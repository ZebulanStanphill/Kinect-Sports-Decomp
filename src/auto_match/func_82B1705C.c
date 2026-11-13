typedef unsigned char bool;
#define true 1


unsigned __int64 fn_82B1705C(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int *in_r10;
  unsigned char in_cr6;
  
  do {
    if ((bool)(in_cr6 >> 1 & 1)) {
      return 0;
    }
    if ((in_r10[3] & 0x4000000U) != 0) {
      for (iVar1 = *in_r10; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        if (*(int *)(iVar1 + 4) == param_3) {
          return 1;
        }
      }
    }
    in_r10 = (int *)in_r10[5];
    in_cr6 = (in_r10 == (int *)0x0) << 1;
  } while( true );
}

