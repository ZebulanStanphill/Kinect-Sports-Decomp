extern void fn_824B4298(void *, void *, int);

void fn_82F539A8(char *dst, char *src)
{
  *(unsigned __int64 *)(dst + 0x7d0) = *(unsigned __int64 *)(src + 0x7d0);
  *(unsigned char *)(dst + 0x7e8) = *(unsigned char *)(src + 0x7e8);
  *(float *)(dst + 0x7d8) = *(float *)(src + 0x7d8);
  fn_824B4298(dst, src, 0x7d0);
  fn_824B4298(dst + 0x7dc, src + 0x7dc, 0xc);
}
