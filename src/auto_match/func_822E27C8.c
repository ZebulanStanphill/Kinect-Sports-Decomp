typedef struct Entity_822E27C8 {
    char pad0[0x2188];
    int leftId;  /* 0x2188 */
    int rightId; /* 0x218c */
} Entity_822E27C8;

/* A strong reference: the object and its reference-count block. */
typedef struct Ref_822E27C8 {
    Entity_822E27C8 *object; /* 0x0 */
    void *rep;               /* 0x4 */
} Ref_822E27C8;

typedef struct Settings_822E27C8 {
    char pad0[0x204];
    int disabled; /* 0x204 */
} Settings_822E27C8;

typedef struct Context_822E27C8 {
    char pad0[0x78];
    void *pending; /* 0x78 */
    char pad7C[0x1c0 - 0x7c];
    Settings_822E27C8 *settings; /* 0x1c0 */
} Context_822E27C8;

typedef struct Self_822E27C8 {
    char pad0[0x14];
    Context_822E27C8 *context; /* 0x14 */
    char pad18[0x30 - 0x18];
    int side; /* 0x30 */
    char pad34[0x58 - 0x34];
    char entity; /* 0x58 */
} Self_822E27C8;

typedef struct Extra_822E27C8 {
    int first;
    int second;
} Extra_822E27C8;

typedef struct Message_822E27C8 {
    int id;               /* 0x0 */
    Extra_822E27C8 extra; /* 0x4 */
} Message_822E27C8;

void *memset(void *dst, int value, unsigned int size);

extern const float lbl_821CA45C[2];
extern float lbl_8218E8E8;
extern char lbl_82196288[];

extern int fn_822CE1C0(Context_822E27C8 *context, int side);
extern void fn_822B7340(Context_822E27C8 *context);
extern void fn_822E2D18(Self_822E27C8 *self, int state);
extern void fn_824D2AE8(Ref_822E27C8 *out, void *src);
extern void fn_8237C400(Entity_822E27C8 *entity, Message_822E27C8 *message, char *name);
extern void fn_822315A0(void *p);

void fn_822E27C8(Self_822E27C8 *self)
{
    float direction;
    Ref_822E27C8 entity;
    Message_822E27C8 message;
    Context_822E27C8 *context = self->context;

    if (fn_822CE1C0(context, self->side) == 0) {
        return;
    }
    if (self->context->settings->disabled == 0 && self->context->pending != 0) {
        fn_822B7340(self->context);
    }
    fn_822E2D18(self, 5);
    if (self->side == 0) {
        direction = lbl_821CA45C[1];
    } else {
        direction = 0.0f;
    }
    fn_824D2AE8(&entity, &self->entity);
    memset(&message.extra, 0, sizeof(message.extra));
    if (direction >= lbl_8218E8E8) {
        message.id = entity.object->rightId;
    } else {
        message.id = entity.object->leftId;
    }
    fn_8237C400(entity.object, &message, lbl_82196288);
    if (entity.rep != 0) {
        fn_822315A0(entity.rep);
    }
}
