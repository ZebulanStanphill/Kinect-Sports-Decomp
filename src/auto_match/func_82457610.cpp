#include <set>

struct Element_824577A0 {
    int value;
};

extern "C" unsigned int lbl_821BAA38;
extern "C" void fn_8265CA20(void *p);

typedef std::set<Element_824577A0> ElementSet_82457610;

extern "C" void fn_82457610(void **self)
{
    ElementSet_82457610 *items;

    *self = &lbl_821BAA38;
    items = (ElementSet_82457610 *)(self + 1);
    items->erase(items->begin(), items->end());
    fn_8265CA20(self[2]);
}
