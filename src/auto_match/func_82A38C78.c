typedef struct Node_82A38C78 {
    int pad0;            /* 0x00 */
    unsigned int handle; /* 0x04 */
    char pad8[0x30 - 0x8];
    unsigned __int64 value; /* 0x30 */
} Node_82A38C78;

typedef struct MgrVt_82A38C78 {
    void *s[8];
    int (*getProperty)(unsigned int handle, int property, void *buffer, int size, int type); /* 0x20 */
} MgrVt_82A38C78;

typedef struct Mgr_82A38C78 {
    MgrVt_82A38C78 *vt; /* 0x00 */
    char pad[0x4c];
    char map[4]; /* 0x50 */
} Mgr_82A38C78;

extern Mgr_82A38C78 *lbl_83219598;
extern Node_82A38C78 *fn_82A381F0(void *map, unsigned int key, int create);
extern int fn_82A33EC8(Mgr_82A38C78 *mgr, Node_82A38C78 *node, unsigned __int64 *out);

int fn_82A38C78(unsigned int handle, int property, unsigned __int64 *buffer, int size, int type)
{
    Mgr_82A38C78 *mgr = lbl_83219598;
    Node_82A38C78 *node = fn_82A381F0(mgr->map, handle, 0);
    unsigned __int64 value;
    unsigned __int64 temp;
    int hr;

    if (node != 0) {
        if (type == 5 || type == 0x22) {
            hr = mgr->vt->getProperty(node->handle, property, buffer, size, type);
            if (hr < 0) {
                return hr;
            }
            hr = fn_82A33EC8(mgr, node, &value);
            if (type == 5) {
                buffer[0] = value;
                buffer[1] = value;
            } else {
                buffer[4] = value;
                buffer[5] = value;
            }
            return hr;
        }
        if (type == 0x13 || type == 0x14) {
            hr = fn_82A33EC8(mgr, node, &value);
            *buffer = value;
            return hr;
        }
        if (type == 0xe) {
            *buffer = node->value;
            return 0;
        }
        if (type == 0x1c) {
            hr = mgr->vt->getProperty(node->handle, property, &temp, 8, 0x13);
            if (hr < 0) {
                return hr;
            }
            *(unsigned short *)(buffer + 1) = 1;
            *buffer = temp;
            return hr;
        }
        handle = node->handle;
    }
    return mgr->vt->getProperty(handle, property, buffer, size, type);
}
