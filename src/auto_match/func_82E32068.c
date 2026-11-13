extern int fn_82E66740(void);
extern int fn_82E66BD8(int a, int b);

int fn_82E32068(unsigned int id, int b)
{
    if (id != 0x10070) {
        return 0xC00D36E3;
    }
    return fn_82E66BD8(fn_82E66740(), b);
}
