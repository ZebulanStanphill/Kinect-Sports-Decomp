extern void *memcpy(void *, const void *, unsigned);
void fn_82862E08(float *a, float *b, unsigned char flags, float *src, float *scale, float *mid, float *dst) {
 if (!flags) { memcpy(dst,src,24); return; }
 dst[0] = flags & 4 ? (mid[1] - a[1]) * scale[0] : src[0];
 dst[1] = flags & 8 ? (b[1] - mid[1]) * scale[1] : src[1];
 dst[2] = flags & 1 ? (mid[0] - a[0]) * scale[2] : src[2];
 dst[3] = flags & 2 ? (b[0] - mid[0]) * scale[3] : src[3];
 dst[4] = src[4];
 dst[5] = src[5];
}
