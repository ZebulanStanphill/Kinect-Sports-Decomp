extern void fn_822AF138(void *object, int mode);
extern void fn_823E3678(void *self, void *current, void *other);
extern void fn_825275B0(void *object);
extern void fn_823C4850(void *self, void *object);
extern void fn_823CC298(void *self, unsigned int state);

void fn_823C43E8(char *self)
{
    char *selfCopy = self;
    unsigned int index = *(unsigned int *)(selfCopy + 0xee8);
    unsigned int other = index == 0;
    void **objects = **(void ****)(selfCopy + 8);
    void *current = objects[index];
    void *alternate = objects[other];
    fn_822AF138((*(void ***)(selfCopy + 0xc))[index], 5);
    fn_822AF138((*(void ***)(selfCopy + 0xc))[other], 5);
    fn_823E3678(selfCopy, current, alternate);
    if (*(int *)(selfCopy + 0x9a0) != 0) {
        if (*(int *)(selfCopy + 0x42c) != 0) {
            fn_825275B0(*(void **)(selfCopy + 0xe10));
        }
        *(int *)(selfCopy + 0x42c) = 0;
    }
    fn_823C4850(selfCopy, current);
    fn_823C4850(selfCopy, alternate);
    fn_823CC298(*(void **)(selfCopy + 0x4b8), 0x21);
}
