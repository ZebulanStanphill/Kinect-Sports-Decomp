typedef struct { unsigned int Data1; unsigned short Data2, Data3; unsigned char Data4[8]; } GUID;
typedef struct {
  unsigned short wFormatTag, nChannels;
  unsigned int nSamplesPerSec, nAvgBytesPerSec;
  unsigned short nBlockAlign, wBitsPerSample, cbSize;
  unsigned short wValidBitsPerSample;
  unsigned int dwChannelMask;
  GUID SubFormat;
} WAVEFORMATEXTENSIBLE;
extern GUID lbl_8208E050;
int memcmp(const void *a, const void *b, unsigned int n);

unsigned int fn_82A5DAC0(WAVEFORMATEXTENSIBLE *w)
{
  unsigned int tag = w->wFormatTag;
  if (tag == 0xfffe) {
    if (memcmp(&w->SubFormat.Data2, &lbl_8208E050.Data2, 0xc) == 0) {
      tag = (unsigned short)w->SubFormat.Data1;
    } else {
      tag = 0;
    }
  }
  return tag;
}
