#include <set>

struct Element_8288C5A8 {
    unsigned int key;      /* 0x0 */
    unsigned __int64 time; /* 0x8 */

    Element_8288C5A8(unsigned int k, unsigned __int64 t) : key(k), time(t)
    {
    }

    Element_8288C5A8(const Element_8288C5A8 &other) : key(other.key), time(other.time)
    {
    }
};

inline bool operator<(const Element_8288C5A8 &a, const Element_8288C5A8 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_8288C5A8> Set_8288FAF8;
typedef Set_8288FAF8::_Mybase Tree_8288FAF8;

struct Iter_8288FAF8 {
    Tree_8288FAF8::_Nodeptr node; /* 0x0 */

    Iter_8288FAF8() : node(0)
    {
    }

    Iter_8288FAF8(Tree_8288FAF8::_Nodeptr p) : node(p)
    {
    }
};

struct Clock_8288FAF8 {
    virtual void slot0();
    virtual void slot4();
    virtual float slot8();
    virtual unsigned __int64 time();
};

extern "C" Clock_8288FAF8 *fn_825089A0();
extern "C" Iter_8288FAF8 fn_8288E040(Tree_8288FAF8 *, unsigned int *);
extern "C" Tree_8288FAF8::_Nodeptr fn_828807A0(void *);

template <> __forceinline Tree_8288FAF8::_Nodeptr Tree_8288FAF8::_Buynode()
{
    return fn_828807A0(this);
}

template <> Tree_8288FAF8::_Pairib Tree_8288FAF8::_Linsert(_Nodeptr, bool);

extern "C" void fn_8288FAF8(char *self, unsigned int key)
{
    Tree_8288FAF8 *tree = (Tree_8288FAF8 *)(self + 0x5c);
    Iter_8288FAF8 found = fn_8288E040(tree, &key);
    unsigned __int64 now = fn_825089A0()->time();
    if (found.node != ((Set_8288FAF8 *)tree)->end()._Mynode()) {
        found.node->_Myval.time = now;
    } else {
        ((Set_8288FAF8 *)tree)->insert(Element_8288C5A8(key, now));
    }
}
