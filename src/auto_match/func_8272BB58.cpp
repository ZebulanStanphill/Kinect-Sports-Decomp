// When the item's type is 0x200, builds a string from the text its sub-object
// returns and passes it, as a one-string range, to the object's target.
#include "game/String_8268C510.h"

struct Sub_8272BB58 {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0C();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1C();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
    virtual void vf2C();
    virtual void vf30();
    virtual void vf34();
    virtual void vf38();
    virtual const char *GetText();
};

struct Item_8272BB58 {
    virtual void vf00();
    virtual void vf04();
    virtual unsigned int GetType();

    int pad[2];
    Sub_8272BB58 *sub;
};

struct Range_8272BB58 {
    String_8268C510 *first;
    String_8268C510 *last;
};

struct Owner_8272BB58 {
    int pad;
    void *target;
};

extern "C" void fn_82688D90(void *a, void *b, Range_8272BB58 *range);

extern "C" void fn_8272BB58(Owner_8272BB58 *self, void *unused, Item_8272BB58 *item)
{
    if ((item->GetType() & 0xff00) == 0x200) {
        String_8268C510 text(item->sub->GetText());
        Range_8272BB58 range;
        range.first = &text;
        range.last = &text;
        fn_82688D90(self->target, self->target, &range);
    }
}
