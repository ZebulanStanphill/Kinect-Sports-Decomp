extern unsigned char fn_82F5E0A0(void *self, unsigned int *state);
extern int fn_829C90F0(unsigned int a, unsigned int b, unsigned int c);
extern unsigned char fn_82F5E1B8(void *self, unsigned int *state);

unsigned char fn_82F5E290(void *self, unsigned int *state)
{
    unsigned char ok = fn_82F5E0A0(self, state) & 1;
    ok &= fn_829C90F0(0, 0, *state) == 0;
    ok &= fn_82F5E1B8(self, state);
    return ok;
}
