// erase(first, last) of the red-black tree whose func_82660020 erases everything:
// a full range uses clear(). The class and its iterators are the placeholders that
// func_82660020.cpp declares (invented names); the folded iterator helpers keep
// their fn_ names through aliases in objects.json.
struct Node_82660020;

struct ConstIter_82660020 {
    Node_82660020 *node;
    ConstIter_82660020 operator++(int);
};

struct Iter_82660020 : ConstIter_82660020 {
    Iter_82660020(Node_82660020 *node, void *owner);
};

struct Tree_82660020 {
    Iter_82660020 begin();
    Iter_82660020 end();
    void clear();
    Iter_82660020 erase(ConstIter_82660020 position);
    Iter_82660020 erase(ConstIter_82660020 first, ConstIter_82660020 last);
};

extern "C" unsigned char fn_82669808(const ConstIter_82660020 *, const ConstIter_82660020 &);
extern "C" unsigned char fn_8265FA90(const ConstIter_82660020 *, const ConstIter_82660020 *);

Iter_82660020 Tree_82660020::erase(ConstIter_82660020 first, ConstIter_82660020 last)
{
    if (fn_82669808(&first, this->begin()) && fn_82669808(&last, this->end())) {
        this->clear();
        return this->begin();
    } else {
        while (fn_8265FA90(&first, &last)) {
            this->erase(first++);
        }
        return Iter_82660020(first.node, this);
    }
}
