#include <sstream>
extern "C" int fn_82358FD8(int h, wchar_t *buf, int n, const char *key);
extern "C" void fn_82299AC8(void *dst, const wchar_t *s);
extern "C" void fn_82297DB0(std::wstring *self, bool built, unsigned int newsize);
extern "C" void fn_82294590(void *self);
extern "C" std::wostream &fn_82296618(std::wostream &os, const wchar_t *s);
template <> __forceinline std::wostream &std::operator<<(std::wostream &os, const wchar_t *s)
{
    return fn_82296618(os, s);
}
template <> __forceinline void std::wstring::_Tidy(bool built, std::wstring::size_type newsize)
{
    fn_82297DB0(this, built, newsize);
}

struct Ctx_82294320 {
  char pad0[0x1c]; int h1c;
  char pad1[0x68 - 0x20]; char f68[1];
};

extern "C" void fn_82294320(Ctx_82294320 *c, wchar_t ch)
{
  char raw[sizeof(std::wostringstream)];
  std::wostringstream &os = *(std::wostringstream *)raw;
  wchar_t buf[0x400];
  fn_82294590(raw);
  fn_82358FD8(c->h1c, buf, 0x400, "caption_round");
  os << buf;
  os << " ";
  os << ch;
  {
    std::wstring s = os.str();
    fn_82299AC8(c->f68, s.c_str());
  }
  os.std::basic_ostringstream<wchar_t>::~basic_ostringstream();
  ((std::basic_ios<wchar_t> *)(raw + 0x50))->std::basic_ios<wchar_t>::~basic_ios();
}
