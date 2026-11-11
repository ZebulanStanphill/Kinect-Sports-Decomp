extern void _lock(int locknum);

void _lockexit(void)
{
    _lock(8);
}
