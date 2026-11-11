extern void XeCryptShaFinal(void *state, unsigned char *digest, unsigned int digestSize);

void fn_82A2AAA0(void *state, unsigned char *digest)
{
    XeCryptShaFinal(state, digest, 20);
}
