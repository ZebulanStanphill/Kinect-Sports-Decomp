typedef struct Status_8306C9B0 {
    unsigned int header[4]; /* 0x000 */
    char pad10[0x1a0];
    unsigned int flags; /* 0x1B0 */
    char pad1b4[0xc];
} Status_8306C9B0;

typedef struct Engine_8306C9B0 {
    int unk0;      /* 0x0000 */
    char state[4]; /* 0x0004 */
    int left;      /* 0x0008 */
    int right;     /* 0x000C */
    int unk10;     /* 0x0010 */
    int centre;    /* 0x0014 */
    char pad18[0x60];
    char mixer[0x1aa0];     /* 0x0078 */
    void *output;           /* 0x1B18 */
    char lock[0x24];        /* 0x1B1C */
    unsigned int header[4]; /* 0x1B40 */
    unsigned int flags;     /* 0x1B50 */
} Engine_8306C9B0;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void *memset(void *dst, int value, unsigned int size);
extern float fn_8306E7F8(float x, float lo, float hi);
extern void fn_8306DEF0(void *mixer, float dt, void *state, Status_8306C9B0 *status);
extern void fn_8306E128(void *output, float dt, int right, int left, int centre);

void fn_8306C9B0(Engine_8306C9B0 *self, float dt, Status_8306C9B0 *status)
{
    RtlEnterCriticalSection(self->lock);
    if (status != 0) {
        memset(status, 0, sizeof(Status_8306C9B0));
        status->header[0] = self->header[0];
        status->header[1] = self->header[1];
        status->header[2] = self->header[2];
        status->header[3] = self->header[3];
        status->flags = self->flags;
    }
    dt = fn_8306E7F8(dt, 0.0f, 0.05f);
    fn_8306DEF0(self->mixer, dt, self->state, status);
    fn_8306E128(self->output, dt, self->right != 0, self->left != 0, self->centre != 0);
    RtlLeaveCriticalSection(self->lock);
}
