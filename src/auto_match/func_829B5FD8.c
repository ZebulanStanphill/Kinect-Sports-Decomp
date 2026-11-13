typedef struct { void (*error_exit)(void *); int pad[4]; int msg_code; int msg_parm_i0; } err_829B5FD8;
typedef struct { err_829B5FD8 *err; char *mem_unused; } cinfo_829B5FD8;
typedef struct { char *head; } pool_829B5FD8;
typedef struct { int f0; int f4; int f8; int fc; char p10[0x10]; int f20; int p24; int f28; int f2c; } blk_829B5FD8;
extern blk_829B5FD8 *d3dx_alloc_small(void *, int, int);

void fn_829B5FD8(cinfo_829B5FD8 *param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
  char *mem;
  blk_829B5FD8 *b;
  mem = (char *)(*(int **)((char *)param_1 + 4));
  if (param_2 != 1) {
    param_1->err->msg_code = 0xe;
    param_1->err->msg_parm_i0 = param_2;
    param_1->err->error_exit(param_1);
  }
  b = d3dx_alloc_small(param_1, param_2, 0x248);
  b->f4 = param_5;
  b->f0 = 0;
  b->f8 = param_4;
  b->fc = param_6;
  b->f20 = param_3;
  b->f28 = 0;
  b->f2c = *(int *)(mem + 0x48);
  *(blk_829B5FD8 **)(mem + 0x48) = b;
}
