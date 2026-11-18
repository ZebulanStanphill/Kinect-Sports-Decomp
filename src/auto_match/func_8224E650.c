typedef struct Value_8224E650 {
    int value0;
    int value1;
} Value_8224E650;

extern void *fn_8265C9E0(unsigned int size);
extern void fn_82897FE8(void *manager, void *object);
extern void fn_8224E9D8(void *list, void *item);
extern void fn_822CB340(void *target, Value_8224E650 *value);
extern void fn_828AB150(void *flag, unsigned char value);
extern char lbl_821C2CA0[];

void fn_8224E650(int *self, void *request, void *list, Value_8224E650 value, int enabled)
{
    int *object;
    int *memory;

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
        fn_82897FE8((*(char *(**)(void *))(*self + 8))(self) + 0x630, object);
        fn_8224E9D8((*(char *(**)(void *))(*self + 8))(self) + 0x6d8, list);
        fn_822CB340((*(char *(**)(void *))(*self + 8))(self) + 0x684, &value);
        fn_828AB150((*(char *(**)(void *))(*self + 8))(self) + 0x72c, enabled);
    } else {
        if (--object[1] == 0) {
            (*(void (**)(void *, int))(*object + 0x14))(object, 1);
        }
    }
}
