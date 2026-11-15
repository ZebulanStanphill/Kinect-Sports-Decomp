// Erase a tree iterator range; a full range uses clear().
// Folded iterator helpers retain their configured symbols through candidate aliases.
struct Node_82668B88;

struct ConstIter_82668B88 {
    Node_82668B88 *node;
    ConstIter_82668B88 operator++(int);
};

struct Iter_82668B88 : ConstIter_82668B88 {
    Iter_82668B88(Node_82668B88 *node, void *owner);
};

struct Tree_82668B88 {
    Iter_82668B88 begin();
    Iter_82668B88 end();
    void clear();
    Iter_82668B88 erase(ConstIter_82668B88 position);
};

extern "C" unsigned char fn_82669808(const ConstIter_82668B88 *, const ConstIter_82668B88 &);
extern "C" unsigned char fn_8265FA90(const ConstIter_82668B88 *, const ConstIter_82668B88 *);

extern "C" Iter_82668B88 fn_82668B88(Tree_82668B88 *self, ConstIter_82668B88 first, ConstIter_82668B88 last)
{
    if (fn_82669808(&first, self->begin()) && fn_82669808(&last, self->end())) {
        self->clear();
        return self->begin();
    } else {
        while (fn_8265FA90(&first, &last)) {
            self->erase(first++);
        }
        return Iter_82668B88(first.node, self);
    }
}
