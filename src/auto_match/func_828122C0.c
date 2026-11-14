__int64 _InterlockedCompareExchange64(__int64 volatile *dest, __int64 exchange, __int64 comparand);

extern unsigned int fn_82A1BB18(void);

unsigned char fn_828122C0(__int64 volatile *lock)
{
    unsigned int id = fn_82A1BB18();

    return _InterlockedCompareExchange64(lock, (__int64)(id | 0xffffffff00000000ULL), 0) == 0;
}
