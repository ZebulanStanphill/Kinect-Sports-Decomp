typedef struct Pose_82280E28 {
    unsigned char data[0x70];
} Pose_82280E28;

typedef struct Point_82280E28 {
    float x;
    float y;
} Point_82280E28;

typedef struct Target_82280E28 {
    char pad00[0x38];
    Pose_82280E28 pose;    /* 0x38 */
    Point_82280E28 screen; /* 0xa8 */
} Target_82280E28;

typedef struct Item_82280E28 {
    char pad00[0x24];
    Point_82280E28 position; /* 0x24 */
    char pad2c[0x15];
    unsigned char visible; /* 0x41 */
    unsigned char active;  /* 0x42 */
} Item_82280E28;

typedef struct ItemList_82280E28 {
    Item_82280E28 *items[2];
    int current; /* 0x08 */
} ItemList_82280E28;

typedef struct Self_82280E28 {
    char pad00[0x7c];
    void *view; /* 0x7c */
    char pad80[0x4];
    Target_82280E28 *target; /* 0x84 */
} Self_82280E28;

extern void fn_8226B6A8(void *view, float time);
extern void fn_822811F8(Pose_82280E28 *pose);
extern ItemList_82280E28 *fn_82275128(void);
extern unsigned char fn_8226CA38(void *view, Point_82280E28 *in, Point_82280E28 *out);

void fn_82280E28(Self_82280E28 *self, float time)
{
    Target_82280E28 *target;
    ItemList_82280E28 *list;
    Item_82280E28 *item;
    unsigned char usable;
    Pose_82280E28 pose;
    Point_82280E28 position;
    Point_82280E28 screen;

    fn_8226B6A8(self->view, time);
    target = self->target;
    if (target != 0) {
        fn_822811F8(&pose);
        target->pose = pose;
    }
    if (self->target != 0) {
        list = fn_82275128();
        item = list->items[list->current];
        if (item != 0) {
            if (item->visible != 0 && item->active != 0) {
                usable = 1;
            } else {
                usable = 0;
            }
            if (usable != 0) {
                position = item->position;
                if (fn_8226CA38(self->view, &position, &screen) != 0) {
                    self->target->screen = screen;
                    return;
                }
            }
            screen.x = 1000.0f;
            screen.y = 1000.0f;
            self->target->screen = screen;
        }
    }
}
