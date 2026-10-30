// Placement-constructs a GAcquireInterface (just its vtable pointer) into the global lbl_831E7E70.
inline void *operator new(unsigned int, void *p) throw() { return p; }

class GAcquireInterface {
public:
    virtual ~GAcquireInterface();
};

extern "C" {
extern char lbl_831E7E70[4];
void fn_8313FCC0(void)
{
    new ((void *)lbl_831E7E70) GAcquireInterface;
}
}
