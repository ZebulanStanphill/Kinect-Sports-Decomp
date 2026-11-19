typedef struct Value_82469038 {
    int first; /* 0x0 */
    int type;  /* 0x4 */

    union {
        double number;
        const char *text;
    } value; /* 0x8 */
} Value_82469038;

typedef struct Reference_82469038 {
    void *object;     /* 0x0 */
    void *references; /* 0x4 */
} Reference_82469038;

typedef struct Owner_82469038 {
    char pad000[0x130];
    int state;  /* 0x130 */
    int winner; /* 0x134 */
} Owner_82469038;

extern void fn_82273CD8(Value_82469038 *, int);
extern void fn_82273C88(Value_82469038 *);
extern Reference_82469038 *fn_82279C58(Reference_82469038 *, void *);
extern void fn_82672C20(void *, const char *, Value_82469038 *, int);
extern void fn_822315A0(void *);

void fn_82469038(Owner_82469038 *self, int state)
{
    Value_82469038 value;
    Reference_82469038 idle;
    Reference_82469038 highlightRed;
    Reference_82469038 highlightBlue;
    Reference_82469038 decision;
    Reference_82469038 winner;
    value.first = 0;
    value.type = 0;
    if (state != self->state) {
        self->state = state;
        switch (state) {
        case 0:
            fn_82672C20(fn_82279C58(&idle, self)->object, "_root.idle", 0, 0);
            if (idle.references != 0) {
                fn_822315A0(idle.references);
            }
            break;
        case 1:
            fn_82672C20(fn_82279C58(&highlightRed, self)->object, "_root.highlightRed", 0, 0);
            if (highlightRed.references != 0) {
                fn_822315A0(highlightRed.references);
            }
            break;
        case 2:
            fn_82672C20(fn_82279C58(&highlightBlue, self)->object, "_root.highlightBlue", 0, 0);
            if (highlightBlue.references != 0) {
                fn_822315A0(highlightBlue.references);
            }
            break;
        case 3:
            fn_82672C20(fn_82279C58(&decision, self)->object, "_root.decisionTime", 0, 0);
            if (decision.references != 0) {
                fn_822315A0(decision.references);
            }
            break;
        case 4:
            if (self->winner == 0) {
                fn_82273CD8(&value, 4);
                value.value.text = "red";
            } else if (self->winner == 1) {
                fn_82273CD8(&value, 4);
                value.value.text = "blue";
            } else {
                fn_82273CD8(&value, 4);
                value.value.text = "draw";
            }
            fn_82672C20(fn_82279C58(&winner, self)->object, "_root.winnerAnim", &value, 1);
            if (winner.references != 0) {
                fn_822315A0(winner.references);
            }
            break;
        }
    }
    fn_82273C88(&value);
}
