// Looks up the entry for key with fn_8289F2E0 and, if there is one, passes reset to
// fn_8289DAD8. arg is unused.
extern void *fn_8289F2E0(void *self, unsigned int key);
extern void fn_8289DAD8(void *entry, unsigned char reset);

void fn_828A0A08(void *self, unsigned int key, int arg, unsigned char reset)
{
    void *entry = fn_8289F2E0(self, key);

    if (entry)
        fn_8289DAD8(entry, reset);
}
