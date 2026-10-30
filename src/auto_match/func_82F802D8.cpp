struct Rec_82F802D8 { unsigned int code; };
struct Ptrs_82F802D8 { Rec_82F802D8 *rec; };
struct Ptd_82F802D8 { char pad[0x84]; int depth; };
extern "C" Ptd_82F802D8 *_getptd(void);
void __cdecl terminate(void);

extern "C" int fn_82F802D8(Ptrs_82F802D8 *p)
{
  switch (p->rec->code) {
  case 0xe06d7363:
    _getptd()->depth = 0;
    terminate();
  case 0xe0434352:
  case 0xe0434f4d:
    if (_getptd()->depth > 0) {
      _getptd()->depth--;
    }
    break;
  }
  return 0;
}
