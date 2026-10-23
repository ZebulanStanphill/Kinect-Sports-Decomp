typedef unsigned long DWORD;
extern DWORD fn_82A2B7B8(void);
extern DWORD XamUserReadProfileSettings(DWORD dwTitleId, DWORD dwUserIndex, DWORD dwNumXuids,
    const unsigned __int64 *pXuids, DWORD dwNumSettingIds, const DWORD *pdwSettingIds,
    DWORD *pcbResults, void *pResults, void *pOverlapped);

DWORD fn_82CE11A0(DWORD dwTitleId, DWORD dwUserIndex, DWORD dwNumXuids,
    const unsigned __int64 *pXuids, DWORD dwNumSettingIds, const DWORD *pdwSettingIds,
    DWORD *pcbResults, void *pResults, void *pOverlapped)
{
    DWORD r = fn_82A2B7B8();
    if (r == 0) {
        r = XamUserReadProfileSettings(dwTitleId, dwUserIndex, dwNumXuids, pXuids,
            dwNumSettingIds, pdwSettingIds, pcbResults, pResults, pOverlapped);
    }
    return r;
}
