typedef struct Out_8277B390 { short x; short y; int extra; } Out_8277B390;

void fn_8277B390(void *object, Out_8277B390 *output, float x, float y, int extra)
{
  output->x = (short)x;
  output->y = (short)y;
  output->extra = extra;
}
