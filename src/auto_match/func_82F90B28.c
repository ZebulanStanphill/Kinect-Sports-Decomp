extern int fn_82A1BFA8(unsigned int index);

int fn_82F90B28(void *self)
{
    unsigned int i;
    for (i = 0; i < 4; i++) {
        int state = fn_82A1BFA8(i);
        if (state == 2)
            return 1;
    }
    return 0;
}
