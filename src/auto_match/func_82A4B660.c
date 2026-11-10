typedef struct { char pad0[0x10]; void *a; void *b; } Args_82A4B660;
extern void fn_82A4ADB8(void *self, void *a, void *b);

void fn_82A4B660(char *self, Args_82A4B660 *args)
{
  fn_82A4ADB8(self - 8, args->a, args->b);
}
