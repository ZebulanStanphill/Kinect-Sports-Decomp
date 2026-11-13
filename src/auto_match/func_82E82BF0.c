typedef unsigned char bool;
extern int fn_82E829D0();
extern int fn_82F02390();
extern int fn_82F023B0();
extern int fn_82F02410();
extern int fn_82F025F0();
extern unsigned int lbl_82005730;
extern unsigned int lbl_821551E0;
extern unsigned int lbl_8215F5F0;
extern float lbl_8215F660;
extern unsigned int lbl_8215F668;


void fn_82E82BF0(int param_1, unsigned __int64 param_2, int *param_3, int param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned __int64 unused_arg_9, int in_stack_0000005c, unsigned int in_stack_00000064, unsigned int in_stack_0000006c, unsigned int in_stack_00000074, int in_stack_0000007c, unsigned __int64 unused_arg_15, unsigned char in_stack_0000008f, unsigned char in_stack_00000097, unsigned char in_stack_0000009f)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;








  
  iVar9 = 0;
  if (*(int *)(param_1 + 0x76c8) != 0) {
    *(unsigned int *)(param_1 + 0x6f4c) = 0;
    param_5 = 0;
    *(unsigned int *)(param_1 + 0x5a4) = 0;
    *(unsigned int *)(param_1 + 0x6f58) = 0;
    *(unsigned int *)(param_1 + 0x6f7c) = 0;
    *(unsigned int *)(param_1 + 0x4f0) = 0;
  }
  if (param_4 != 0) {
    fn_82F02390(*(unsigned int *)(param_1 + 0x1ebc),param_2,0,*(int *)(param_1 + 4) == 8);
  }
  fn_82E829D0(param_1);
  bVar10 = *(double *)(param_1 + 0x1e08) < lbl_8215F5F0;
  *(unsigned int *)(param_1 + 0xa40) = *(unsigned int *)(&lbl_8215F668 + *(int *)(param_1 + 0x88c) * 4);
  if (bVar10) {
    iVar6 = (int)*(double *)(param_1 + 0x1e08);
  }
  else {
    iVar6 = 0x1f;
  }
  if (*(double *)(param_1 + 0x1ed0) < lbl_821551E0) {
    iVar7 = (int)*(double *)(param_1 + 0x1ed0);
  }
  else {
    iVar7 = 0x7ff;
  }
  *(unsigned int *)(param_1 + 0x888) = 3;
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),3,2);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x88c),3);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x6f5c),2);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),iVar6 >> 2,3);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),iVar7 >> 6,5);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x880),1);
  uVar1 = *(unsigned int *)(param_1 + 0x31c);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                    (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0) +
                    -1,0xc);
  uVar1 = *(unsigned int *)(param_1 + 800);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                    (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0) +
                    -1,0xc);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x6f48),1);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x6f4c),1);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x6f58),1);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x5a4),1);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),1,1);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x6f7c),1);
  param_5 = -(unsigned __int64)(*(int *)(param_1 + 0xb08) == 0) & param_5;
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),param_5,1);
  if ((int)param_5 != 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),(unsigned __int64)*(unsigned int *)(param_1 + 0x328) - 1,
                      0xe);
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),(unsigned __int64)*(unsigned int *)(param_1 + 0x32c) - 1,
                      0xe);
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),param_7,1);
    if ((int)param_7 != 0) {
      *(int *)(param_1 + 0x6f64) = (int)param_8;
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),param_8,4);
      if (*(int *)(param_1 + 0x6f64) == 0xf) {
        fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x6f68),8);
        fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x6f6c),8);
      }
    }
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),in_stack_0000005c,1);
    if (in_stack_0000005c != 0) {
      *(unsigned int *)(param_1 + 0x6f70) = in_stack_00000064;
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),in_stack_00000064,1);
      if (*(int *)(param_1 + 0x6f70) == 0) {
        *(unsigned int *)(param_1 + 0x6f74) = in_stack_0000006c;
        *(unsigned int *)(param_1 + 0x6f78) = in_stack_00000074;
        fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),in_stack_0000006c,8);
        uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6f78);
        uVar5 = 4;
      }
      else {
        uVar1 = (unsigned int)(*(double *)(param_1 + 0x1e08) * lbl_8215F660 + lbl_82005730);
        uVar4 = (unsigned __int64)uVar1;
        if (0x10000 < (int)uVar1) {
          uVar4 = 0x10000;
        }
        uVar5 = 0x10;
        uVar4 = uVar4 - 1;
      }
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar4,uVar5);
    }
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),in_stack_0000007c,1);
    if (in_stack_0000007c != 0) {
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),in_stack_0000008f,8);
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),in_stack_00000097,8);
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),in_stack_0000009f,8);
    }
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x4f0),1);
  if (*(int *)(param_1 + 0x4f0) != 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x4ec),5);
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),(unsigned __int64)*(unsigned int *)(param_1 + 0x364) - 6,4)
    ;
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),(unsigned __int64)*(unsigned int *)(param_1 + 0x368) - 4,4)
    ;
    uVar1 = *(unsigned int *)(param_1 + 0x364);
    uVar2 = *(unsigned int *)(param_1 + 0x368);
    if (0 < *(int *)(param_1 + 0x4ec)) {
      piVar8 = (int *)(param_1 + 1000);
      do {
        iVar6 = piVar8[0x21];
        piVar8 = piVar8 + 1;
        uVar3 = *(unsigned int *)(param_1 + 0x368);
        fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                          *piVar8 + (1 << (uVar1 & 0x3f)) + -1 >>
                          (*(unsigned int *)(param_1 + 0x364) & 0x3f),0x10);
        fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                          iVar6 + (1 << (uVar2 & 0x3f)) + -1 >> (uVar3 & 0x3f),0x10);
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x4ec));
    }
  }
  if (param_4 != 0) {
    fn_82F025F0(*(unsigned int *)(param_1 + 0x1ebc));
    *param_3 = (int)((0x27 - (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff)
                    >> 3) + *(int *)(*(int *)(param_1 + 0x1ebc) + 4);
    fn_82F023B0(*(unsigned int *)(param_1 + 0x1ebc));
  }
  return;
}

