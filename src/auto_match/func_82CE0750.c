extern int NetDll_XNetQosLookup(int caller, unsigned int cxna, const void **apxna, const void **apxnkid,
                                const void **apxnkey, unsigned int cina, const void *aina,
                                const unsigned int *adwServiceId, unsigned int cProbes,
                                unsigned int dwBitsPerSec, unsigned int dwFlags, void *hEvent,
                                void **ppxnqos);

int fn_82CE0750(unsigned int cxna, const void **apxna, const void **apxnkid, const void **apxnkey,
                unsigned int cina, const void *aina, const unsigned int *adwServiceId,
                unsigned int cProbes, unsigned int dwBitsPerSec, unsigned int dwFlags,
                void *hEvent, void **ppxnqos)
{
    return NetDll_XNetQosLookup(1, cxna, apxna, apxnkid, apxnkey, cina, aina, adwServiceId,
                                cProbes, dwBitsPerSec, dwFlags, hEvent, ppxnqos);
}
