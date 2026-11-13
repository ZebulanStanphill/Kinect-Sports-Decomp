typedef struct Callback_8309F118 {
    int pad0;
    void (*func)(void *);
    void *arg;
} Callback_8309F118;

void fn_8309F118(Callback_8309F118 *cb, int unused, int *size)
{
    *size -= 0x10;
    cb->func(cb->arg);
}
