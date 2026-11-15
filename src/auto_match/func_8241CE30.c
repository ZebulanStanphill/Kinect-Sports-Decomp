typedef struct Owner_8241CE30 {
    char padding[0x8c]; /* 0x00 */
    void *state;        /* 0x8c */
} Owner_8241CE30;

typedef struct Event_8241CE30 {
    const void *vtable; /* 0x00 */
    unsigned int type;  /* 0x04 */
    unsigned int value; /* 0x08 */
    int index;          /* 0x0c */
    float time;         /* 0x10 */
} Event_8241CE30;

extern const char lbl_821B9BC8[];
extern int fn_823B6C60(void *);
extern int fn_823B6A20(void *);
extern void fn_823B65F8(void *, Event_8241CE30 *);

void fn_8241CE30(Owner_8241CE30 **owner, void *player, unsigned int value, float time)
{
    void *state = (*owner)->state;
    int index = fn_823B6C60(state);
    if (fn_823B6A20(state) != 0 && index >= 4 && index < 24) {
        Event_8241CE30 event;
        event.time = time;
        event.value = value;
        event.index = index;
        event.type = 2;
        event.vtable = lbl_821B9BC8;
        fn_823B65F8(state, &event);
    }
}
