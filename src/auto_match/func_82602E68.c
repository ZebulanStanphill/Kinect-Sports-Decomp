#include "xdk/vectorintrinsics.h"

typedef struct Body_82602E68 {
    char pad0[0xc];
    float scale; /* 0x00c */
    char pad10[0x8];
    int active;  /* 0x018 */
    int visible; /* 0x01c */
    char pad20[0x40];
    __vector4 start;   /* 0x060 */
    __vector4 current; /* 0x070 */
    char pad80[0x154 - 0x80];
    int elapsed; /* 0x154 */
} Body_82602E68;

extern const float lbl_821954B0[];
extern const float lbl_82193AD8[];
extern void fn_82601E70(Body_82602E68 *body, float time);
extern void fn_82602708(void *owner, Body_82602E68 *body, float time);

void fn_82602E68(void *owner, Body_82602E68 *body)
{
    float time;

    body->scale = lbl_821954B0[14];
    time = lbl_82193AD8[6];
    fn_82601E70(body, time);
    body->active = 1;
    body->visible = 1;
    body->elapsed = 0;
    body->current = body->start;
    fn_82602708(owner, body, time);
}
