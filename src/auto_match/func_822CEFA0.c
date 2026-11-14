typedef struct Obj_822CEFA0 {
  char pad[0x28];
  int f28;
  int f2c;
  char pad30[0x1c0 - 0x30];
  char *f1c0;
} Obj_822CEFA0;

extern int fn_82381548(void *, int);
extern int fn_823814C0(void *);
extern int lbl_831CB180[];

int fn_822CEFA0(Obj_822CEFA0 *o)
{
  void *ctx = *(void **)(o->f1c0 + 0x7e4);
  if (o->f28 == fn_82381548(ctx, o->f2c))
    return lbl_831CB180[3 + fn_823814C0(ctx) * 4];
  return 0;
}
