extern void _unlock(int locknum);

void _unlockexit(void)
{
    _unlock(8);
}
