extern int fn_82A1F160(__int64 *frequency);
extern int fn_82A1E968(__int64 *counter);

__int64 fn_82C047A8(void)
{
    __int64 counter;
    __int64 frequency;
    fn_82A1F160(&frequency);
    fn_82A1E968(&counter);
    return counter / (frequency / 1000);
}
