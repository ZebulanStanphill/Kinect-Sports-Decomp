void *memcpy(void *dst, const void *src, unsigned int size);

void fn_82EDF558(unsigned char *src, unsigned char *dst, int srcPitch, int dstPitch,
                 int srcStep, int dstStep, int width, int height)
{
  int y;
  int x;

  if (srcStep == 1 && dstStep == 1) {
    for (y = 0; y < height; y++) {
      memcpy(dst, src, width);
      src += srcPitch;
      dst += dstPitch;
    }
  }
  else {
    for (y = 0; y < height; y++) {
      unsigned char *s = src;
      unsigned char *d = dst;
      for (x = 0; x < width; x++) {
        *d = *s;
        s += srcStep;
        d += dstStep;
      }
      src += srcPitch;
      dst += dstPitch;
    }
  }
}
