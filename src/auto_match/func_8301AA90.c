extern int *fn_82FFE098(void *p);
extern void fn_83034968(int a, int b);

int fn_8301AA90(char *self, unsigned int key, int arg)
{
    int *e;

    if (key == 0) {
        return 2;
    }
    e = fn_82FFE098(self + 0x24);
    if (e == 0) {
        return 2;
    }
    fn_83034968(*e, arg);
    return 1;
}
