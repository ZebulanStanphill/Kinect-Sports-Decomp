extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_82E4D758(void *p);
extern void fn_82E87E90(void *p);
extern void fn_82EDBF50(void *p);
extern void fn_82F174E0(void *p);

void fn_82E4D860(char *param_1)
{
    void *p;

    if (*(void **)(param_1 + 0x48) != 0) {
        fn_8265C990(*(void **)(param_1 + 0x48), 0x248c8000);
        *(void **)(param_1 + 0x48) = 0;
    }
    if (*(void **)(param_1 + 0x4c) != 0) {
        fn_8265C990(*(void **)(param_1 + 0x4c), 0x248c8000);
        *(void **)(param_1 + 0x4c) = 0;
    }
    if (*(void **)(param_1 + 0x1ec) != 0) {
        fn_8265C990(*(void **)(param_1 + 0x1ec), 0x248c8000);
        *(void **)(param_1 + 0x1ec) = 0;
    }
    if (*(void **)(param_1 + 0x8c) != 0) {
        fn_82F174E0(*(void **)(param_1 + 0x8c));
    }
    if (*(void **)(param_1 + 0x1e8) != 0) {
        fn_82EDBF50(*(void **)(param_1 + 0x1e8));
    }
    p = *(void **)(param_1 + 0xc);
    if (p != 0) {
        fn_82E87E90(p);
        fn_8265C990(p, 0x248c8000);
        *(void **)(param_1 + 0xc) = 0;
    }
    fn_82E4D758(param_1);
}
