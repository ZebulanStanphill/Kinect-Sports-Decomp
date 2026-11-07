typedef struct Obj_82860BB8 {
    int handle;          /* 0x00 */
    int state;           /* 0x04 */
    unsigned int value;  /* 0x08 */
    float cur;           /* 0x0C */
    float next;          /* 0x10 */
} Obj_82860BB8;

extern int fn_82649240(int handle, void *buf, int size, int flags);

int fn_82860BB8(Obj_82860BB8 *p, unsigned int *outValue, float *outCur,
                unsigned char *outChanged)
{
    unsigned int v;

    *outChanged = 0;
    *outValue = p->value;
    *outCur = p->cur;
    if (p->state == 1) {
        if (p->value == 1) {
            *outValue = 0;
            return 0;
        }
        return 1;
    }
    if (p->state != 3) {
        return 0;
    }
    if (fn_82649240(p->handle, &v, 4, 0) != 0) {
        return 0;
    }
    p->cur = p->next;
    p->state = 1;
    p->value = v;
    *outValue = v;
    *outChanged = 1;
    return 1;
}
