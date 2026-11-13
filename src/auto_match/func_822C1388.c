extern void fn_822C8C08(void *anim, const char *name);

void fn_822C1388(char *p)
{
    if (*(int *)(p + 0x7a0) != 0) {
        return;
    }
    if (*(int *)(p + 0x24) == 0) {
        return;
    }
    fn_822C8C08(*(void **)(p + 0x114), "dronemsmd");
}
