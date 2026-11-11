extern unsigned fn_82A2A650(int, void *, int, unsigned, int);

unsigned fn_82A2A700(int count, void *handles, int waitAll, unsigned timeout)
{
    return fn_82A2A650(count, handles, waitAll, timeout, 0);
}
