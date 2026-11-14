extern void fn_82E50CB8(void *self);
extern void fn_82E50D88(void *self);

void fn_82E50F00(void *self, int flag)
{
    if (flag != 0) {
        fn_82E50CB8(self);
    } else {
        fn_82E50D88(self);
    }
}
