extern void fn_82E50F10(void *self);
extern void fn_82E50FA0(void *self);

void fn_82E51028(void *self, int flag)
{
    if (flag != 0) {
        fn_82E50F10(self);
    } else {
        fn_82E50FA0(self);
    }
}
