extern void fn_82571418(void *, void *, int, int, int, int, int);
extern int fn_82D89E30(void *);
extern void fn_825A7BE8(void *, void *, float, int);
extern void fn_825A7F68(void *, void *, int);
extern float fn_82D93128(void *);
extern void fn_82563C38(void *, void *, void *);

void fn_825B4570(char *self, int value)
{
    fn_82571418(self + 0x2d0, *(void **)(self + 0xd4), value, 3, 2, 0, 0);
    if (fn_82D89E30(*(void **)(self + 0xd4)) == 0) {
        char *state = self + 0x180;
        fn_825A7BE8(state, *(void **)(self + 0xd4), *(float *)(self + 0x3e0), *(int *)(self + 0x3e4));
        fn_825A7F68(state, *(void **)(self + 0xd4), *(int *)(self + 0xdc));
    }
    *(float *)(self + 0xd0) = fn_82D93128(*(char **)(self + 0xd4) + 0xe0);
    fn_82563C38(*(void **)(self + 0xd4), self + 0xb0, self + 0xc0);
    *(int *)(self + 0xf0) = 1;
}
