typedef struct Sub_825F50E8 {
    void *obj;          /* 0x8dc */
    int pad[7];         /* 0x8e0 .. 0x8fb */
    int state;          /* 0x8fc */
} Sub_825F50E8;

extern int fn_825552C8(void *obj);

void fn_825F50E8(int param_1)
{
    Sub_825F50E8 *s = (Sub_825F50E8 *)(param_1 + 0x8dc);
    int v;

    if (s->obj != 0) {
        switch (s->state) {
        case 2:
        case 3:
            if (fn_825552C8(s->obj) == 0) {
                return;
            }
            v = 4;
            break;
        case 1:
            v = 3;
            break;
        default:
            return;
        }
        s->state = v;
    }
}
