extern unsigned int XamEnumerate(void *hEnum, unsigned int flags, void *buffer, unsigned int cbBuffer,
                                 unsigned int *pcItemsReturned, void *pOverlapped);

unsigned int fn_82A1E988(void *hEnum, void *buffer, unsigned int cbBuffer, unsigned int *pcItemsReturned,
                         void *pOverlapped)
{
  return XamEnumerate(hEnum, 0, buffer, cbBuffer, pcItemsReturned, pOverlapped);
}
