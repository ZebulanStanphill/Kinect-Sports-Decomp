typedef struct Event_8260FA78 {
    int type;
    int size;
    void *data;
} Event_8260FA78;

typedef struct Owner_8260FA78 {
    char pad[0x78];
    char dispatcher[1];
} Owner_8260FA78;

typedef struct Obj_8260FA78 {
    char pad[0x60];
    Owner_8260FA78 **owner;
} Obj_8260FA78;

extern void XMemSet(void *dst, int value, int size);
extern void fn_8257CB40(void *dispatcher, Event_8260FA78 *e, unsigned char all);

void fn_8260FA78(Obj_8260FA78 *self, int unused, char *src)
{
    Event_8260FA78 e;
    XMemSet(&e.data, 0, 4);
    e.type = 0x58;
    e.size = 0xc;
    e.data = src + 0x10;
    fn_8257CB40((*self->owner)->dispatcher, &e, 1);
}
