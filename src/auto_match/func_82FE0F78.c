extern void fn_82FE0768(void *);
extern void fn_82FE07D0(void *);
extern void fn_82FE0818(void *);
extern void fn_82FE4700(void *);

int fn_82FE0F78(char *o)
{
  fn_82FE4700(o + 0x8c);
  fn_82FE4700(o + 0x98);
  fn_82FE4700(o + 0xa4);
  fn_82FE4700(o + 0xb0);
  if (*(void **)(o + 0xdc) != 0)
    fn_82FE4700(*(void **)(o + 0xdc));
  *(float *)(o + 0x44) = 0.0f;
  *(float *)(o + 0x48) = 0.0f;
  *(float *)(o + 0x54) = 0.0f;
  *(float *)(o + 0x50) = 0.0f;
  *(float *)(o + 0x60) = 0.0f;
  *(float *)(o + 0x5c) = 0.0f;
  *(float *)(o + 0x6c) = 0.0f;
  *(float *)(o + 0x68) = 0.0f;
  *(float *)(o + 0x78) = 0.0f;
  *(float *)(o + 0x74) = 0.0f;
  *(float *)(o + 0x84) = 0.0f;
  *(float *)(o + 0x80) = 0.0f;
  fn_82FE0818(o);
  fn_82FE0768(o);
  fn_82FE07D0(o);
  return 1;
}
