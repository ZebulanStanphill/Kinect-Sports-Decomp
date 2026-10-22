typedef struct Iter {
    int a;
    int b;
    int c;
    void *buf;
    int d;
    int *sub;
    int sub_idx;
    unsigned int *cont;
    unsigned int pos;
} Iter;

extern void fn_8267C4F0(void *p);
extern void fn_82791BD8(Iter *it, void *a, void *b, int c);
extern int fn_82791CF0(Iter *it);

int fn_82793650(char *param_1, int param_2)
{
    Iter it;
    int result;
    int e;

    fn_82791BD8(&it, param_1 + 0x10, param_1, param_2);
    result = 0;
    if (it.pos < it.cont[1]) {
        e = fn_82791CF0(&it);
        if (*(int *)(e + 0xc) != 0) {
            result = *(int *)(e + 0xc);
        }
    }
    if (it.buf != 0) {
        fn_8267C4F0(it.buf);
    }
    return result;
}
