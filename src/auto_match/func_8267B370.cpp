// Constructor of the class whose vtable is lbl_82005498 (no RTTI: the class name is not known):
// clears the field at +4, stores the vtable.
class Node_8267B370 {
public:
    virtual void f0();
    void *m_4;
    __forceinline Node_8267B370() : m_4(0) {}
};

extern "C" void fn_8267B370(Node_8267B370 *p)
{
    p->Node_8267B370::Node_8267B370();
}
