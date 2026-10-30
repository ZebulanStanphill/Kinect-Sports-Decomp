// GTextureImplNode constructor: clears the field at +4, stores the vtable.
class GTextureImplNode {
public:
    virtual void f0();
    void *m_4;
    __forceinline GTextureImplNode() : m_4(0) {}
};

extern "C" void fn_8267B370(GTextureImplNode *p)
{
    p->GTextureImplNode::GTextureImplNode();
}
