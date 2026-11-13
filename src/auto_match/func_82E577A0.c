extern long fn_82EE5F60(void *stream, unsigned short *buf, unsigned int size);
extern long fn_82EE5E28(void *stream, unsigned int size);

long fn_82E577A0(unsigned short *buf, void *stream, unsigned int count)
{
  long hr;
  unsigned int size;
  unsigned int i;
  if (count == 0)
    return 0;
  size = count * 2;
  hr = fn_82EE5F60(stream, buf, size);
  if (hr < 0)
    return hr;
  for (i = 0; i < count; i++)
    buf[i] = _byteswap_ushort(buf[i]);
  return fn_82EE5E28(stream, size);
}
