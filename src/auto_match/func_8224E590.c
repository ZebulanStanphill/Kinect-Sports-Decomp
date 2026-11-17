extern void *fn_8265C9E0(unsigned int size);
extern void fn_82897FE8(void *manager, void *object);
extern char lbl_821C2CA0[];

void fn_8224E590(int *self, void *request)
{
    int *object;
    int *memory;
    char *manager;

    memory = (int *)fn_8265C9E0(0x7dc);
    if (memory != 0) {
        memory[1] = 1;
        memory[0] = (int)lbl_821C2CA0;
        memory[0x1f6] = 0;
        object = memory;
    } else {
        object = 0;
    }
    if ((*(unsigned char (**)(void *, void *))(*object + 0x18))(object, request)) {
        fn_82897FE8((*(char *(**)(void *))(*self + 8))(self) + 0x2e8, object);
    } else {
        if (--object[1] == 0) {
            (*(void (**)(void *, int))(*object + 0x14))(object, 1);
        }
    }
}
