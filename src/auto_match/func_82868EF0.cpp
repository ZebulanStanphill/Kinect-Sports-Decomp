namespace R1 { namespace Soundscape { class BankEntry_TRIGGER_LOAD_c { public: virtual ~BankEntry_TRIGGER_LOAD_c(); }; } }
typedef R1::Soundscape::BankEntry_TRIGGER_LOAD_c C;
inline void *operator new(unsigned int, void *p) throw() { return p; }
extern "C" C *fn_8265C9E0(unsigned int);
extern "C" C *lbl_8321172C;
extern "C" C *fn_82868EF0(void)
{
    if (lbl_8321172C == 0) {
        C *p = fn_8265C9E0(4);
        if (p != 0) {
            new (p) C;
        } else {
            p = 0;
        }
        lbl_8321172C = p;
    }
    return lbl_8321172C;
}
