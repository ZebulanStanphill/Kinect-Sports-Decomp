// Placement-constructs a R1::IAllocator (just its vtable pointer) into the global lbl_832116F8.
inline void *operator new(unsigned int, void *p) throw() { return p; }

namespace R1 {
class IAllocator {
public:
    virtual ~IAllocator();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
};
}

extern "C" {
extern char lbl_832116F8[4];
void fn_831400D8(void)
{
    new ((void *)lbl_832116F8) R1::IAllocator;
}
}
