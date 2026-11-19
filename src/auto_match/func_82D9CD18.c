extern void fn_82D80C18(int);
extern void fn_82D80C30(int);
extern void fn_82D88AE0(int, int);
extern void fn_82D8EA98(int, int);

void fn_82D9CD18(int self, int param_2)
{
    int obj;

    obj = *(int *)(param_2 + 8);
    *(int *)(obj + 0x94) += 1;
    fn_82D88AE0(obj, *(int *)(self + 0x44));
    fn_82D8EA98(obj, self);
    if (--*(int *)(obj + 0x94) == 0 && *(unsigned char *)(obj + 0x9c) == 0) {
        if (*(int *)(obj + 0x8c) != 0) {
            fn_82D80C18(obj);
        }
        if (*(int *)(obj + 0xa4) == 1 && *(int *)(obj + 0x90) != 0) {
            fn_82D80C30(obj);
        }
    }
}
