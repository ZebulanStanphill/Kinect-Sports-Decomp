int fn_82A1E968(__int64 *out)
{
    __int64 t;
    t = __mftb();
    if ((unsigned int)t == 0) {
        t = __mftb();
    }
    *out = t;
    return 1;
}
