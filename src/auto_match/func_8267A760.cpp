// GTextureImplNode constructor with the inlined GTexture base constructor, which links the
// texture's node into a list.
struct Node_8267A760 {
    Node_8267A760 *next;
    Node_8267A760 *prev;
};

class GTexture {
public:
    virtual void f0();
    int m_refcount;
    Node_8267A760 node;
    __forceinline GTexture(Node_8267A760 *list)
    {
        m_refcount = 1;
        node.prev = list->prev;
        node.next = list;
        list->prev->next = &node;
        list->prev = &node;
    }
};

class GTextureImplNode : public GTexture {
public:
    virtual void f0();
    int m_10;
    unsigned char m_14;
    int m_18;
    __forceinline GTextureImplNode(Node_8267A760 *list) : GTexture(list)
    {
        m_10 = 0;
        m_14 = 0;
        m_18 = 0;
    }
};

extern "C" void fn_8267A760(GTextureImplNode *p, Node_8267A760 *list)
{
    p->GTextureImplNode::GTextureImplNode(list);
}
