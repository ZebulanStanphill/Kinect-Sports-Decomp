namespace R1 { namespace Soundscape { class BankEntry_TRIGGER_UNLOAD_c { public: virtual ~BankEntry_TRIGGER_UNLOAD_c(); }; } }
typedef R1::Soundscape::BankEntry_TRIGGER_UNLOAD_c C;
inline void *operator new(unsigned int, void *p) throw() { return p; }
extern "C" C *fn_8265C9E0(unsigned int);
extern "C" C *lbl_8321173C;
extern "C" C *fn_82869070(void)
{
    if (lbl_8321173C == 0) {
        C *p = fn_8265C9E0(4);
        if (p != 0) {
            new (p) C;
        } else {
            p = 0;
        }
        lbl_8321173C = p;
    }
    return lbl_8321173C;
}
