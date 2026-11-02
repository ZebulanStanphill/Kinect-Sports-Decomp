namespace R1 { namespace Soundscape { class BankEntry_UNLOADED_c { public: virtual ~BankEntry_UNLOADED_c(); }; } }
typedef R1::Soundscape::BankEntry_UNLOADED_c C;
inline void *operator new(unsigned int, void *p) throw() { return p; }
extern "C" C *fn_8265C9E0(unsigned int);
extern "C" C *lbl_83211744;
extern "C" C *fn_82869130(void)
{
    if (lbl_83211744 == 0) {
        C *p = fn_8265C9E0(4);
        if (p != 0) {
            new (p) C;
        } else {
            p = 0;
        }
        lbl_83211744 = p;
    }
    return lbl_83211744;
}
