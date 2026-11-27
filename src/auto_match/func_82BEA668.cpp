struct Request_82BEA668 {
    virtual ~Request_82BEA668();

    char reserved04[0x4c];
    unsigned short impressionCount; /* 0x50 */
    unsigned short clickCount;      /* 0x52 */
};

struct Item_82BEA668 {
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void Flush(); /* 0x0c */
};

struct List_82BEA668 {
    char reserved00[8];
    int remaining; /* 0x08 */
};

struct Client_82BEA668 {
    char reserved00[0x10];
    int state; /* 0x10 */
    char reserved14[0x2c];
    List_82BEA668 *items; /* 0x40 */
    List_82BEA668 *zones; /* 0x44 */
    char reserved48[4];
    Request_82BEA668 *update; /* 0x4c */
};

extern "C" {
extern char lbl_82196582[];
unsigned int fn_82BEA590(Client_82BEA668 *self);
unsigned int fn_82BE5240(Client_82BEA668 *self, unsigned int code, const char *format, ...);
void fn_82BE5340(List_82BEA668 *list);
void *fn_82BE5378(List_82BEA668 *list);
void fn_82BE5350(List_82BEA668 *list);
void fn_82BF18C8(void *zone);
void fn_82BF5528(Request_82BEA668 *request);
unsigned int fn_82BE6590(Request_82BEA668 *request);
unsigned int fn_82BEB9B8(Client_82BEA668 *self, Request_82BEA668 *request);
void fn_82BE66A0(Request_82BEA668 *request);
unsigned int fn_82BEA668(Client_82BEA668 *self);
}

unsigned int fn_82BEA668(Client_82BEA668 *self)
{
    unsigned int result;
    Item_82BEA668 *item;

    if (self->update == 0) {
        result = fn_82BEA590(self);
        if (result != 0)
            return result;
    }
    if (self->zones == 0) {
        fn_82BE5240(self, 0x131, lbl_82196582);
        return 0x131;
    }
    fn_82BE5340(self->zones);
    while (self->zones->remaining != 0) {
        fn_82BF18C8(fn_82BE5378(self->zones));
        fn_82BE5350(self->zones);
    }
    if (self->items == 0) {
        fn_82BE5240(self, 0x130, lbl_82196582);
        return 0x130;
    }
    fn_82BE5340(self->items);
    while (self->items->remaining != 0) {
        item = (Item_82BEA668 *)fn_82BE5378(self->items);
        if (item != 0)
            item->Flush();
        fn_82BE5350(self->items);
    }
    if (self->update != 0) {
        if (self->update->impressionCount != 0 || self->update->clickCount != 0) {
            fn_82BF5528(self->update);
            result = fn_82BE6590(self->update);
            if (result != 0) {
                self->state = 0;
                delete self->update;
                self->update = 0;
                return fn_82BE5240(self, result, ": Failed To submit ImpressionUpdate Request, deleting it");
            }
            result = fn_82BEB9B8(self, self->update);
            if (result != 0) {
                self->state = 0;
                fn_82BE66A0(self->update);
                delete self->update;
                self->update = 0;
                return fn_82BE5240(
                    self, result,
                    ": Failed To add ImpressionUpdate request to request collection, deleting it");
            }
        } else {
            delete self->update;
            if (self->state == 0xf)
                self->state = 4;
        }
    }
    self->update = 0;
    return fn_82BEA590(self);
}
