typedef struct A_82862320 { char pad[0x54]; char *base; } A_82862320;
typedef struct B_82862320 { char pad[0x8]; int offset; } B_82862320;

extern void fn_8281D340(const float *src, float *dst);

void fn_82862320(A_82862320 *a, B_82862320 *b, const float *src)
{
    fn_8281D340(src, (float *)(a->base + b->offset + 0xc));
}
