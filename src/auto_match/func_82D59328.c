typedef struct Blk64_82D59328 { unsigned __int64 q[8]; } Blk64_82D59328;
typedef struct Rec_82D59328 {
  union {
    unsigned __int64 q[10];
    struct {
      unsigned char data[0x30];
      char flag;
      char pad[0xf];
      int state;
      int pad2[3];
    } f;
  } u;
} Rec_82D59328;
typedef struct Src_82D59328 {
  Rec_82D59328 rec;
} Src_82D59328;
typedef struct Self_82D59328 {
  char pad0[0xea0];
  int idx;
  int i2;
  char padea4[0xeb0 - 0xea4];
  char bufA[0x16a8 - 0xeb0];
  Rec_82D59328 tbl[1];
} Self_82D59328;

extern void fn_82D58908(void *self, void *buf, int idx, int a, int b, int c, int d, int e, int f);

int fn_82D59328(Self_82D59328 *param_1, Src_82D59328 *param_2, int param_3, int param_4)
{
  Rec_82D59328 loc;
  int idx;
  int i2;

  *((char *)param_1 + 0x1e21) = 1;
  *(Blk64_82D59328 *)&loc = *(Blk64_82D59328 *)param_2;
  loc.u.f.state = 0;
  if (param_3 != param_4 && *((char *)param_2 + 0x31) == 0) {
    loc.u.f.state = 2;
    param_1->tbl[param_1->idx] = loc;
    fn_82D58908(param_1, (char *)param_1 + 0xeb0, param_1->idx, param_4, param_3, param_4, param_3, *(int *)((char *)param_1 + 0x1e38), 0);
    if (loc.u.f.flag != 0) {
      fn_82D58908(param_1, (char *)param_1 + 0x12b0, param_1->idx, param_4, param_3, param_4, param_3, *(int *)((char *)param_1 + 0x1e3c), 0);
    }
    loc.u.f.state = 1;
    param_1->idx = param_1->idx + 1;
  }
  if (*((char *)param_2 + 0x32) == 0) {
    i2 = param_1->idx;
    idx = i2;
    param_1->idx = i2 + 1;
    param_1->tbl[i2] = loc;
  } else {
    idx = param_1->idx - 1;
  }
  fn_82D58908(param_1, (char *)param_1 + 0xeb0, idx, param_3, param_4, param_3, param_4, *(int *)((char *)param_1 + 0x1e38), 0);
  if (loc.u.f.flag != 0) {
    fn_82D58908(param_1, (char *)param_1 + 0x12b0, idx, param_3, param_4, param_3, param_4, *(int *)((char *)param_1 + 0x1e3c), 0);
  }
  return idx;
}
