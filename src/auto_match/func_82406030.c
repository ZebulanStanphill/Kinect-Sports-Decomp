extern const float lbl_82193CF0[10];
extern void fn_82359200(void *context, unsigned int argument, int enabled, float time);
extern void fn_82359108(void *context, void *selection, int enabled, float time, int flags);

void fn_82406030(char *self, unsigned int argument)
{
    void *context = *(void **)(self + 8);
    int mode = *(int *)((char *)context + 0xa0);
    if (mode != 0 && *(unsigned int *)(mode + 0x40) == 1) {
        fn_82359200(context, argument, 0, lbl_82193CF0[8]);
    } else {
        int *selector = *(int **)(self + 0x14);
        char *selection = (*(char *(**)(void *))(*selector + 4))(selector);
        char *(*get)(void *);
        selector = *(int **)(self + 0x14);
        if (*(int *)(selection + 0x24) != 0) {
            get = *(char *(**)(void *))(*selector + 4);
        } else {
            get = *(char *(**)(void *))(*selector + 8);
        }
        selection = get(selector);
        fn_82359108(*(void **)(self + 8), selection, 0, lbl_82193CF0[8], 0);
    }
}
