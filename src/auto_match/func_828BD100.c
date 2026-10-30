// Writes the float at p[2] to the bit stream out as 32 raw bits, after making room with
// fn_8223C478. self and arg are unused. fn_8223C478 never reads its third argument, but
// 279 of its 297 callers pass 0, one passes 1 and others pass a variable.
extern void fn_8223C478(void *out, int bits, int arg);
extern void fn_828E9DB8(void *out, unsigned int value, int bits);

void fn_828BD100(void *self, void *arg, void *out, float *p)
{
    union { float f; unsigned int u; } x;

    x.f = p[2];
    fn_8223C478(out, 32, 0);
    fn_828E9DB8(out, x.u, 32);
}
