extern unsigned int fn_82CE0BE0(unsigned int count, void **events, int waitAll, unsigned int timeout, int alertable);

unsigned int fn_82F94010(int ctx, unsigned int count, void **events, int waitAll, unsigned int timeout, int alertable)
{
    return fn_82CE0BE0(count, events, waitAll, timeout, alertable);
}
