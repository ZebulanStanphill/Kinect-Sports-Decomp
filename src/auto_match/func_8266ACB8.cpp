struct ConstIter_8266ACB8 {
    void *ptr;
};

struct Iter_8266ACB8 : ConstIter_8266ACB8 {
    Iter_8266ACB8();
};

struct Vector_8266ACB8 {
    Iter_8266ACB8 begin();
    Iter_8266ACB8 end();
    Iter_8266ACB8 erase(ConstIter_8266ACB8);
};

struct Item_8266ACB8 {
    ~Item_8266ACB8();
};

struct State_8266ACB8 {
    int unknown;
    Vector_8266ACB8 items;
};

extern "C" {
unsigned char fn_82668EA0(const ConstIter_8266ACB8 *, const ConstIter_8266ACB8 *);
Item_8266ACB8 **fn_826638B0(Iter_8266ACB8 *, int);
}

extern "C" void fn_8266ACB8(State_8266ACB8 *self, unsigned char destroy)
{
    Iter_8266ACB8 it;
    it = self->items.begin();
    while (fn_82668EA0(&it, &self->items.end())) {
        if (destroy)
            delete *fn_826638B0(&it, 0);
        it = self->items.erase(it);
    }
}
