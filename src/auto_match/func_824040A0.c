typedef struct Function_824040A0 {
    unsigned int storage[4]; /* 0x00 */
    void *implementation;    /* 0x10 */
} Function_824040A0;

extern void fn_82329730(void *, Function_824040A0 *);
extern void fn_823F2F20(void *, Function_824040A0 *);
extern void fn_82359C18(Function_824040A0 *);

static __forceinline void Clear(Function_824040A0 *target, Function_824040A0 *empty)
{
    if (target != empty) {
        fn_82359C18(target);
        target->implementation = 0;
    }
}

void fn_824040A0(void *self)
{
    char *owner = (*(char *(**)(void *))(*(int *)self + 0x4c))(self);
    Function_824040A0 empty;
    empty.implementation = 0;
    fn_82329730(owner + 0x30, &empty);
    fn_82359C18(&empty);
    empty.implementation = 0;
    fn_823F2F20(owner + 0x30, &empty);
    fn_82359C18(&empty);
    empty.implementation = 0;
    Clear((Function_824040A0 *)(owner + 0xf8), &empty);
    fn_82359C18(&empty);
    empty.implementation = 0;
    Clear((Function_824040A0 *)(owner + 0xe0), &empty);
    fn_82359C18(&empty);
}
