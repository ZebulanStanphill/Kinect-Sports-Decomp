/* fn_82386ED0: std::set<Element_82387140> insert-with-hint (VC10 _Tree).
   Calls the protected member _Tree::_Insert(bool, _Node *, _Node *), whose
   mangled name the original object already uses; declarations only, no bodies. */

struct Element_82387140;

namespace std {
template<class T> struct less;
template<class T> class allocator;
template<class K, class Pr, class Ax, bool Mfl> class _Tset_traits;
template<class Tr> class _Tree_nod { public: struct _Node; };
template<class Tr> class _Tree_val;
template<class My> class _Tree_const_iterator {
public:
    _Tree_const_iterator() : _Ptr(0) {}
    void *_Ptr;
};
template<class Tr> class _Tree {
protected:
    _Tree_const_iterator<_Tree_val<Tr> > _Insert(bool _Addleft,
        typename _Tree_nod<Tr>::_Node *_Wherenode,
        typename _Tree_nod<Tr>::_Node *_Newnode);
};
}

typedef std::_Tset_traits<Element_82387140, std::less<Element_82387140>,
    std::allocator<Element_82387140>, false> Traits_82386ED0;
typedef std::_Tree_nod<Traits_82386ED0>::_Node NodeT_82386ED0;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_82386ED0> > Iter_82386ED0;

class Access_82386ED0 : public std::_Tree<Traits_82386ED0> {
public:
    using std::_Tree<Traits_82386ED0>::_Insert;
};

struct Node_82386ED0 {
    Node_82386ED0 *left;
    Node_82386ED0 *parent;
    Node_82386ED0 *right;
    unsigned int pad0c;
    unsigned int key;
    unsigned char pad14[0x1c];
    unsigned char color;
    unsigned char isnil;
};

struct Tree_82386ED0 {
    int pad0;
    Node_82386ED0 *head;
    unsigned int size;
};

/* pair<iterator, bool>: has user-declared constructors like std::pair,
   so it is returned through a hidden result pointer. */
struct Pair_82386ED0 {
    Pair_82386ED0() : first(), second(false) {}
    Iter_82386ED0 first;
    bool second;
};

extern "C" Node_82386ED0 **fn_82387308(Node_82386ED0 **it);
extern "C" Node_82386ED0 **fn_824A30C8(Node_82386ED0 **it);
extern "C" Pair_82386ED0 fn_82387048(Tree_82386ED0 *t, Node_82386ED0 *nn);

#define INS_82386ED0(l, w) \
    (((Access_82386ED0 *)t)->_Insert((l), (NodeT_82386ED0 *)(w), (NodeT_82386ED0 *)(nn)))

extern "C" Iter_82386ED0 fn_82386ED0(Tree_82386ED0 *t, Node_82386ED0 *where,
                                     Node_82386ED0 *nn)
{
    Node_82386ED0 *next = 0;
    Node_82386ED0 *head;

    if (t->size == 0) {
        return INS_82386ED0(true, t->head);
    }
    head = t->head;
    if (where == head->left) {
        if (nn->key < where->key)
            return INS_82386ED0(true, where);
    } else if (where == head) {
        Node_82386ED0 *r = head->right;
        if (r->key < nn->key)
            return INS_82386ED0(false, r);
    } else {
        unsigned int vk = nn->key;
        unsigned int wk = where->key;
        if (vk < wk && (next = where, (*fn_82387308(&next))->key < vk)) {
            if (next->right->isnil)
                return INS_82386ED0(false, next);
            return INS_82386ED0(true, where);
        } else if (wk < vk &&
                   ((next = where, *fn_824A30C8(&next) == head) || vk < next->key)) {
            if (where->right->isnil)
                return INS_82386ED0(false, where);
            return INS_82386ED0(true, next);
        }
    }
    return fn_82387048(t, nn).first;
}
