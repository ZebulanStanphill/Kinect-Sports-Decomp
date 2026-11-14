typedef struct Body_8253EC80 {
    int f0;
    int f4;
    int world;
    unsigned char pad[0x20];
    unsigned int motionType;
    unsigned char pad2[0xb8];
    unsigned char state;
} Body_8253EC80;

typedef struct Obj_8253EC80 {
    unsigned char pad[0x7c0];
    Body_8253EC80 *body;
    unsigned char pad2[0x10];
    unsigned int frozen;
    int pad3;
    unsigned int savedType;
} Obj_8253EC80;

extern void fn_82D85148(int world, Body_8253EC80 *body, int a, int b);
extern void fn_82D89BD8(Body_8253EC80 *body);
extern void fn_82D89C68(Body_8253EC80 *body);

void fn_8253EC80(Obj_8253EC80 *self)
{
    Body_8253EC80 *body = self->body;

    if (self->frozen != 0) {
        if ((int)body != 0 && body->motionType == 20) {
            body->motionType = self->savedType;
            if (body->world != 0) {
                fn_82D85148(body->world, body, 0, 1);
                fn_82D89BD8(body);
            }
        }
    } else {
        if (body != 0 && body->motionType != 20) {
            self->savedType = body->motionType;
            body->motionType = 20;
            if (body->world != 0) {
                fn_82D85148(body->world, body, 0, 1);
                if (body->state != 5) {
                    fn_82D89C68(body);
                }
            }
        }
    }
}
