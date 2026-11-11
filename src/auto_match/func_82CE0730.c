extern int NetDll_XNetQosListen(int caller, const void *sessionId, const unsigned char *data, unsigned int dataSize, unsigned int bitsPerSec, unsigned int flags);

int fn_82CE0730(const void *sessionId, const unsigned char *data, unsigned int dataSize, unsigned int bitsPerSec, unsigned int flags)
{
  return NetDll_XNetQosListen(1, sessionId, data, dataSize, bitsPerSec, flags);
}
