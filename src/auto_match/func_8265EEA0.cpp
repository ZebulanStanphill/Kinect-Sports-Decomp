// The iterator constructor, begin/end and the deleting destructor are folded
// callees that other units call by their fn_ names, so this unit maps its member
// names to them with aliases. The placeholder class names are invented.
struct Iter_8265EEA0;
extern "C" void fn_82668E70(Iter_8265EEA0 *);

struct Iter_8265EEA0 {
    void *node;
    Iter_8265EEA0();
};

struct Tree_8265EEA0 {
    Iter_8265EEA0 begin();
    Iter_8265EEA0 end();
};

struct Item_8265EEA0 {
    ~Item_8265EEA0();
};

struct Pair_8265EEA0 {
    unsigned int key;
    Item_8265EEA0 *value;
};

extern "C" {
void fn_82669B20(Iter_8265EEA0 *);
unsigned char fn_8265FA90(Iter_8265EEA0 *, const Iter_8265EEA0 &);
Pair_8265EEA0 *fn_826666A0(Iter_8265EEA0 *);
void fn_8265F918(Tree_8265EEA0 *);
void fn_8265EF70(Tree_8265EEA0 *);
}

extern "C" void fn_8265EEA0(Tree_8265EEA0 *self)
{
    Iter_8265EEA0 it;
    for (it = self->begin(); fn_8265FA90(&it, self->end()); fn_82669B20(&it)) {
        Item_8265EEA0 *item = fn_826666A0(&it)->value;
        if (item)
            delete item;
    }
    fn_8265F918(self);
    fn_8265EF70(self);
}
