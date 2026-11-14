typedef struct Control_822B76B8 Control_822B76B8;
typedef struct {
    char pad0[0x3c];
    unsigned char (*isVisible)(Control_822B76B8 *);
} ControlVt_822B76B8;
struct Control_822B76B8 {
    ControlVt_822B76B8 *vt;
};

typedef struct {
    char pad0[0x7d4];
    Control_822B76B8 control;
} Widget_822B76B8;

typedef struct Element_822B76B8 Element_822B76B8;
typedef struct {
    void *f0;
    Widget_822B76B8 *(*getWidget)(Element_822B76B8 *);
    Widget_822B76B8 *(*getWidget2)(Element_822B76B8 *);
} ElementVt_822B76B8;
struct Element_822B76B8 {
    ElementVt_822B76B8 *vt;
};

typedef struct {
    char pad0[0x14];
    Element_822B76B8 *element;
    char pad18[0xd4 - 0x18];
    int visible;
    Control_822B76B8 *control;
} Item_822B76B8;

typedef struct {
    char pad0[0x24];
    int item;
} Self_822B76B8;

typedef struct {
    char pad0[0xc];
    int hidden;
} State_822B76B8;

typedef struct {
    char pad0[0x18];
    State_822B76B8 *state;
} Info_822B76B8;

typedef struct {
    char pad0[0xd4];
    Info_822B76B8 *info;
} Source_822B76B8;

extern unsigned char fn_8288B760(Element_822B76B8 *);
extern void fn_828AAF70(Control_822B76B8 *, unsigned char);

void fn_822B76B8(Self_822B76B8 *self, Source_822B76B8 *src)
{
    Item_822B76B8 *item = (Item_822B76B8 *)self->item;
    Element_822B76B8 *element;
    int visible;
    Control_822B76B8 *control;

    if (self->item != 0) {
        visible = src->info->state->hidden == 0;
        if (item->element != 0) {
            if (fn_8288B760(item->element)) {
                element = item->element;
                if (fn_8288B760(element)) {
                    control = &element->vt->getWidget2(element)->control;
                    fn_828AAF70(control, visible != 0);
                }
            } else {
                control = &item->element->vt->getWidget(item->element)->control;
                item->visible = control->vt->isVisible(control);
                return;
            }
            item->visible = visible;
        } else {
            item->visible = visible;
        }
    }
}
