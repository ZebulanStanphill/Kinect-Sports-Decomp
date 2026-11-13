typedef struct Args_8268D968 {
  int type;
  void *out;
  int flags;
} Args_8268D968;

typedef struct Matrix_8268D968 {
  float m[8];
} Matrix_8268D968;

extern void fn_8268D8A8(Args_8268D968 *args, const char *format, float *a0, float *a1, float *a2,
                        float *a3, float *a4, float *a5, float *a6, float *a7);

void fn_8268D968(Matrix_8268D968 *matrix, void *out)
{
  Args_8268D968 args;
  args.type = 2;
  args.out = out;
  args.flags = 0x200;
  fn_8268D8A8(&args,
              "    *         +\n| {0:4.4} {1:4.4}|\n| {2:4.4} {3:4.4}|\n| {4:4.4} {5:4.4}|\n| {6:4.4} {7:4.4}|\n",
              &matrix->m[0], &matrix->m[1], &matrix->m[2], &matrix->m[3],
              &matrix->m[4], &matrix->m[5], &matrix->m[6], &matrix->m[7]);
}
