struct ConstIter_8266A110 {
    void *ptr;
};

struct Iter_8266A110 : ConstIter_8266A110 {
    Iter_8266A110();
};

struct Vector_8266A110 {
    Iter_8266A110 begin();
    Iter_8266A110 end();
    Iter_8266A110 erase(ConstIter_8266A110);
};

struct Item_8266A110 {
    ~Item_8266A110();
};

struct State_8266A110 {
    int unknown;
    Vector_8266A110 items;
};

extern "C" {
unsigned char fn_82668EA0(const ConstIter_8266A110 *, const ConstIter_8266A110 *);
Item_8266A110 **fn_826638B0(Iter_8266A110 *, int);
}

extern "C" void fn_8266A110(State_8266A110 *self, unsigned char destroy)
{
    Iter_8266A110 it;
    it = self->items.begin();
    while (fn_82668EA0(&it, &self->items.end())) {
        if (destroy)
            delete *fn_826638B0(&it, 0);
        it = self->items.erase(it);
    }
}
